#pragma once
#include "logger.h"

class Lib01 {
	Logger mLogger;
public:
//	Lib01(Logger& logger) : mLogger(logger) {}
	
	void Print() {
		cout << "Это метод Print класса Lib01" << endl;
		mLogger.Info("Вызван метод Print класса Lib01");}
	void LoggerAddress() {
		cout << "Адрес логгера в Lib01: " << &mLogger << endl;
	}

};
