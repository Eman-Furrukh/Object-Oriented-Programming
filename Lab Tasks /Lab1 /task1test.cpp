#include "task1.cpp"
#include <gtest/gtest.h>

TEST(swap,f1) { 
    int a=5;
int c=a;
int b=6;
int d=b;
swap(&a,&b);
    ASSERT_EQ(c,b) ;
ASSERT_EQ(d,a) ;
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
