#pragma once
#include<string>
#include<winsock2.h>
#pragma comment(lib,"ws2_32")//Standard socket Api
class CTcpServer
{
public:
    CTcpServer(std::string strIp, unsigned int uPort);

    virtual ~CTcpServer();

    //初始化网络服务断
    bool InitServer();

    //发送数据
    bool SendMsg(const std::string& strMsg);

    //接收数据
    bool RecvMsg();
private:
    //监听端口
    unsigned int m_uPort;
    //监听IP地址
    std::string m_strIp;
    
    SOCKET m_listenSocket = NULL;//监听套接字
    SOCKET m_clientSocket = NULL;//客户端套接字
};


