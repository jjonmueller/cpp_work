// Check if anagram (one string is anagram of another if it uses the same
// characters

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  string a = "rail safety";
  string b = "fairy taless";
  unordered_map<char, int> m;
  unordered_map<char, int>::iterator it;
  
  // Base case if the two string are not equal in legnth
  if (a.length() != b.length()) {
    cout << "Not an anagram" << endl;
    return -1;
  }

  // hash map the first string
  for (auto c: a) {
    m[c]++;
  }

  // See if all the other characters are in the map exactly once
  for (auto c: b) {
    if (m.find(c) == m.end()) {
      cout << "Not an anagram" << endl;
      return -1;
    }
  }

  cout << "String is an anagram" << endl;
 
  return 0;
}
