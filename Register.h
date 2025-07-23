#ifndef REGISTER_H
#define REGISTER_H
#include <list>

#include "Activity.h"


class Register {
public:
    Register();
    void addActivity(Activity* activity);
    void removeActivity(Activity* activity);
    void Display();
private:
    std::list<Activity *> activities;
};



#endif
