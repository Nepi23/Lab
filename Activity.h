#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>


class Activity {
public:
    Activity();
    std::string getDesc();
    std::string getStart();
    std::string getEnd();
private:
    std::string desc;
    std::string start;
    std::string end;
};


#endif
