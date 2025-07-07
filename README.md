# stdformat
A small program testing `std::format` of C++20. It's basically
a test which compilers can actually compile C++20 sources at the moment
(12 May 2025).

Turns out that gcc under Debian bookworm can't compile
C++20 but it has clang-19 as an option which can do it
but only if it uses also the clang libstdc++.

Any later Debian version is doing fine. Also Ubuntu Noble
has no issues.

## Prerequisites

 - clang: `apt install clang-18 libc++-18-dev` or `clang-19 libc++-19-dev`
 - gcc: `apt install libstdc++-14-dev g++-13` or `g++-14`

## Building

 - gcc:
```
cmake .
make
```

 - clang:
There are two shell scripts `build-with-clang18.sh` (ubuntu Noble) or `build-with-clang19.sh` (Debian Bookworm) for clang 18
or clang 19 respectively.

## Credits

Based on a discussion on stackoverflow.
