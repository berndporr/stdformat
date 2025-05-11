# stdformat
small program testing std::format of C++20

## Prerequisites

```
apt install libstdc++-14-dev
```

 - clang: `apt install clang-18 libc++-18-dev` or `clang-19 libc++-19-dev`
 - gcc: `apt install g++-13` or `g++-14`

## Building

 - gcc:
```
cmake .
make
```

 - clang:
There are two shell scripts `build-with-clang18.sh` (ubuntu) or `build-with-clang19.sh` (raspberry pi) for clang 18
or clang 19 respectively.

## Credits

Based on a discussion on stackoverflow.

