#include <gtest/gtest.h>
#include "string.h"
// #include <string.h>

//my_strlen function
TEST(MytestCategory, StrlenTest1) //normal testcase
{
	char test_data[] = "abcdefg";
	int stringlen;

	stringlen = my_strlen(test_data);

	EXPECT_EQ(7, stringlen);
}

TEST(MytestCategory, StrlenTest2) //none data testcase
{
	char test_data[] = "";
	int stringlen;

	stringlen = my_strlen(test_data);

	EXPECT_EQ(0, stringlen);
}

TEST(MytestCategory, StrlenTest3) //long testcase
{
	char test_data[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
		// char ch = 's';
		// for(int i=0; i<10000; i++)
		// {
		//     strncat(test_data, &ch, 1);
		// }
		int stringlen;

	stringlen = my_strlen(test_data);

	EXPECT_EQ(30, stringlen);
}

//str2upper function
TEST(MytestCategory, Str2Upper1) //normal testcase
{
	char test_data[] = "abcDefg";
	char stringtest[50];

	stringtest = str2upper(test_data);

	EXPECT_STREQ("ABCDEFG", stringtest);
}

TEST(MytestCategory, Str2Upper2) //none data testcase
{
	char test_data[] = "";
	char stringtest[10];

	stringtest = str2upper(test_data);

	EXPECT_EQ("", stringtest);
}

TEST(MytestCategory, Str2Upper2) //long data testcase
{
	char test_data[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char stringtest[50];

	stringtest = str2upper(test_data);

	EXPECT_EQ("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", stringtest);
}

//str2lower function
TEST(MytestCategory, Str2lower1) //normal testcase
{
	char test_data[] = "aBcDeFggE";
	char stringtest[50];

	stringtest = str2lower_(test_data);

	EXPECT_STREQ("abcdefgge", stringtest);
}

TEST(MytestCategory, Str2lower2) //none data testcase
{
	char test_data[] = "";
	char stringtest[10];

	stringtest = str2lower_(test_data);

	EXPECT_EQ("", stringtest);
}

TEST(MytestCategory, Str2lower3) //long data testcase
{
	char test_data[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char stringtest[50];

	stringtest = str2lower_(test_data);

	EXPECT_EQ("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", stringtest);
}

//str_strip_numbers function
TEST(MytestCategory, StrStripNumber1) //normal testcase
{
	char test_data[] = "aBcDe1234Fgg1E";
	char stringtest[50];

	stringtest = str_strip_numbers(test_data);

	EXPECT_STREQ("aBcDeFggE", stringtest);
}

TEST(MytestCategory, StrStripNumber2) //none data testcase
{
	char test_data[] = "5362103839812381";
	char stringtest[50];

	stringtest = str_strip_numbers(test_data);

	EXPECT_STREQ("", stringtest);
}

TEST(MytestCategory, StrStripNumber3) //long data testcase
{
	char test_data[] = "hfewiuhffdftf5353532vxatFTFDYFWFTR3213YefffdytfTFDTFDFY2678368DU";
	char stringtest[100];

	stringtest = str_strip_numbers(test_data);

	EXPECT_STREQ("hfewiuhffdftfvxatFTFDYFWFTRYefffdytfTFDTFDFYDU", stringtest);
}

//mystrcpy function
TEST(MytestCategory, StrCpy1) //normal testcase
{
	char test_data1[100] = "ab c";
	char test_data2[] = "ed";

	test_data1 = mystrcpy(test_data1, test_data2);

	EXPECT_STREQ("ab ced", test_data1);
}

TEST(MytestCategory, StrCpy2) //none data testcase
{
	char test_data1[100] = "";
	char test_data2[] = " ";

	test_data1 = mystrcpy(test_data1, test_data2);

	EXPECT_STREQ(" ", test_data1);
}

TEST(MytestCategory, StrCpy3) //none data testcase
{
	char test_data1[100] = "asdsadwsdwDWD#¤#FF";
	char test_data2[] = "  wddq dfwq qwewq2dw wq";

	test_data1 = mystrcpy(test_data1, test_data2);

	EXPECT_STREQ("asdsadwsdwDWD  wddq dfwq qwewq2dw wq", test_data1);
}

//mystrcmp function
TEST(MytestCategory, StrCmp1) //false case data testcase
{
	char test_data1[] = "asdsadwsdwDWD#¤#FF";
	char test_data2[] = "  wddq dfwq qwewq2dw wq";
	bool string_test;

	string_test = mystrcmp(test_data1, test_data2);

	EXPECT_STREQ(false, string_test);
}

TEST(MytestCategory, StrCmp2) //normal data testcase
{
	char test_data1[] = "    FF";
	char test_data2[] = "    FF";
	bool string_test;

	string_test = mystrcmp(test_data1, test_data2);

	EXPECT_STREQ(true, string_test);
}

TEST(MytestCategory, StrCmp3) //long data testcase
{
	char test_data1[] = "asdsadwsdwDWD#¤#FF";
	char test_data2[] = "asdsadwsdwDWD#¤#FF ";
	bool string_test;

	string_test = mystrcmp(test_data1, test_data2);

	EXPECT_STREQ(false, string_test);
}

//strdup1 function
TEST(MytestCategory, StrDup1) //normal data testcase
{
	char test_data1[] = "asdsadwsdwDWD#¤#FF";

	char string_test[100];

	string_test = strdupl(test_data1);

	EXPECT_STREQ("asdsadwsdwDWD#¤#FFasdsadwsdwDWD#¤#FF", string_test);
}

TEST(MytestCategory, StrDup2) //none data testcase
{
	char test_data1[] = "";

	char string_test[100];

	string_test = strdupl(test_data1);

	EXPECT_STREQ("", string_test);
}

TEST(MytestCategory, StrDup3) //none data testcase
{
	char test_data1[] = "qiwgfi4fgi duyqwiudy dyqw9u";

	char string_test[100];

	string_test = strdupl(test_data1);

	EXPECT_STREQ("qiwgfi4fgi duyqwiudy dyqw9uqiwgfi4fgi duyqwiudy dyqw9u", string_test);
}
