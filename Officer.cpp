#include "Officer.h"

Officer::Officer(string first, string last, string email, Date joined, OFFICER_ROLE role, Date expiration) : Member(first, last, email, joined), this->role(role), this->expiration(expiration) {}

OFFICER_ROLE Officer::get_role() const {
    return role;
}

Date Officer::get_expiration() const {
    return expiration;
}
