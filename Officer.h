#ifndef OFFICER_H
#define OFFICER_H

#include <string>

#include "Date.h"
#include "Member.h"

namespace club {

enum class OFFICER_ROLE {
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
        Officer(std::string first, std::string last, std::string email, Date joined, OFFICER_ROLE role, Date expiration);
        OFFICER_ROLE get_role() const;
        Date get_expiration() const;
};

}
#endif
