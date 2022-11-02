CXX = g++
CXXFLAGS	= -std=c++17 -Wall
CXXTESTFLAGS = --coverage # can be used to generate files that help calculate unit test coverage
CXXGDB = -ggdb

all: test

clean:
	rm test MathOperations.o

test: MathOperations.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp MathOperations.o -o test

cov: mathops.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp MathOperations.o -o test

MathOperations.o: MathOperations.cpp
	$(CXX) $(CXXFLAGS) -c MathOperations.cpp
