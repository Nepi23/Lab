#include "Register.h"

int Register::getListSize() {
    return activities.size();
}

Register::~Register() {
    for (Activity *activity: activities) {
        removeActivity(activity);
    }
}

void Register::addActivity(Activity *activity) {
    activities.push_back(activity);
}

void Register::removeActivity(Activity *activity) {
    activities.remove(activity);
}

list<Activity*> Register::getActivities() {
    return activities;
}

