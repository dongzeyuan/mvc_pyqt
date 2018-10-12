#include "gtest/gtest.h"

#include "seller.h"

namespace {


class myTestFixture1: public ::testing::test {
public:
   myTestFixture1( ) {
       // initialization code here
   }

   void SetUp( ) {
       // code here will execute just before the test ensues
   }

   void TearDown( ) {
       // code here will be called just after the test completes
       // ok to through exceptions from here if need be
   }

   ~myTestFixture1( )  {
       // cleanup any pending stuff, but no exceptions allowed
   }

   // put in any custom data members that you need
};


TEST_F(myTestFixture1, UnitTest1) {

}


TEST_F(myTestFixture1, UnitTest2) {

}




}  // namespace
