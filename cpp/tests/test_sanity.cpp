#include <gtest/gtest.h>
#include <string>

#include "pricer/version.hpp"

TEST(Sanity, MathWorks) {
    EXPECT_EQ(1 + 1, 2);
}

TEST(Sanity, LibraryLinks) {
    EXPECT_EQ(std::string(pricer::version()), "0.1.0");
}
