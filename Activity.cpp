#include "Activity.h"
#include <string>
#include <utility>
using namespace std;

Activity::Activity(string desc, string start, string end): desc(move(desc)), start(move(start)), end(move(end)) {
}

string Activity::getDesc() {
    return desc;
}

string Activity::getStart() {
    return start;
}

string Activity::getEnd() {
    return end;
}
