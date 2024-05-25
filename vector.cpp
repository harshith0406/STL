#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a(10);
  // declares a static vector of size a
  vector<int> b(10, 3);
  // declares the vector and fills the values with 3
  vector<int> v;
  int temp;
  // main advantage of the vector is that it is dynamically allocated in the memory and it doesnt waste any space in memory
  for (int i = 0; i < v.size(); i++)
  {
  // we declare a dummy variable called temp and push it to the memory using push_back function
    cin >> temp;
    v.push_back(i); // o(1)
    // v.size() also gives the output in O(1)
    v.pop_back(); // o(1)
    //this is used to pop the last element of the vector
  }
  vector<int> d=a;//O(n) time complexity
  //we can directly copy the elements of the vector into another vector and its not reference its the copy of the original vector
  //dont pass vector directly into a function coz it is expensive operation use &
  //vector<int> &d=a;
  //this will not create a copy whereas it will refer to the same vector
  return 0;
}