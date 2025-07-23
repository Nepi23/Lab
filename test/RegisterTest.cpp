#include "../Register.h"
#include "gtest/gtest.h"
#include "../Activity.h"

TEST(Register, Constructor) {
    Register r;
    ASSERT_EQ(0,r.getListSize());
}


TEST(Register, removeActivityTest) {
    Register r;
    Activity *a=new Activity("a","b","c");
    r.addActivity(a);
    r.removeActivity(a);
    ASSERT_EQ(0,r.getListSize());
}