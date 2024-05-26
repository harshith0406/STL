#include <bits/stdc++.h>
using namespace std;
int main()
{
  unordered_map<int, int> mp;
  //this doesnt store the values in the sorted form but it has same functionality as the standard ordered map
  //uses the process of hashing rather than the red black tree approach
  //time complexity of all operations is O(N)since it uses hashing in the background
  mp.find(1);//this operation also goes to O(1)
  //since the implementation involves the hash formation some datatypes wont be havig hash so it wont work for all
  
  return 0;
}