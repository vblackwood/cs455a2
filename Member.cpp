#include "Member.h"

namespace club {

Member::Member(std::string first, std::string last, std::string email, Date joined) : first(first), last(last), email(email), joined(joined) {}

std::string Member::get_first() const {
    return first;
}

std::string Member::get_last() const {
    return last;
}

std::string Member::get_name() const {
    return first + " " + last;
}

std::string Member::get_email() const {
    return email;
}

Date Member::get_joined() const {
    return joined;
}

}
