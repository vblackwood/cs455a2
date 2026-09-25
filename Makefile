CXX		:= g++
CXXFLAGS	:= -Wall -std=c++17


.PHONY: all clean

all:	main

main:	main.cpp
	${CXX} ${CXXFLAGS} -o main main.cpp

clean:
	@rm -f main
