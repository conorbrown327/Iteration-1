### Fuller Feedback for Lab 09

Run on February 24, 22:18:24 PM.

+ :heavy_check_mark:  Run git ls-remote to check for existence of specific branch- Branch master found

+ :heavy_check_mark:  Checkout master branch.




#### System Files and Lab Directory Structure

+ :heavy_check_mark:  Check that directory "labs" exists.

+ :heavy_check_mark:  Check that directory "labs/lab09_google_tests" exists.

+ :x:  Check that file/directory "labs/lab09_google_tests/date" does not exist.

     "labs/lab09_google_tests/date" found.

+ :leftwards_arrow_with_hook:  Check that file/directory "labs/lab09_google_tests/date_unittest" does not exist. (Test not run because of an earlier failing test)

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
    4 tests found.




#### Results

+ :x:  Check that a GoogleTest test passes.
    fails the test: DateTest.PrintDateTests.
<pre>
[ RUN      ] DateTest.PrintDateTests
date_unittest.cc:41: Failure
Expected equality of these values:
  output2
    Which is: "1776-7-4\n"
  expected_out_2
    Which is: "1776-07-04\n"</pre>


+ :x:  Check that a GoogleTest test passes.
    fails the test: DateTest.PrintDateTestsWithoutNewline.
<pre>
[ RUN      ] DateTest.PrintDateTestsWithoutNewline
date_unittest.cc:67: Failure
Expected equality of these values:
  output2
    Which is: "1776-7-4"
  expected_out_2
    Which is: "1776-07-04"</pre>


+ :x:  Check that a GoogleTest test passes.
    fails the test: DateTest.DaysBetweenTests.
<pre>
[ RUN      ] DateTest.DaysBetweenTests
date_unittest.cc:80: Failure
Expected equality of these values:
  first_day.GetUsDate()
    Which is: "201809-04"
  "09-04-2018"
First day of class not setup properly
date_unittest.cc:81: Failure
Expected equality of these values:
  last_day.GetUsDate()
    Which is: "201812-11"
  "12-11-2018"
Last day of class not setup properly
date_unittest.cc:82: Failure
Expected equality of these values:
  first_day.DaysBetween(last_day)
    Which is: 4916830
  98
Days between is not calculated properly</pre>


+ :x:  Check that a GoogleTest test passes.
    fails the test: DateTest.EpochConstructorTest.
<pre>
[ RUN      ] DateTest.EpochConstructorTest
date_unittest.cc:88: Failure
Expected equality of these values:
  first_day.GetUsDate()
    Which is: "204001-01"
  "01-01-1970"
First day of class not setup properly
date_unittest.cc:89: Failure
Expected equality of these values:
  last_day.GetUsDate()
    Which is: "210801-19"
  "02-05-2038"
Last day of class not setup properly</pre>


+ :x:  0.0% of the tests passed, but the target is 100%.

---


### Testing Mutants

+ :x:  No tests available.

---

---

---

