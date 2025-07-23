#ifndef REGISTER_H
#define REGISTER_H
#include <list>

#include "Activity.h"


class Register {
public:
    void addActivity(Activity* activity);
    void removeActivity(Activity* activity);
    void Display();
    int getListSize();
    ~Register();
private:
    std::list<Activity *> activities;
};



#endif
