#include "Menu_item.h"

namespace textui {

    Menu_item::Menu_item(char selector, std::string description)
        : selector(selector), description(description) {}

    std::ostream& operator<<(std::ostream& os, const Menu_item& m) {
        os << m.selector << ") " << m.description;
        return os;
    }

}
