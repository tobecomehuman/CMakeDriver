#pragma once
#include<string>
#include <cstddef>
#include"ETH_S7SimensCommands.h"
#include"Model.h"
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include"SocketClient.h"
#include"OperateResult.h"
class SimensCNCS7Driver
{
public:
    SimensCNCS7Driver();
    ~SimensCNCS7Driver();
     string DriverName= "MIOT.SimensCNCS7.Driver";

     void init();
    //OperateResult Connect();
    void DisConnect();

    bool Connect();
    
    void ReadItem();
    //
    //ValueTake<OperateResult>ReadItem(pollTag);

private:
    SocketClient _client;
    string ip = "127.0.0.1";
    int port = 8001;
    Model _model;
    ETH_S7SimensCommands _eth_S7SimensCommands;
    void HandShake();
    string send(string cmd ,string analysis);
    string getPos(int num, string address);

};