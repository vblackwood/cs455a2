#ifndef OFFICER_H
#define OFFICER_H

#include "Date.h"
#include "Member.h"

enum OFFICER_ROLE {
    PRESIDENT,
    VICE_PRESIDENT,
    TREASURER,
    SECRETARY,
    EVENTS_CHAIR,
    INTERNET_CHAIR
};

class Officer : public Member {
    private:
        OFFICER_ROLE role;
        Date expiration;
    public:
        Officer(string first, string last, string email, Date joined, role OFFICER_ROLE, Date expiration);
        OFFICER_ROLE get_role() const;
        Date get_expiration() const;
};

#endif
