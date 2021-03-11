### Feedback for Lab 10

Run on February 26, 17:05:00 PM.

+ :heavy_check_mark:  Run git ls-remote to check for existence of specific branch- Branch devel found

+ :heavy_check_mark:  Checkout devel branch.




#### Necessary Files and Structure

+ :heavy_check_mark:  Check that directory "project" exists.

+ :heavy_check_mark:  Check that directory "project/bin" exists.

+ :heavy_check_mark:  Check that directory "project/docs" exists.

+ :heavy_check_mark:  Check that directory "project/src" exists.

+ :heavy_check_mark:  Check that directory "project/tests" exists.

+ :heavy_check_mark:  Check that directory "project/web" exists.

+ :heavy_check_mark:  Check that file "project/Makefile" exists.

---


#### Compile Tests

+ :heavy_check_mark:  Change into directory "project".

+ :heavy_check_mark:  Copy directory "Files for correct version".



+ :x:  Check that make  compiles.

    Make compile fails with errors:.
<pre>mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/delivery_simulation.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/delivery_simulation.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/delivery_simulation.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/main.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/main.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/main.cc
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/project_settings.d -MP -MT /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/project_settings.o -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. src/config/project_settings.cc
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/lib
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339/.dependencies
mkdir -p /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/bin
rsync -au /project/grades/Spring-2021/csci3081/dependencies/include /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339/.dependencies/
src/delivery_simulation.cc:4:10: fatal error: drone.h: No such file or directory
 #include "drone.h"
          ^~~~~~~~~
compilation terminated.
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. -c src/config/project_settings.cc -o /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/project_settings.o
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -std=c++11 -g -fPIC  -I.. -I/project/grades/Spring-2021/csci3081/dependencies/include -Isrc -I. -I/project/grades/Spring-2021/csci3081/dependencies/include -Iinclude -I. -c src/main.cc -o /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/main.o
make: *** [Makefile:30: /project/grades/Spring-2021/csci3081/student-repos/Lab_10_Feedback/repo-brow4339-build/obj/delivery_simulation.o] Error 1
make: *** Waiting for unfinished jobs....
rsync -au /project/grades/Spring-2021/csci3081/dependencies/share/EntityProject/models web/
rsync -au /project/grades/Spring-2021/csci3081/dependencies/share/EntityProject/textures web/
rsync -au /project/grades/Spring-2021/csci3081/dependencies/share/EntityProject/data ./
</pre>



+ :leftwards_arrow_with_hook:  Check that make test compiles. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Dynamic Check that file exists. (Test not run because of an earlier failing test)

+ :leftwards_arrow_with_hook:  Dynamic Check that file exists. (Test not run because of an earlier failing test)

---

+ :heavy_check_mark:  Check that make clean compiles.



---

---

