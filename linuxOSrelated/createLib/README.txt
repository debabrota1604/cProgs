// Compile the Library Source Code into Object Code:

g++ -c hello.cpp -o hello.o

/*
g++: The GNU C++ compiler.
-c: Tells g++ to compile the source code but not link it. This creates an object file (hello.o).
hello.cpp: The source code file.
-o hello.o: Specifies the name of the output object file.
*/

// Create the Static Library (.a file):
ar rcs libhello.a hello.o
/*
ar: The archiver utility.
rcs: Options for the archiver:
r: Insert the object file into the archive (or replace if it already exists).
c: Create the archive if it doesn't exist.
s: Create an index (symbol table) in the archive. This speeds up linking.
libhello.a: The name of the static library file. The lib prefix is a convention.
hello.o: The object file to include in the library.
*/


// Next compile and run the runHello.cpp like this:
g++ runHello.cpp -L. -lhello -o my_program
./my_program