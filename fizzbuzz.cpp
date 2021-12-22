#include <iostream>

/*
FizzBuzz in C++
Written by calebrwalk5 (aka anusO1)
*/

int main() {
	int i, *ptr;
	i = 1;
	ptr = new int;
	for (i; i < 100; i++) {
		if ((i % 15) == 0) {
			std::cout << "FizzBuzz\n";
		} else if ((i % 5) == 0) {
			std::cout << "Buzz\n";
		} else if ((i % 3) == 0) {
			std::cout << "Fizz\n";
		} else {
			std::cout << i << "\n";
		}
	}
	delete ptr;
	return 0;
}
