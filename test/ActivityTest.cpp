#include "../Activity.h"
#include "gtest/gtest.h"
#include <string>

TEST(Activity, Constructor) {
    Activity a("a", "b", "c");
    ASSERT_EQ("a", a.getDesc());
    ASSERT_EQ("b", a.getStart());
    ASSERT_EQ("c", a.getEnd());
}
