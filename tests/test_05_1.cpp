#include <gtest/gtest.h>

double t(const double x);

TEST(Task51, TZero) {
    EXPECT_NEAR(t(0), 2.0, 1e-9);
}

TEST(Task51, TThree) {
    EXPECT_NEAR(t(3), 4.16227766016838, 1e-9);
}

TEST(Task51, TIsEven) {
    EXPECT_NEAR(t(3), t(-3), 1e-12);
}
