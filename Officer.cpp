#include "Officer.h"

namespace club {

Officer::Officer(std::string first, std::string last, std::string email, Date joined, OFFICER_ROLE role, Date expiration) : Member(first, last, email, joined), role(role), expiration(expiration) {}

OFFICER_ROLE Officer::get_role() const {
    return role;
}

Date Officer::get_expiration() const {
    return expiration;
}

}
