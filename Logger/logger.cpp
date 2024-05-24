#include "logger.h"
#include "lib-01.h"
#include "lib-02.h"

int main() {
    // Logger logger;
    // cout << "Address of Logger object: " << &logger << endl;
    
    // Lib01 lib01;
    // lib01.Print(logger);

    // Lib02 lib02;
    // lib02.Print(logger);
    
    Logger logger(LoggingLevel::DEBUG);
    logger.Info("This is an info message.");
    logger.Debug("This is a debug message.");

    return 0;
}
