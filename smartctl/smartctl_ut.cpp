#include "gtest/gtest.h"

#include "CSmart.h"

namespace {



TEST(SmartTest, each) {

	CSmart smartctl;

	EXPECT_EQ(1, smartctl.GetWorst(5));
	EXPECT_EQ(1, smartctl.GetThresh(5));
	EXPECT_EQ(1, smartctl.GetRaw(5));
}


TEST(SmartTest, unification) {

	CSmart smartctl;

	EXPECT_EQ(100, smartctl.getData("/dev/sda", 5, CSmartAttribute::WORST));
	EXPECT_EQ(10, smartctl.getData("/dev/sda", 5, CSmartAttribute::THRESH));
	EXPECT_EQ(0, smartctl.getData("/dev/sda", 197, CSmartAttribute::RAW_VALUE));
	EXPECT_EQ(0, smartctl.getData("/dev/sda", 198, CSmartAttribute::RAW_VALUE));
}



}  // namespace

// Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?
