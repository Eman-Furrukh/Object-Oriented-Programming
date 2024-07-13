#include "task2.cpp"
#include <gtest/gtest.h>

TEST(find_max,m1) { 
    int i,*arrayPtr[7],var[]={3,4,4,2,1,3,1};
    
    for(i=0; i<7; i++)
    	arrayPtr[i] = &var[i];
    
	
    ASSERT_EQ(4,find_max(arrayPtr)) ;

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
