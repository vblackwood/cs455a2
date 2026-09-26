#ifndef CLUB_ROSTER_HPP
#define CLUB_ROSTER_HPP

#include <string>
#include <vector>

#include "Member.h"
#include "Officer.h"
#include "Event.h"
#include "Date.h"

namespace club {

    class Roster {
        std::string Club_name;
        std::string Club_description;
        std::vector<Officer> officer_list;
        std::vector<Member> member_list;
        std::vector<Event> event_list;
    public:
        Roster(std::string cn, std::string cd);
        bool insert_member(const Member& member);
        bool remove_member(const std::string& email);
        bool insert_officer(const Officer& officer);
        bool remove_officer(const std::string& email);
        bool insert_event(const Event& event);
        bool remove_event(const std::string& name);
        void display_roster() const;
    };

}

#endif
