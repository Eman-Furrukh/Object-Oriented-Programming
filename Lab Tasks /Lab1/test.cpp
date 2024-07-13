#include "pch.h"
#include "../Project1/Header.h"

TEST(TestCaseName, TestName) {
  ASSERT_EQ(6, sum(1,2,3));
}

TEST(TestCaseName1, TestName1) {
	ASSERT_EQ(7, sub(15, 8));
}

TEST(TestCaseName2, TestName2) {
	ASSERT_EQ(16,multi(4,4));
}

TEST(TestCaseName3, TestName3) {
	ASSERT_EQ(2, divide(16,8));
}
