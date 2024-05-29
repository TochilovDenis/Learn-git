#pragma once
#include "logger.h"

class Lib02 {
	Logger mLogger;
public:
//	Lib02(Logger& logger) : mLogger(logger) {}
	Lib02(LogginLevel level = INFO) { logger.setLevel(logginlevel); }
    	void Print() {
        	cout << "Это метод Print класса Lib02" << endl;
        	mLogger.Info("Вызван метод Print класса Lib02");
	}
	
	void LoggerAddress() { 
		cout << "Адрес логгера в Lib02: " << &mLogger << endl;
	}
};


