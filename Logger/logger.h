#pragma once
#include <iostream>
using namespace std;

enum class LoggingLevel { INFO = 10, DEBUG = 20};

class Logger {
	LoggingLevel mLevel;
public:
// 	Logger(LoggingLevel level) : mLevel(level) {}
	
	void setLevel(LoggingLevel level) { mLevel = level; }
	void Info(const string& value) const {
		if (mLevel <= LoggingLevel::INFO) {
			cout << "INFO: " << value << endl;
		}
	}
	
	void Debug(const string& value) const {
		if (mLevel <= LoggingLevel::DEBUG) {
			cout << "DEBUG: " << value << std::endl;
		}
	}
};
