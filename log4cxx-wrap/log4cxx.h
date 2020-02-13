#pragma once

#if !(defined(_MT) && defined(_DLL))
#error Only multithreaded debug projects are supported 
#endif

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Rpcrt4.lib")

// include log4cxx header files.
#define LOG4CXX_STATIC
#include "log4cxx/logger.h"
#include "log4cxx/basicconfigurator.h"
#include "log4cxx/helpers/exception.h"
#include "log4cxx/ndc.h"

#define LOG4CXX_REACHED_HERE LOG4CXX_DEBUG(logger, "Reached " __FUNCTION__ "()")

#define LOG4CXX_EXCEPTION(logger, ex) LOG4CXX_ERROR(logger, "Exception: " << ex.what())

