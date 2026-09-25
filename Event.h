#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event {
    private:
        string name;
        string description;
        DateTime start;
        DateTime end;
        string location;
    public:
        Event(string name, string description, DateTime start, DateTime end, string location);
        string get_name() const;
        string get_description() const;
        DateTime get_start() const;
        DateTime get_end() const;
        string get_location() const;
};

#endif
