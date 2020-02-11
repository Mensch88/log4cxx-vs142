#include <iostream>
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Rpcrt4.lib")
#pragma comment(lib, "D:/Projekty/log4cxxWin32/msvc15/lib/x64/Release-static/apr.lib")
#pragma comment(lib, "D:/Projekty/log4cxxWin32/msvc15/lib/x64/Release-static/aprutil.lib")
#pragma comment(lib, "D:/Projekty/log4cxxWin32/msvc15/lib/x64/Release-static/log4cxx.lib")
#pragma comment(lib, "D:/Projekty/log4cxxWin32/msvc15/lib/x64/Release-static/xml.lib")



// include log4cxx header files.
#include "log4cxx/logger.h"
#include "log4cxx/basicconfigurator.h"
#include "log4cxx/helpers/exception.h"
#include "log4cxx/ndc.h"


#include <chrono>

int main()
{
    //auto rootLogger = log4cxx::Logger::getRootLogger();
    //rootLogger->getLoggerRepository()->


    log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("example"));
    LOG4CXX_INFO(logger, "Lorem ipsum sid doloret");
    LOG4CXX_INFO(logger, "Lorem ipsum sid doloret");

   /* log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("example"));
    log4cxx::LoggerPtr logger2(log4cxx::Logger::getLogger("example.asdf"));
    logger->info("asdf", LOG4CXX_LOCATION);
    LOG4CXX_INFO(logger, "from macro");

    log4cxx::MDC mdc("mdckey", "val");
    LOG4CXX_INFO(logger, "from macro with MDC?");

    log4cxx::NDC ndc("test");
    LOG4CXX_INFO(logger, "from macro with NDC?");
    LOG4CXX_INFO(logger2, "from macro with NDC?/2");
    LOG4CXX_INFO(logger2, "from macro with NDC?/2");


    std::chrono::steady_clock clock;
    const auto before = clock.now();
    const int max = 100;
    for (int i = 0; i < max; i++)
    {
        log4cxx::MDC mdc2("now_ns", std::to_string(clock.now().time_since_epoch().count()));
        log4cxx::MDC mdc3("iteration", std::to_string(i));
        LOG4CXX_INFO(logger, "from macro with NDC?");
    }

    const auto diff = (clock.now() - before);
    std::cout << "Logging " << max << " entries took " << diff.count() * 0.000000001 <<"s (" << (diff.count()/max) * 0.000000001 << "s per entry)" << std::endl;

    std::cout << "Hello World!\n";*/
}

