#include <iostream>

using namespace std;

// Fizz Buzz is a trivial problem used as the programming exercise on training sites or even interviews sometimes.
// It essentially boils down to printing the numbers from 1 to 100 to the console,
// except that the multiples of 3 and 5 should be substituted with Fizz and Buzz strings, 
// respectively. Additionally, there is a rule for multiples of 15

int main() {

   for (int i = 1; i <= 100; i++) {
       if (i % 3 == 0 && i % 5 == 0) cout << i<< ": fizzbuzz" << endl;
       if (i % 3 == 0) cout << i << ": fizz" << endl;
       if (i % 5 == 0) cout << i << ": buzz" << endl; 
   }
   return 0;
}
