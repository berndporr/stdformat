rm -rf CMakeCache.txt Makefile
CXX=/usr/bin/clang++-19 CXXFLAGS="-stdlib=libc++" cmake .
make
