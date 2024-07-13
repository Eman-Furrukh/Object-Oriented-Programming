

#include "q4.cpp"
#include <gtest/gtest.h>

TEST(palindrome,r1) { 
    char string1[6]="palap";
    int i, length;
    length = 5;
    
   
    int flag = palindrome(string1,length);



    ASSERT_EQ(0,flag) ;

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
