#include "array_pointer_test.h"

#include <string>
#include <iostream>

using std::cout;
using std::endl;

ArrayPointerTest::ArrayPointerTest(int count) {

  count_ = count;

  // After the instantiation of this class (i.e. upon exit of this constructor),
  // there should exist at least 4*"count_" ducks total, that are referenced
  // using the 4 arrays ducks1, ducks2, ducks3, and ducks4.
  // FILL IN the code below to create these ducks.
  // Here again are the declarations of the duck arrays, 
  // copied from array_pointer_test.h for convenience:
  //     Duck ducks1_[kMaxDuckCount];
  //     Duck * ducks2_;
  //     Duck * ducks3_[kMaxDuckCount];
  //     Duck ** ducks4_;

  cout << "Initializing ducks1." << endl;
  for(int i = 0; i < count_; i++)
  {
    ducks1_[i] = Duck();
  }

  cout << "Initializing ducks2\n" ;
    ducks2_ = new Duck[count_];

  cout << "Initializing ducks3\n";
  for(int i = 0; i < count_; i++)
  {
    ducks3_[i] = new Duck();
  }

  cout << "Initializing ducks4\n";
  ducks4_ = new Duck*[count_]; 
  for (int i=0; i<count; i++) 
    ducks4_[i] = new Duck;

}

void ArrayPointerTest::NameTheDucks(int array_number) {
  std::string names[12] = {
    "lemon", "yang", "mia", "cupcake", "kareem", "bob",
    "zipper", "angel", "flo", "venkat", "spot", "akira"};

  switch(array_number) {
    case 1:
      // Naming count_ ducks in ducks1
      cout << "Naming ducks1\n";
      for (int i=0; i<count_; i++) {
        ducks1_[i].set_name(names[i]);
        ducks1_[i].set_number(1);
      }
      break;

    case 2:
      cout << "Naming ducks2\n";
      for (int i=0; i<count_; i++) {
        ducks2_[i].set_name(names[i]);
        ducks2_[i].set_number(2);
      }
      break;

    case 3:
      cout << "Naming ducks3\n";
      for (int i=0; i<count_; i++) {
        ducks3_[i]->set_name(names[i]);
        ducks3_[i]->set_number(3);
      }
      break;

    case 4:
      cout << "Naming ducks4\n";
      for (int i=0; i<count_; i++) {
        ducks4_[i]->set_name(names[i]);
        ducks4_[i]->set_number(4);
      }
      break;

    default:
      cout << "Do not recognize array number. Ducks are nameless.\n";
  }
}

ArrayPointerTest::~ArrayPointerTest() {

  // Here again are the declarations of the duck arrays:
  //     Duck ducks1_[kMaxDuckCount];
  //     Duck * ducks2_;
  //     Duck * ducks3_[kMaxDuckCount];
  //     Duck ** ducks4_;

  cout << "In ArrayPointerTest destructor." << endl << endl ;

  cout << "Deleting ducks1\n";
  //nothing required

  cout << "Deleting ducks2\n";
   delete[] ducks2_;

  cout << "Deleting ducks3\n";
  for(int i = 0; i < count_; i++)
    delete ducks3_[i];

  cout << "Deleting ducks4\n";
  for (int i=0;i<count_;i++) 
    delete ducks4_[i]; 
  delete[] ducks4_;

}


void ArrayPointerTest::DisplayContents() {
  // As you fill in the initialization and naming of the duck arrays,
  // uncomment the PerformQuack for each.
  cout << endl << "ducks1" << endl;
  for (int i=0; i<count_; i++) {
    ducks1_[i].PerformQuack();
  }
  
  cout << "ducks2" << endl;
  for (int i=0; i<count_; i++) {
    ducks2_[i].PerformQuack();
  }
  
  cout << "ducks3" << endl;
  for (int i=0; i<count_; i++) {
    ducks3_[i]->PerformQuack();
  }

  cout << "ducks4" << endl;
  for (int i=0; i<count_; i++) {
    ducks4_[i]->PerformQuack();
  }
  
}
