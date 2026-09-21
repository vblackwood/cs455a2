#ifndef MEMBER_HPP
#define MEMBER_HPP

#include <cstring>
#include <Date.hpp>

class Member {
    protected:
        char[] first;
        char[] last;
        char[] email;
        Date joined;
    public:
        Member(char[] first, char[] last, char[] email, Date joined);
        // getters for full name and all protected fields
};

#endif
