# About
this project is demonstration of a simple unit testing mechanism in c++ for an application(most precisely an executable)

there is a simple app(executable) which have some testable functionality as Sum(). there could be a library which could hold the testable functionality but I wanted to test out the executable itself.

## Approach
The approach for this solution is to collect the testable obj files from executable and create a library from it to test out, as we can't test executable.

I've used below
1. Cmake as build system(see the CMakeLists.txt files for parent and sub projects).
2. CTest as basic test system which was further updated with GTest(GoogleTest Framework) to provide more advance functionalities.

## How to Build
the entire repository can be downloaded and can be build from cmake. I've tested building it in vscode(with cmake-tools) and in visual studio 2022(with cmake-gui) and it worked fine.

## Limitations
the only know issue is that when we build it for visual studio 2022, the test explorer take <Empty Namespace> for namespace. It is because of how C++ handles namespace is different to C#.

to solve this, you just need to disable Namespaces from Group By in Test Explorer.
