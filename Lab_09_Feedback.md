### Fuller Feedback for Lab 09

Run on February 25, 00:08:49 AM.

+ :heavy_check_mark:  Run git ls-remote to check for existence of specific branch- Branch master found

+ :heavy_check_mark:  Checkout master branch.




#### System Files and Lab Directory Structure

+ :heavy_check_mark:  Check that directory "labs" exists.

+ :heavy_check_mark:  Check that directory "labs/lab09_google_tests" exists.

+ :heavy_check_mark:  Check that file/directory "labs/lab09_google_tests/date" does not exist.

+ :heavy_check_mark:  Check that file/directory "labs/lab09_google_tests/date_unittest" does not exist.

---


#### Essential Files Exist

+ :heavy_check_mark:  Check that file "./labs/lab09_google_tests/date_unittest.cc" exists.

---


### Testing correct implementation

+ :heavy_check_mark:  Change into directory "./labs/lab09_google_tests".

+ :heavy_check_mark:  overwriting makefile



+ :heavy_check_mark:  overwriting makefile



+ :heavy_check_mark:  overwriting header



+ :heavy_check_mark:  overwriting cc1



+ :heavy_check_mark:  overwriting cc2



+ :heavy_check_mark:  correct version



+ :heavy_check_mark:  correct version



+ :heavy_check_mark:  correct version



+ :heavy_check_mark:  Copy file "Copying official project makefile".



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that file "date_unittest" exists.

+ :heavy_check_mark:  Get all google tests.
    10 tests found.




#### Results

+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.mutant_epoch_constructor_year.



+ :x:  Check that a GoogleTest test passes.
    fails the test: DateTest.mutant_constructor_no_add_1900_assess_new.
<pre>
[ RUN      ] DateTest.mutant_constructor_no_add_1900_assess_new
date_unittest.cc:95: Failure
Expected equality of these values:
  first_day.GetUsDate()
    Which is: "12-31-1999"
  "01-01-2000"
The date Jan 01, 2000 is incorrectly initialized.</pre>


+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.mutant_op_minus_arithmetic.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.mutant_days_between_no_leap.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.mutant_get_date_separator_omit.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.mutant_get_us_date_wrong_format.



+ :heavy_check_mark:  Check that a GoogleTest test passes.
    passes the test: DateTest.mutant_days_between_return_1_assess_new.



+ :x:  90.0% of the tests passed, but the target is 100%.

---


### Testing Mutants


#### Testing _mutant_epoch_constructor_year_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_epoch_constructor_year

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_constructor_no_add_1900_assess_new_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :x:  There is no test case for mutant_constructor_no_add_1900_assess_new (since all tests pass).
   - Reason - Date which should be Jan 1, 2000 is actually Jan 1, 100.

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_op_minus_arithmetic_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_op_minus_arithmetic

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_get_date_separator_omit_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_get_date_separator_omit

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_days_between_no_leap_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_days_between_no_leap

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_days_between_arithmetic_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_days_between_arithmetic

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_get_us_date_wrong_format_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_get_us_date_wrong_format

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_days_between_abs_assess_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_days_between_abs_assess

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---


#### Testing _mutant_days_between_return_1_assess_new_ for failure

+ :heavy_check_mark:  Change into directory ".".

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Check that make  compiles.



+ :heavy_check_mark:  Check that make test compiles.



+ :heavy_check_mark:  Dynamic Check that file exists.

+ :heavy_check_mark:  At least one test failed for mutant_days_between_return_1_assess_new

+ :heavy_check_mark:  Check that make clean compiles.



+ :heavy_check_mark:  Change into directory ".".

---

+ :x:  88.89% of the tests passed, but the target is 93%.

---

---

---

