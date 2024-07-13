#include "q1.cpp"
#include <gtest/gtest.h>

TEST(replace_vowel,r1) { 
    char* arr = new char[6];

int mem = 6;

char n[7]="laraib";
for(int i=0;i<mem;i++)

arr[i]=n[i];
char * np=replace_vowel(arr,mem);
int c=0;
char nn[7]="l$r$$b";
for(int i=0;i<mem;i++)
{
if(np[i]==nn[i])
c+=1;
}    


    ASSERT_EQ(6,c) ;

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
