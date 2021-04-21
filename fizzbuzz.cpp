#include <iostream>
using namespace std;

/* 
FizzBuzz in C++
Written by calebrwalk5 (aka anusO1)
*/

int main() {
  int i = 1;
  for (i = 1; i < 100; i++) {
    if ((i % 15) == 0) {
      fprintf("FizzBuzz\n");
    }
    else if ((i % 3) == 0) {
      fprintf("Fizz\n");
    }
    else if ((i % 5) == 0) {
      fprintf("Buzz\n");
    }
    else {
      cout << i << "\n";
    }
  }
 return 0;
}
