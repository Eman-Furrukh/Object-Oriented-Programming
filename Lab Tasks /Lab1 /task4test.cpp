#include "task4.cpp"
#include <gtest/gtest.h>

TEST(reverseArray, t1) { 
    int arr[]={1,2,3,4,6};
    int a[]={6,4,3,2,1};
    int *arr1=reverseArray(arr);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
