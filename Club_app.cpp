#include "Club_app.h"

namespace club {
        Club_app::Club_app()
            : club("AMC Club", "An education and scientific computing society."),
              text_ui("-----------Club Membership Application-----------", {
              {'1', "Add Member"},
              {'2', "Delete Member"},
              {'3', "Add Officer"},
              {'4', "Delete Officer"},
              {'5', "Add Event"},
              {'6', "Delete Event"},
              {'7', "Display Club"},
              {'q', "Quit"}
    	    }) {}
          
    void Club_app::execute() {
        char choice = '0';

        while (choice != 'q') {
            text_ui.show();
            std::cout << "Enter your choice: ";
            choice = text_ui.get_choice();
            
            switch(choice) {
                case '1': add_member();
                break;
                case '2': delete_member();
                break;
                case '3': add_officer();
                break;
                case '4': delete_officer();
                break;
                case '5': add_event();
                break;
                case '6': delete_event();
                break;
                case '7': display_club();
                break;
                case 'q':
                    std::cout << "\nExiting Club Membership Application. Goodbye!\n";
                    break;
                default:
                    std::cout << "\nInvalid choice: Please choose a valid menu option.\n";
                    break;
            }
        }
    }

    std::string Club_app::get_string() {
        std::string user_text;
        std::cin >> std::ws;
        std::getline(std::cin, user_text);
        return user_text;
    }

    OFFICER_ROLE Club_app::get_position() {
        int choice = 0;
        OFFICER_ROLE role;

        while (choice < 1 || choice > 6) {
            std::cout << "\n--- Select Officer Role ---\n";
            std::cout << "1) President\n";
            std::cout << "2) Vice President\n";
            std::cout << "3) Treasurer\n";
            std::cout << "4) Secretary\n";
            std::cout << "5) Events Chair\n";
            std::cout << "6) Internet Chair\n";
            std::cout << "Enter selection (1-6): ";
            std::cin >> choice;

            switch(choice) {
                case 1:
                    role = OFFICER_ROLE::PRESIDENT;
                    break;
                case 2:
                    role = OFFICER_ROLE::VICE_PRESIDENT;
                    break;
                case 3:
                    role = OFFICER_ROLE::TREASURER;
                    break;
                case 4:
                    role = OFFICER_ROLE::SECRETARY;
                    break;
                case 5:
                    role = OFFICER_ROLE::EVENTS_CHAIR;
                    break;
                case 6:
                    role = OFFICER_ROLE::INTERNET_CHAIR;
                    break;
                default:
                    std::cout << "\nInvalid choice. Please choose a number between 1 and 6.\n";
            }
        }
        
        return role;
    }

    void Club_app::add_member() {
        std::cout << "Enter First Name: ";
        std::string first = get_string();
        std::cout << "Enter Last Name: ";
        std::string last = get_string();
        std::cout << "Enter Email: ";
        std::string email = get_string();

        unsigned short year, month, day;
            
        std::cout << "Enter Join Year (e.g. 2026): ";
        std::cin >> year;
        
        std::cout << "Enter Join Month (1-12):     ";
        std::cin >> month;

        std::cout << "Enter Join Day (1-31):       ";
        std::cin >> day;

        Date join_date(year, month, day);

        if (club.insert_member(Member(first, last, email, join_date))) {
            std::cout << "\nSuccess! Member successfully added!\n";
        }       
        else {
            std::cout << "\nError: A member with that email already exists.\n";
        }
    }

    void Club_app::delete_member() {
        std::cout << "Enter the email of the member you wish to delete: ";
        std::string email = get_string();
        
        if (club.remove_member(email)) {
            std::cout << "Success! The member has been deleted.\n";
        }
        else {
            std::cout << "Error: No member with such an email was found.\n";
        }
    }

    void Club_app::add_officer() {
        std::cout << "Enter First Name: ";
        std::string first = get_string();
        std::cout << "Enter Last Name: ";
        std::string last = get_string();
        std::cout << "Enter Email: ";
        std::string email = get_string();

        unsigned short year, month, day;
            
        std::cout << "Enter Join Year (e.g. 2026): ";
        std::cin >> year;
        
        std::cout << "Enter Join Month (1-12):     ";
        std::cin >> month;

        std::cout << "Enter Join Day (1-31):       ";
        std::cin >> day;

        Date join_date(year, month, day);

        OFFICER_ROLE role = get_position();
        
        std::cout << "Enter Expiration Year (e.g. 2026): ";
        std::cin >> year;
        
        std::cout << "Enter Expiration Month (1-12):     ";
        std::cin >> month;

        std::cout << "Enter Expiration Day (1-31):       ";
        std::cin >> day;

        Date expr_date(year, month, day);

        if (club.insert_officer(Officer(first, last, email, join_date, role, expr_date))) {
            std::cout << "\nSuccess! Officer successfully added!\n";
        }       
        else {
            std::cout << "\nError: An officer with that email already exists.\n";
        }
    }

    void Club_app::delete_officer() {
        std::cout << "Enter the email of the officer you wish to delete: ";
        std::string email = get_string();
        
        if (club.remove_officer(email)) {
            std::cout << "Success! The officer has been deleted.\n";
        }
        else {
            std::cout << "Error: No officer with such an email was found.\n";
        }
    }

    void Club_app::add_event() {
        std::cout << "Enter Event Name:        ";
        std::string name = get_string();
        std::cout << "Enter Event Description: ";
        std::string desc = get_string();
        std::cout << "Enter Event Location:    ";
        std::string loc  = get_string();

        unsigned short year, month, day, hour, min;
        char am_pm;

        std::cout << "\n[SET START TIMESTAMP]\n";
        std::cout << "Enter Year (e.g. 2026):  ";
        std::cin >> year;
        std::cout << "Enter Month (1-12):      ";
        std::cin >> month;
        std::cout << "Enter Day (1-31):        ";
        std::cin >> day;
        std::cout << "Enter Hour (1-12):       ";
        std::cin >> hour;
        std::cout << "Enter Minute (0-59):     ";
        std::cin >> min;
        std::cout << "Enter AM/PM (A or P):    ";
        std::cin >> am_pm;
    
        DateTime start_dt(Date(year, month, day), Time(hour, min, am_pm));

        std::cout << "\n[SET END TIMESTAMP]\n";
        std::cout << "Enter Year (e.g. 2026):  ";
        std::cin >> year;
        std::cout << "Enter Month (1-12):      ";
        std::cin >> month;
        std::cout << "Enter Day (1-31):        ";
        std::cin >> day;
        std::cout << "Enter Hour (1-12):       ";
        std::cin >> hour;
        std::cout << "Enter Minute (0-59):     ";
        std::cin >> min;
        std::cout << "Enter AM/PM (A or P):    ";
        std::cin >> am_pm;
    
        DateTime end_dt(Date(year, month, day), Time(hour, min, am_pm));

        Event new_event(name, desc, start_dt, end_dt, loc);

        if (club.insert_event(new_event)) {
        std::cout << "\nSuccess: The event has been scheduled!\n";
        }
        else {
        std::cout << "\nError: An event with that name already exists.\n";
        }
    }

    void Club_app::delete_event() {
        std::cout << "Enter the name of the event you wish to delete: ";
        std::string name = get_string();

        if (club.remove_event(name)) {
            std::cout << "Success! The event has been deleted.\n";
        }
        else {
            std::cout << "Error: No event with such a name was found.\n";
        }
    }

    void Club_app::display_club() {
        club.display_roster();
    }

    void Club_app::run() {
        execute();
    }
}
