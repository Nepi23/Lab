#include "../Register.h"
#include "gtest/gtest.h"
#include "../Activity.h"

TEST(Register, Constructor) {
    Register r;
    ASSERT_EQ(0,r.getListSize());
}


TEST(Register, removeActivityTest) {
    Register* r = new Register();
    Activity *a=new Activity("a","b","c");
    Activity *a1=new Activity("a","b","c");
    r->addActivity(a);
    r->addActivity(a1);
    r->removeActivity(a);
    ASSERT_EQ(1,r->getListSize());
    r->removeActivity(a1);
    ASSERT_EQ(0,r->getListSize());
}

TEST(Regsiter, addActivityTest) {
    Register *reg= new Register;
    Activity *a=new Activity("a","b","c");
    reg->addActivity(a);
    ASSERT_EQ(1,reg->getListSize());
    Activity *a2= new Activity("a","b","c");
    reg->addActivity(a2);
    ASSERT_EQ(2,reg->getListSize());
    list <Activity *> list = reg->getActivities();
    ASSERT_EQ(a,list.front());
}