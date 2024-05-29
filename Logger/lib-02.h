#include "logger.h"

class Lib02
{
	Logger* logger;
public:
	Lib02() { logger = Logger::getLogger(); }
	void Print() { 
		logger->info("this is the info Print method of the lib02 class\n");
		logger->debug("this is the debug Print method of the lib02 class\n");
	}
	void LoggerAddress() { cout << "logger address: " << Logger::getLogger() << endl; }
};
