rm -rf CMakeCache.txt Makefile
CXXFLAGS="-stdlib=libc++" CXX=/usr/bin/clang++-18 cmake .
make

