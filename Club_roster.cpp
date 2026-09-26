#include <iostream>

#include "Club_roster.h"

namespace club {
    Roster::Roster(std::string cn, std::string cd) : Club_name(cn), Club_description(cd) {}

    bool Roster::insert_member(const Member& member) {
        bool success = true;

        for (const auto& member_of_list : member_list) {
            if (member_of_list.get_email() == member.get_email()) {
                success = false;
                break;
            } 
        }

        if (success)
            member_list.push_back(member);

        return success;
    }

    bool Roster::remove_member(const std::string& email) {
        bool success = false;

        for (size_t i = 0; i < member_list.size(); i++) {
            if (member_list.at(i).get_email() == email) {
                success = true;
                member_list.erase(member_list.begin() + i);
                break;
            }
        }
        
        return success;
    }
    
    bool Roster::insert_officer(const Officer& officer) {
        bool success = true;

        for (const auto& officer_of_list : officer_list) {
            if (officer_of_list.get_email() == officer.get_email()) {
                success = false;
                break;
            } 
        }

        if (success)
            officer_list.push_back(officer);

        return success;
    }

    bool Roster::remove_officer(const std::string& email) {
        bool success = false;

        for (size_t i = 0; i < officer_list.size(); i++) {
            if (officer_list.at(i).get_email() == email) {
                success = true;
                officer_list.erase(officer_list.begin() + i);
                break;
            }
        }
        
        return success;
    }
    
    bool Roster::insert_event(const Event& event) {
        bool success = true;

        for (const auto& event_of_list : event_list) {
            if (event_of_list.get_name() == event.get_name()) {
                success = false;
                break;
            } 
        }

        if (success)
            event_list.push_back(event);

        return success;
    }

    bool Roster::remove_event(const std::string& name) {
        bool success = false;

        for (size_t i = 0; i < event_list.size(); i++) {
            if (event_list.at(i).get_name() == name) {
                success = true;
                event_list.erase(event_list.begin() + i);
                break;
            }
        }
        
        return success;
    }

    void Roster::display_roster() const {
        std::cout << "\n==================================================\n";
        std::cout << " CLUB NAME: " << Club_name << "\n";
        std::cout << " Description: " << Club_description << "\n";
        std::cout << "\n==================================================\n\n";

        std::cout << " CLUB OFFICERS\n";
        std::cout << "--------------------------------------------------\n";
        
        if (officer_list.empty()) {
            std::cout << " No officers are in place.\n";
        }
        else {
            for (const auto& officer : officer_list) {
                std::cout << " * " << officer.get_name() << " ("
                          << officer.get_email() << ")\n";
                std::cout << "   Role: ";

                switch (officer.get_role()) {
                    case OFFICER_ROLE::PRESIDENT:
                        std::cout << "PRESIDENT";
                        break;
                    case OFFICER_ROLE::VICE_PRESIDENT:
                        std::cout << "VICE PRESIDENT";
                        break;
                    case OFFICER_ROLE::TREASURER:
                        std::cout << "TREASURER";
                        break;
                    case OFFICER_ROLE::SECRETARY:
                        std::cout << "SECRETARY";
                        break;
                    case OFFICER_ROLE::EVENTS_CHAIR:
                        std::cout << "EVENTS CHAIR";
                        break;
                    case OFFICER_ROLE::INTERNET_CHAIR:
                        std::cout << "INTERNET CHAIR";
                        break;
                }
                std::cout << " : Term Expiration Date: "
                          << officer.get_expiration() << "\n\n";
            }
        }

        std::cout << "\n GENERAL MEMBERS\n";
        std::cout << "--------------------------------------------------\n";
        
        if (member_list.empty()) {
            std::cout << " No general members in club at the moment.\n";
        }
        else {
            for (const auto& member : member_list) {
                std::cout << " * " << member.get_name() << " ("
                          << member.get_email() << ") ";
                std::cout << "- Joined: " << member.get_joined() << "\n";
            }
        }
        std::cout << "\n";

        std::cout << " UPCOMING EVENTS\n";
        std::cout << "--------------------------------------------------\n";
        if (event_list.empty()) {
            std::cout << " No upcoming events currently scheduled.\n";
        }
        else {
            for (const auto& event : event_list) {
                std::cout << " * " << event.get_name() << "\n";
                std::cout << "   Description:    "
                          << event.get_description() << "\n";
                std::cout << "   Time:           "
                          << event.get_start() << " to "
                          << event.get_end() << "\n";
                std::cout << "   Location        "
                          << event.get_location() << "\n\n";
            }
        }
        std::cout << "==================================================\n";
    }
}
