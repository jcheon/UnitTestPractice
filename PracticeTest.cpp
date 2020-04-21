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
