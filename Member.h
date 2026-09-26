#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include "Date.h"

namespace club {

class Member {
    protected:
        std::string first;
        std::string last;
        std::string email;
        Date joined;
    public:
        Member(std::string first, std::string last, std::string email, Date joined);
        std::string get_first() const;
        std::string get_last() const;
        std::string get_name() const;
        std::string get_email() const;
        Date get_joined() const;
};

}
#endif
