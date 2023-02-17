# Simple CSA checker template


## Prerequisites

You need to have `LLVM`, `CMake` and `zapcc` CXX compiler installed.

## Building

Create .cpp file you want to run your checker on, to get started:

```sh
mkdir -p test
echo "int main() {}" > test/test.cxx
```

And run `./check test/test.cxx` script, it will take care of
everything, if something doesn't work, see [check script](check),
it's quite small, and has everything documented.

In general if you want to build it manually do so like with
every other `CMake` project:

```sh
mkdir -p build
cd build
cmake .. # Look up available options in check script
cmake --build .
```
