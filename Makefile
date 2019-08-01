CXX = g++-5
CXXFLAGS = -std=c++14 -Wall -Wwrite-strings

escape: escape.o mastermind.o riddles.o
	${CXX} ${CXXFLAGS} escape.o mastermind.o riddles.o -o escape

mastermind.o: mastermind.cc mastermind.h
	${CXX} ${CXXFLAGS} -c mastermind.cc

riddles.o: riddles.cc riddles.h
	${CXX} ${CXXFLAGS} -c riddles.cc 

escape.o: main.cc mastermind.h riddles.h
	${CXX} ${CXXFLAGS} -c main.cc -o escape.o

.PHONY: clean

clean: rm *.o escape
