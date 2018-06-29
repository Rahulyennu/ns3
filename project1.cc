
#include "ns3/core-module.h"

#include <iostream>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("ns-lect1-project1");

static void printInfo(std::string name,std::string student_num,float period) {
	std::cout<<Simulator::Now()<<"\tname: "<<name<<", student number: "<<student_num<<std::endl;
	Simulator::Schedule(Seconds(period),&printInfo,name,student_num,period);
}

int main (int argc, char *argv[])
{
	CommandLine cmd;
	std::string name,student_num;
        float period=0;
        if(argc != 4)
                std::cout<<"parameters error!!"<<std::endl;
        else{
	cmd.AddValue ("n", "your name", name);
        cmd.AddValue ("no", "your student num", student_num);
        cmd.AddValue ("p", "period", period);
	cmd.Parse(argc,argv);
	printInfo(name,student_num,period);
	Simulator::Stop(Seconds(5));
	Simulator::Run ();
	Simulator::Destroy ();
        }
}
