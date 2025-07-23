#ifndef REGISTER_H
#define REGISTER_H
#include <list>

#include "Activity.h"


class Register {
public:
    void addActivity(Activity *activity);

    void removeActivity(Activity *activity);

    list<Activity *> getActivities();

    int getListSize();

    ~Register();

private:
    list<Activity *> activities;
};


#endif
