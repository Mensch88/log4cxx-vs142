log4cxx shared project for VS 2019
==================================

Usage: add project to solution, reference it in projects that will use it.  
Include `<log4cxx.h>` and optionally other log4cxx headers (always after it).

Automatically works with x64 release and debug.  
Works only if you compile as Multi-threaded (debug) DLL.  
Tested with Platform Toolset 142.

The libraries are compiled as Multi-threaded DLL (`/MD` and `/MDd`) and deployed in static libraries (`.lib` files).

For other versions and sources, look at [the main solution](https://github.com/chanibal/log4cxx-vs142).
