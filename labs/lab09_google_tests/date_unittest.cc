#include "gtest/gtest.h"
#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues 
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
};



TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  * 
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */
  
TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
}

TEST_F(DateTest, mutant_epoch_constructor_year) {
  first_day = Date(0);

  EXPECT_EQ(first_day.GetUsDate(), "01-01-1970") << "When using the epoch constructor the min value is not correct.";
}

TEST_F(DateTest, mutant_constructor_no_add_1900_assess_new) {
  first_day = Date(1999, 12, 31);
  last_day = first_day + 1;

  EXPECT_EQ(last_day.GetUsDate(), "01-01-2000") << "The date Jan 01, 2000 is incorrectly initialized.";
}

TEST_F(DateTest, mutant_op_minus_arithmetic) {
  first_day = Date(1970, 1, 2);
  last_day = first_day - 1;

  EXPECT_EQ(last_day.GetUsDate(), "01-01-1970") << "The date Jan 02, 1970 - 1 day did not compute correctly.";
}

TEST_F(DateTest, mutant_days_between_no_leap ) {
  first_day = Date(2016, 1, 1);
  last_day = Date(2016, 3, 1);

  EXPECT_EQ(first_day.DaysBetween(last_day), 60) << "Did not account for leap year or other days between calc error, should be 60 days.";
}

TEST_F(DateTest, mutant_get_date_separator_omit ) {
  first_day = Date(1970, 1, 1);

  EXPECT_EQ(first_day.GetDate(), "1970-01-01") << "The date is formatted incorretly in GetDate().";
}

TEST_F(DateTest, mutant_get_us_date_wrong_format ) {
  first_day = Date(2018, 12, 11);

  EXPECT_EQ(first_day.GetUsDate(), "12-11-2018") << "The date is formatted incorretly in GetUsDate().";
}

/*
TEST_F(DateTest, mutant_days_between_abs_assess ) {
  first_day = Date(2016, 1, 1);
  last_day = Date(2016, 3, 1);

  EXPECT_GT(first_day.DaysBetween(last_day), -1) << "The date between should always be positive.";
}
*/
TEST_F(DateTest, mutant_days_between_return_1_assess_new ) {
  first_day = Date(2016, 6, 1);
  last_day = Date(2016, 6, 15);

  EXPECT_EQ(first_day.DaysBetween(last_day), 14) << "The DaysBetween function does not return the proper value.";
}
/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/
