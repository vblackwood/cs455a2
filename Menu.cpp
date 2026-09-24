#include "Menu.h"

namespace textui {

    void Menu::set_title(std::string t) {
        title = t;
    }

    std::string Menu::get_title() const {
        return title;
    }

    void Menu::add_item(char selector, std::string description) {
        item_list.push_back(Menu_item(selector, description));
    }

    void Menu::add_item(const Menu_item& item) {
        item_list.push_back(item);
    }

    Menu::const_iterator Menu::begin() const {
        return item_list.cbegin();
    }

    Menu::const_iterator Menu::end() const {
        return item_list.cend();
    }

} // END NAMESPACE TEXTUI
