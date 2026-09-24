#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <Date.h>

class Member {
    protected:
        std::string first;
        std::string last;
        std::string email;
        Date joined;
    public:
        Member(std::string first, std::string last, std::string email, Date joined);
        string getFirst() const;
        string getLast() const;
        string getName() const;
        string getEmail() const;
        Date getJoined() const;

#endif
