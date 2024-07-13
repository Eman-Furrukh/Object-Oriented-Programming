#include "submission.cpp"
#include <gtest/gtest.h>


TEST(Task2, Fac1) { 
    ASSERT_EQ(120, facWithRecursion(5));

    }

TEST(Task2, Fac2) { 
    ASSERT_EQ(1, facWithRecursion(0));

    }

TEST(Task4, Count2) { 
   
    ASSERT_EQ(4, countWithRecursion(23));

    }

TEST(Task4, Count3) { 
   
    ASSERT_EQ(2, countWithRecursion(5));

    }

TEST(Task4, Count1) { 
   
    ASSERT_EQ(0, countWithRecursion(0));

    }


TEST(Task6, Sum1) { 
    ASSERT_EQ(6, FindSumWithRecursion(3));
    
    }

TEST(Task6, Sum2) { 
    
    ASSERT_EQ(15, FindSumWithRecursion(5));
    
    }


TEST(Task8, DecToOct1) { 
    ASSERT_EQ(13, decimalToOctalWithRecursion(55));
    
    }


TEST(Task8, DecToOct2) { 
   
    ASSERT_EQ(0, decimalToOctalWithRecursion(92));
  
    }
TEST(Task8, DecToOct3) { 
   
    ASSERT_EQ(0, decimalToOctalWithRecursion(0));
    }
