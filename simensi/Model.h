#pragma once
#include <ostream>
#include <cstddef>
#include "ETH_S7SimensCommands.h"
#include "Analysis.h"
#include "CommandAttribute.h"

#define Command(name, command, analysis) 
    std::string name; 
    std::string command; 
    std::string analysis;

using namespace std;
 class Model
{
public:
    std::string progStatus;
    std::string opMode;
    std::string driveLoad;
    std::string speedOvr;
    std::string cmdSpeed;
    std::string actSpeed;
    std::string feedRateOvr;
    std::string cmdFeedRate;
    std::string actFeedRate;
    std::string toolNumber;
    std::string progName;
    std::string block;
    std::string alarmNo;
    std::string axisName;

    
    
    Model();
    ~Model();
   
private:

};

 Model::Model()
{
}

 Model::~Model()
{
}