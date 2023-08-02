#pragma once
#include<cstddef>
#include"Number.h"
#include <vector>

using namespace std;
/// <summary>
/// 操作模式
/// </summary>
enum SimensMode
{

    JOG,//手动模式
    TEACHIN,//子运行模式示教
    MDA,//mdi
    AUTO,//自动运行模式
    REPOS,//再定位，重新逼近轮廓
    REFPOINT,//返回参考点
    VAR,//以可变增量运行
    INC,//增量进给
    OTHER//未知
};

/// <summary>
/// 运行状态
/// </summary>
enum SimensStatus
{
    RESET = 0,//复位
    STOP = 1,//程序块结束
    HOLD = 2,//进给保持
    START = 3,//程序运行 
    SPENDLE_CW_CCW = 4,//主轴正反转
    OTHER = 5
};

/// <summary>
/// 解析操作模式
/// </summary>
/// <param name="datas"></param>
/// <param name="len"></param>
/// <returns></returns>
int AnalusisModeData(byte * datas)
{
    if (datas[24] == 0x02)
    {
        if (datas[31] == 0x00)
        {
            if (datas[25] == 0x00)
            {
                return (int)SimensMode::JOG;
            }
            else if (datas[25] == 0x01)
            {
                return (int)SimensMode::MDA;
            }
            else if (datas[25] == 0x02)
            {
                return (int)SimensMode::AUTO;
            }
            else
            {
                return (int)SimensMode::OTHER;
            }
        }
        else if (datas[31] == 0x03)
        {
            return (int)SimensMode::REFPOINT;
        }
        else
        {
            return (int)SimensMode::OTHER;
        }
    }
    else
    {
        return (int)SimensMode::OTHER;
    }
}

/// <summary>
/// 解析运行状态
/// </summary>
/// <param name="datas"></param>
/// <returns></returns>
int AnalusisStatusData(byte* datas) 
{
    if (datas[24] == 0x02)
    {
        if ((datas[25] == 0x00) && (datas[31] == 0x05))
            return ((int)SimensStatus::RESET);
        else if ((datas[25] == 0x02) && (datas[31] == 0x02))
            return ((int)SimensStatus::STOP);
        else if ((datas[25] == 0x01) && (datas[31] == 0x03))
            return ((int)SimensStatus::START);
        else if ((datas[25] == 0x01) && (datas[31] == 0x05))
            return ((int)SimensStatus::SPENDLE_CW_CCW);
        else
            return ((int)SimensStatus::OTHER);
    }
    else 
    {
        return ((int)SimensStatus::OTHER);
    }
}

float  AnalysisFloatData(byte* datas)
{
    auto value = *reinterpret_cast<float*>(datas[25]);
    std::reverse(reinterpret_cast<char*>(&value), reinterpret_cast<char*>(&value) + sizeof(float));
    return value;
}

double AnalysisDoubleData(byte* datas)
{
    auto value = NULL;
    if (datas[3] == 33)
    {
        value = *reinterpret_cast<double*>(datas[25]);
        std::reverse(reinterpret_cast<char*>(&value), reinterpret_cast<char*>(&value) + sizeof(double));
    }
    else 
    {
        value = *reinterpret_cast<double*>(datas[0]);
        std::reverse(reinterpret_cast<char*>(&value), reinterpret_cast<char*>(&value) + sizeof(double));
    }

    return value;
}

int AnalysisInt32Data(vector<unsigned char> datas)
{
    string ss;
    for (unsigned char c : datas)
    {
        ss += to_string(c) + "-";
    }
    ss = ss.substr(0, ss.size() - 1);

    string s(reinterpret_cast<char*>(datas.data() + 25));
    s.erase(remove(s.begin(), s.end(), '\0'), s.end());

    int value = (datas[25] << 8) | datas[26];

    return value;
}

string AnalysisStrData(vector<unsigned char> datas)
{
    string ss;
    for (unsigned char c : datas)
    {
        ss += to_string(c) + "-";
    }
    ss = ss.substr(0, ss.size() - 1);
    ss.erase(remove(ss.begin(), ss.end(), '\0'), ss.end());
    string value = (datas[25] << 8) | datas[26];
    return value;

}

int AnalysisAlarm(byte* datas) 
{
    auto s = datas;
}

