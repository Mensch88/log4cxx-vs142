#include <iostream>
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Rpcrt4.lib")

// include log4cxx header files.
#include "log4cxx/logger.h"
#include "log4cxx/basicconfigurator.h"
#include "log4cxx/helpers/exception.h"
#include "log4cxx/ndc.h"

#include <chrono>

int main()
{
    printf("begin\n");
    log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("example"));
    LOG4CXX_INFO(logger, "Lorem ipsum sid doloret");

    using namespace std::chrono;
    using namespace std::chrono_literals;

    steady_clock clock;
    const auto before = clock.now();
    const auto until = before + 1000ms;
    int iteration = 0;
    while (clock.now() < until)
    {
        iteration++;
        log4cxx::MDC mdc("now_ns", std::to_string(clock.now().time_since_epoch().count()));
        LOG4CXX_DEBUG(logger, "beep #" << iteration);
    }
    const auto after = clock.now();
    const auto diff = after - before;

    using milliseconds_frac = duration<double, std::milli>;
    using seconds_frac = duration<double>;

    LOG4CXX_INFO(logger, "Entities per second: " << iteration / duration_cast<seconds_frac>(diff).count());
    LOG4CXX_INFO(logger, "Miliseconds per entity: " << duration_cast<milliseconds_frac>(diff).count() / iteration);

    printf("end\n");
}

