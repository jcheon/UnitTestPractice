/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome_2)
{
	Practice obj;
	bool actual = obj.isPalindrome("cccc");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_palindrome_1)
{
	Practice obj;
	bool actual = obj.isPalindrome("ab");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, not_palindrome_2)
{
	Practice obj;
	bool actual = obj.isPalindrome("bcd");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome_with_spaces)
{
	Practice obj;
	bool actual = obj.isPalindrome("a df fd a");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome_with_spaces)
{
	Practice obj;
	bool actual = obj.isPalindrome("a fd fd a");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome_with_one_space)
{
	Practice obj;
	bool actual = obj.isPalindrome(" ");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_capital)
{
	Practice obj;
	bool actual = obj.isPalindrome("Aa");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_numbers)
{
	Practice obj;
	bool actual = obj.isPalindrome("01010");
	ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_palindrome_with_numbers)
{
	Practice obj;
	bool actual = obj.isPalindrome("01010");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_first__and_second)
{
	Practice obj;
	int first = 2;
	int second = 3;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, sort_same_values)
{
	Practice obj;
	int first, second, third;
	first = 1;
	second = 2;
	third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, sort_opposite)
{
    Practice obj;
		int first = 1;
		int second = 2;
		int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
	ASSERT_GE(second,third);
}

// check if negative values get sorted correctly
TEST(PracticeTest, sort_negative)
{
    Practice obj;
		int first = -3;
		int second = -2;
		int third = -1;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
	ASSERT_GE(second,third);
}

// check if negative, positive, zero gets sorted correctly
TEST(PracticeTest, sort_pos_zero_neg)
{
    Practice obj;
		int first = 3;
		int second = 0;
		int third = -2;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first,second);
		ASSERT_GE(second,third);
}