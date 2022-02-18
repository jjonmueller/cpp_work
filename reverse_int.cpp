#include <iostream>
#include <vector>
using namespace std;

void reverseInt(int value, bool neg) {

    // Convert to string, reverse and then convert back to int?
    string str = to_string(value);

    int len = str.length()-1;

    string rStr = "";

    if (neg)
      rStr = "-";

    while (len >= 0) {
      rStr+=str.at(len);
      len--;
    }
  
    int rInt = stoi(rStr);
   
    cout << rInt << endl;
}

int main(void) {
   vector<int> v {51, 189, 500, -15, -90};
   bool neg = false;

   for (auto i : v) {
      if (i < 0)  {
         neg = true;
         i = i * -1;
      }
      reverseInt(i, neg);
   }
   return 0;
}
