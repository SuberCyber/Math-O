CXX = g++-5
CXXFLAGS = -std=c++14 -Wall

a3q2: testharn.o mastermind.o
	${CXX} ${CXXFLAGS} testharn.o mastermind.o -o a3q2

mastermind.o: mastermind.cc mastermind.h
	${CXX} ${CXXFLAGS} -c mastermind.cc

testharn.o: main.cc mastermind.h
	${CXX} ${CXXFLAGS} -c main.cc -o testharn.o

.PHONY: clean

clean: rm *.o a3q2
