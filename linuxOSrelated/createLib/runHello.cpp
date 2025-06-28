#include "hello.h"

int main() {
    hello_world();
    return 0;
}

/*
g++ main.cpp -L. -lhello -o my_program

g++: The GNU C++ compiler.
main.cpp: The source code file for the program.
-L.: Tells the linker to look for libraries in the current directory (.).
-lhello: Tells the linker to link with the library named libhello.a. The linker automatically adds the lib prefix and the .a suffix.
-o my_program: Specifies the name of the output executable file.
*/