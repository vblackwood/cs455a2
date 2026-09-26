#ifndef CLUB_APP_HPP
#define CLUB_APP_HPP

#include "Screen.h"
#include "Club_roster.h"

namespace club {
    class Club_app {
        Roster club;
        textui::Screen text_ui;

        void execute();
        std::string get_string();
        OFFICER_ROLE get_position();
        void add_member();
        void delete_member();
        void add_officer();
        void delete_officer();
        void add_event();
        void delete_event();
        void display_club(); 
    public:
        Club_app();
        void run();
    };
}
#endif
