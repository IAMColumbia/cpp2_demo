## CPP 2 Demo ##
[![Build Status](https://travis-ci.org/IAMColumbia/cpp2_demo.svg?branch=master)](https://travis-ci.org/IAMColumbia/cpp2_demo)

to add the gtest library to your project 
```
git submodule add https://github.com/google/googletest.git
```

(make sure you are in a git repository with ```git init```

## Building ##
### Linux/OSX ###
prerequisites
GCC/G++, cmake, make and git
```
    git submodule update --init --recursive
    mkdir build
    cd build
    cmake ..
    make
    ./demo-test
```
### Windows ###
Visual Studio 2019 with c++ tools and cmake installed
Git bash

```
git submodule update --init --recursive
mkdir build
cd build
cmake ..
msbuild demo.vcxproj
msbuild demo-test.vcxproj
cd Debug
demo-test.exe
```
