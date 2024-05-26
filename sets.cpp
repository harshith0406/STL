#include <bits/stdc++.h>
using namespace std;
int main()
{
  // collection of elements with unique

  set<int> st;
  unordered_set<int> st1;
  multiset<int>s;
  //allows dupicate values in the set so this is used

  // this is used to store in the sorted order and it stores only the unique elements inside it
  st.insert(0);
  // this is how the insertion operation is performed in the set log
  auto i = st.find(0);
  if (i == st.end())
  {
    cout << "doesnt exist";
  }
  else
  {
    cout << "Exist";
  }
  // similarly like auto operation we use to print the value
  for (auto j : st)
  {
    cout << j << endl;
  }
  // implementation using red black tree
  // same like unordered map and map this falls under same line unordered set and set

  return 0;
}