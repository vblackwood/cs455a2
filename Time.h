#ifndef TIME_HPP
#define TIME_HPP

class Time {

private:
    unsigned short hour;

public:
    unsigned short minute;
    Time(unsigned short hour, unsigned short minute, char am_pm);
    // operator<<()

};

#endif
