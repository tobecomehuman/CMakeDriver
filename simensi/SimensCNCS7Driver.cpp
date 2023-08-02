#include"SimensCNCS7Driver.h"
#include"rapidjson/encodings.h"
using namespace std;
SimensCNCS7Driver::SimensCNCS7Driver()
{
    init();
}

SimensCNCS7Driver::~SimensCNCS7Driver()
{
}
bool SimensCNCS7Driver::Connect()
{
    if (_client.isConnected) 
    {
        cout << "已连接\n";
        return true;
    }
    auto flag = _client.Connect();
    cout << "SimensCNC 成功连接:"<<flag<<endl;
    if (_client.isConnected) 
    {
        HandShake();
        cout << "握手连接成功\n";
        return true;
    }
    return flag;
}

void SimensCNCS7Driver::ReadItem()
{
    try
    {

    }
    catch (const std::exception&)
    {
        cout << "读取失败!!!\n";
        exception::exception("Error!!!");
    }
}

void SimensCNCS7Driver::init()
{
    _client=SocketClient(ip,port);
}

void SimensCNCS7Driver::DisConnect()
{
    _client.isConnected = false;
    _client.~SocketClient();
}


void SimensCNCS7Driver::HandShake()
{
    //string handShakeCmd;
    //for (int i = 0; i < 22; i++)
    //{
    //    handShakeCmd += ETH_S7SimensCommands::FIRST_HAND_SHAKE[i];
    //}
    //auto buffer = new byte[1024];
    //handShakeCmd.clear();

    /*for (int i = 0; i < 25; i++)
    {
        handShakeCmd += ETH_S7SimensCommands::SECOND_HAND_SHAKE[i];
    }
    _client.Send(handShakeCmd);*/
    _client.Send(ETH_S7SimensCommands::FIRST_HAND_SHAKE);
    auto receive = _client.RecvByte();
    _client.Send(ETH_S7SimensCommands::SECOND_HAND_SHAKE);
    receive = _client.RecvByte();
    _client.Send(ETH_S7SimensCommands::THIRD_HAND_SHAKE);
    receive = _client.RecvByte();
}

string SimensCNCS7Driver::send(string cmd, string analysis) 
{
};

//string SimensCNCS7Driver::getPos(int num, string address)
//{
//    std::vector<byte>buffer;
//    int i = 0;
//    if (address == "machinePos") // 机械坐标
//    {
//        while (i < 36)
//        {
//            buffer.push_back(_eth_S7SimensCommands.MACHINE_POS[i]);
//            i++;
//        }
//
//    }
//    else if (address == "relPos") // 相对坐标
//    {
//        while (i)
//        {
//            buffer.push_back(_eth_S7SimensCommands.RELATIVELY_POS[i]);
//            i++;
//        }
//    }
//    else if (address == "remPos") // 剩余坐标
//    {
//        while (i)
//        {
//            buffer.push_back(_eth_S7SimensCommands.REMAIN_POS[i]);
//            i++;
//        }
//    }
//
//    if (!buffer.empty())
//    {
//        buffer[26] = static_cast<byte>(num);
//
//        _client.Send(buffer.data(), buffer.size());
//        std::this_thread::sleep_for(std::chrono::milliseconds(10));
//        auto bytes = _client.ReceiveByte();
//        auto value = AnalysisDoubleData(bytes);
//        return value;
//    }
//    else
//    {
//        return 0;
//    }
//};