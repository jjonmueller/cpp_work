// Chunk up an array into subarrays within array of chunk size

#include <iostream>
#include <vector>
using namespace std;

int main() {

  int count {0};
  const int chunk_size {2};
  vector<int> arr {0, 1, 2, 3, 4, 5, 6}; 


  vector<vector<int>> newarr;
  cout << "[";

  while (count < arr.size()) {

    vector<int> temp;
    cout << "[";

    for (int i {0}; i < chunk_size; i++) {
      if (count < arr.size()) {
        temp.push_back(arr.at(count));
        cout << temp.at(i);
        count++;
      }
    }

    cout << "]";
    newarr.push_back(temp);
  }

  cout << "]" << endl;
  cout << "Size of new array = " << newarr.size() << endl;
  return 0;

}
