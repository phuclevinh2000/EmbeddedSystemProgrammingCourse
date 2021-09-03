#include <gtest/gtest.h>
#include "string.h"
// #include <string.h>

//my_strlen function
TEST(MytestCategory,StrlenTest1)    //normal testcase
{
	char test_data[]="abcdefg";
	int stringlen;

	stringlen=my_strlen(test_data);
	
    EXPECT_EQ(7, stringlen);
}

TEST(MytestCategory,StrlenTest2)    //none data testcase
{
	char test_data[]="";
	int stringlen;

	stringlen=my_strlen(test_data);
	
    EXPECT_EQ(0, stringlen);
}

TEST(MytestCategory,StrlenTest3)    //long testcase
{
    char test_data[]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
    // char ch = 's';
	// for(int i=0; i<10000; i++) 
    // {
    //     strncat(test_data, &ch, 1);
    // }
	int stringlen;

	stringlen=my_strlen(test_data);
	
    EXPECT_EQ(30, stringlen);
}

//str2upper function
TEST(MytestCategory,Str2Upper1)    //normal testcase
{
	char test_data[]="abcDefg";
	int stringtest;

	stringtest=str2upper(test_data);
	
    EXPECT_STREQ("ABCDEFG", stringtest);
}

TEST(MytestCategory,Str2Upper2)    //none data testcase
{
	char test_data[]="";
	int stringtest;

	stringtest=str2upper(test_data);
	
    EXPECT_EQ("", stringtest);
}

TEST(MytestCategory,Str2Upper2)    //long data testcase
{
	char test_data[]="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	int stringtest;

	stringtest=str2upper(test_data);
	
    EXPECT_EQ("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", stringtest);
}

//str2lower function
TEST(MytestCategory,Str2lower1)    //normal testcase
{
	char test_data[]="aBcDeFggE";
	int stringtest;

	stringtest=str2lower_(test_data);
	
    EXPECT_STREQ("abcdefgge", stringtest);
}

TEST(MytestCategory,Str2lower2)    //none data testcase
{
	char test_data[]="";
	int stringtest;

	stringtest=str2lower_(test_data);
	
    EXPECT_EQ("", stringtest);
}

TEST(MytestCategory,Str2lower3)    //long data testcase
{
	char test_data[]="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	int stringtest;

	stringtest=str2lower_(test_data);
	
    EXPECT_EQ("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", stringtest);
}

//str_strip_numbers function
TEST(MytestCategory,StrStripNumber1)    //normal testcase
{
	char test_data[]="aBcDe1234Fgg1E";
	int stringtest;

	stringtest=str_strip_numbers(test_data);
	
    EXPECT_STREQ("aBcDeFggE", stringtest);
}

TEST(MytestCategory,StrStripNumber2)    //none data testcase
{
	char test_data[]="5362103839812381";
	int stringtest;

	stringtest=str_strip_numbers(test_data);
	
    EXPECT_STREQ("", stringtest);
}

TEST(MytestCategory,StrStripNumber3)    //none data testcase
{
	char test_data[]="hfewiuhffdftf5353532vxatFTFDYFWFTR3213YefffdytfTFDTFDFY2678368DU";
	int stringtest;

	stringtest=str_strip_numbers(test_data);
	
    EXPECT_STREQ("hfewiuhffdftfvxatFTFDYFWFTRYefffdytfTFDTFDFYDU", stringtest);
}