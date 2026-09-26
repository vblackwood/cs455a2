#Intermediate Makefile example

# create a compiler flags variable
SRCS=main.cpp Date.cpp DateTime.cpp Time.cpp Member.cpp Officer.cpp Event.cpp Club_roster.cpp Club_app.cpp Menu_item.cpp Menu.cpp Screen.cpp
OBJS=${SRCS:S/cpp$/o/g}
PROG=club_app

CXXFLAGS=-Wall -std=c++23

.PHONY: all clean pack unpack

all: ${PROG}

${PROG}: ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS}

pet.o: pet.h pet.cpp

clean:
	@rm -f ${PROG} ${OBJS}

pack:
	@zip -j files.zip *.cpp *.h Makefile

unpack:
	@unzip -j files.zip
