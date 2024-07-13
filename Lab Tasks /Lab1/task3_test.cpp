#include "task3.cpp"
#include <gtest/gtest.h>

TEST(value_search,v) { 
    int *arrayPtr[7],var[]={3,4,4,2,1,3,1};
    
    for(int i=0; i<7; i++)
    	arrayPtr[i] = &var[i];
    
	
    ASSERT_EQ(1,value_search(arrayPtr,7,1));

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
