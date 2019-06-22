CXX = g++-5
CXXFLAGS = -std=c++14 -Wall

escape: testharn.o mastermind.o
	${CXX} ${CXXFLAGS} testharn.o mastermind.o -o escape

mastermind.o: mastermind.cc mastermind.h
	${CXX} ${CXXFLAGS} -c mastermind.cc

testharn.o: main.cc mastermind.h
	${CXX} ${CXXFLAGS} -c main.cc -o testharn.o

.PHONY: clean

clean: rm *.o escapeRoom
