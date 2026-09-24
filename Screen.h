#ifndef SCREEN_H
#define SCREEN_H

#include <utility>
#include <string>
#include <vector>

#include "Menu.h"

namespace textui {

    class Screen {
        Menu menu;
    public:
        Screen(const std::string& screen_title, const std::vector<std::pair<char, std::string>>& menu_options);
        void show();
        char get_choice();
    };
    
} // END TEXTUI NAMESPACE
#endif
