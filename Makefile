CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: test main

# runs for "main"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
main:	main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main 
# name of output should be consistent
clean:
	rm main test
