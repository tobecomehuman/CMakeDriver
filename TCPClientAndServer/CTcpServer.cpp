#include "CTcpServer.h"
#include<iostream>
using namespace std;
CTcpServer::CTcpServer(string strIp, unsigned int uPort) :m_strIp(strIp), m_uPort(uPort) 
{}

CTcpServer::~CTcpServer() 
{
    if (m_clientSocket)
    {
        closesocket(m_clientSocket);
        m_clientSocket = NULL;
    }
    if (m_listenSocket)
    {
        closesocket(m_listenSocket);
        m_listenSocket = NULL;
    }
    WSACleanup();
}

bool CTcpServer::InitServer() 
{
    WSADATA wsaData;
    //WSAStartup()函数的调用指明Windows Sockets API的版本号及获得特定Windows Sockets实现的细节
    // ，应用程序或DLL只能在一次成功的WSAStartup()
    // 调用之后才能调用进一步的Windows Sockets API函数。
    //该函数执行成功后返回0。
    if (WSAStartup(MAKEWORD(2,2), &wsaData)!=0)//检测Windows socket版号
    {
        cout << "Initiate windows socket failed!\n";
        return false;
    }
    if ((m_listenSocket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)//检测监听器套接字创建
    {
        std::cout << "Create socket failed!\n";
        return false;
    }

    sockaddr_in sockadd = {0,};

    sockadd.sin_family = AF_INET;//IPV4协议簇
    sockadd.sin_port = htons(m_uPort);//监听端口
    sockadd.sin_addr.S_un.S_addr = htonl(INADDR_ANY);//监听任意IP

    //监听套接字与IP地址及端口绑定 怎么样绑定绑定后的形态是什么样的，字符串类型吗
    if (bind(m_listenSocket, (struct sockaddr*)&sockadd, sizeof(sockadd)) == SOCKET_ERROR)
    {
        closesocket(m_listenSocket);
        m_listenSocket = INVALID_SET_FILE_POINTER;
        cout << "Socket bind failed!\n";
        return false;
    }
    //测试监听套接字
    if (listen(m_listenSocket,1)==SOCKET_ERROR)
    {
        closesocket(m_listenSocket);
        m_listenSocket = INVALID_SOCKET;
        cout << "Socket listen error";
        return false;
    }
    sockaddr_in addr = {0,};
    int addrlen = sizeof(addr);

    //wait for the client connection
    m_clientSocket = accept(m_listenSocket,(struct sockaddr*)&addr,&addrlen);

    //test the client connection
    if (m_clientSocket == SOCKET_ERROR) 
    {
        closesocket(m_clientSocket);
        m_clientSocket = INVALID_SOCKET;
        cout << "Socket accept failed\n";
        return false;
    }
    return true;
}

bool CTcpServer::SendMsg(const string& strMsg) 
{
    if (!m_clientSocket) return false;
    if (send(m_clientSocket,strMsg.c_str(),strMsg.length(),0)!=INVALID_SOCKET)
    {
        cout << "send successed" << strMsg << endl;
    }
    else
    {
        cout << "send failed" << endl;
    }
}

bool CTcpServer::RecvMsg() 
{
    if (!m_clientSocket)
    {
        return false;
    }
    const int iBufSize = 1024;
    char recvBuf[iBufSize] = { 0, };
    auto iRecvSize = recv(m_clientSocket,recvBuf,iBufSize,0);

    if (iRecvSize<=0)
    {
        cout << "Receive failed!";
        return false;
    }
    else 
    {
        cout << "Receive successed";
        return true;
    }
}