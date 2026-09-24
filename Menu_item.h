#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <ostream>
#include <string>
namespace textui {

    class Menu_item {
        char selector;
        std::string description;
    public:
        Menu_item(char selector, std::string description);
        friend std::ostream& operator<<(std::ostream& os, const Menu_item& m);
    };

}
#endif
