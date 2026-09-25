CXX		:= g++
CXXFLAGS	:= -Wall -std=c++17


.PHONY: 	all clean

all:		main date datetime time member officer event roster app menuitem menu screen

main:		main.cpp
		${CXX} ${CXXFLAGS} -o main main.cpp

date:		Date.cpp
		${CXX} ${CXXFLAGS} -o date Date.cpp

datetime:	DateTime.cpp
		${CXX} ${CXXFLAGS} -o datetime DateTime.cpp

time:		Time.cpp
		${CXX} ${CXXFLAGS} -o time Time.cpp

member:		Member.cpp
		${CXX} ${CXXFLAGS} -o member Member.cpp

officer:	Officer.cpp
		${CXX} ${CXXFLAGS} -o officer Officer.cpp

event:		Event.cpp
		${CXX} ${CXXFLAGS} -o event Event.cpp

roster:		Club_roster.cpp
		${CXX} ${CXXFLAGS} -o roster Club_roster.cpp

app:		Club_app.cpp
		${CXX} ${CXXFLAGS} -o app Club_app.cpp

menuitem:	Menu_item.cpp
		${CXX} ${CXXFLAGS} -o menuitem Menu_item.cpp

menu:		Menu.cpp
		${CXX} ${CXXFLAGS} -o menu Menu.cpp

screen:		Screen.cpp
		${CXX} ${CXXFLAGS} -o screen Screen.cpp

clean:
	@rm -f main date datetime time member officer event roster app menuitem menu screen
