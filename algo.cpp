#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
  int min = *min_element(v.begin(), v.end());
  // this takes the 2 pointers start and end as the inputs and return the pointer of the minimum element as the output
  int max = *max_element(v.begin(), v.end());
  // last paramter in the accumulator is the initial value of the sum
  int acc = accumulate(v.begin(), v.end(), 0);
  // last parameter is the element whose count should be found
  int ct = count(v.begin(), v.end(), 6);
  // return the index of the element
  auto find_ele = find(v.begin(), v.end(), 6);
  if (find_ele != v.end())
  {
    cout << "ele found" << endl;
  }
  else
  {
    cout << "not found" << endl;
  }
  reverse(v.begin(), v.end());
  // reverse
  // in case of array initial adresses is v and v+n is the final adress of the array
  return 0;
}