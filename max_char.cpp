// Figure out what characater repeats the most in a give string
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  const string s = "aabbcddddccbbbbbbbcaaaaabbbbcbbbbbb";
  unordered_map<char, int> m;

  // o(n)
  int val = 0;
  char max = s.at(0);

  for (auto c: s) {
    // Map key and increment value at same tim
    m[c]++;

    // keep track of highest value for keys at same time
    if (m[c] > val ) {
      val = m[c];
      max = c;
    }
  }

  cout << "Max char = " << max << endl;

}
