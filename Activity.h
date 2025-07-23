#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>
using namespace std;

class Activity {
public:
    Activity(string desc, string start, string end);
    string getDesc();
    string getStart();
    string getEnd();
private:
    string desc;
    string start;
    string end;
};


#endif
