#include "logger.h"
#include "lib-01.h"
#include "lib-02.h"

int main() {
     // Logger logger;
     // cout << "Address of Logger object: " << &logger << endl;
    
     Lib01 lib01;
     lib01.Print();

     Lib02 lib02;
     lib02.Print();

     lib01.LoggerAddress();
     lib02.LoggerAddress();   


     // Logger logger1(LoggingLevel::DEBUG);
     // logger1.Info("This is an info message.");
     // logger1.Debug("This is a debug message.");

     return 0;
}
