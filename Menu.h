#ifndef MENU_H
#define MENU_H

#include "Menu_item.h"
#include <string>
#include <vector>
namespace textui {

    class Menu {
        std::string title;
        std::vector<Menu_item> item_list;
    public:
        using const_iterator = std::vector<Menu_item>::const_iterator;

        void set_title(std::string t);
        std::string get_title() const;
        void add_item(char selector, std::string description);
        void add_item(const Menu_item& item);
        const_iterator begin() const;
        const_iterator end() const;
    };

} // END NAMESPACE TEXTUI
#endif
