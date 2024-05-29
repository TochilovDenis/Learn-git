#include<iostream>
#include"lib-01.h"
#include"lib-02.h"
using namespace std;
int main()
{
	//Logger::getLogger()->setLevel(INFO);
	Logger::getLogger()->setLevel(DEBUG);	
	Lib01 lib01;
	Lib02 lib02;
	
	lib01.Print();
	lib02.Print();
	lib01.LoggerAddress();
	lib02.LoggerAddress();
}

