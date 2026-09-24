#include "Member.h"

Member::Member(std::string first, std::string last, std::string email, Date joined) : this->first(first), this->last(last), this->email(email), this->joined(joined) {}
        // getters for full name and all protected fields
string Member::get_first() const {
	return first;
}

string Member::get_last() const {
	return last;
}

string Member::get_name() const {
	return first + " " + last;
}

string Member::get_email() const {
	return email;
}

Date Member::get_joined() const {
	return joined;
}
