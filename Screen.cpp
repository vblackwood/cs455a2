#include "Screen.h"
#include <iostream>
#include <limits>

namespace textui {
    Screen::Screen(
        const std::string& screen_title,
        const std::vector<std::pair<char, std::string>>& menu_options
    ) {
        menu.set_title(screen_title);
        for (auto& item_pair : menu_options) {
            menu.add_item(item_pair.first, item_pair.second);
        }
    }

    void Screen::show() {
        std::cout << menu.get_title() << "\n";
        for (const auto& item : menu) {
            std::cout << item << "\n";
        }
    }

    char Screen::get_choice() {
        char choice;
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return choice;
    }
}
