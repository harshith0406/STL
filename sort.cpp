#include <bits/stdc++.h>
using namespace std;
int main()
{
  // sort is one of the best method which is been implemented using the most efficient and stable approach
  vector<int> v{3, 2, 1, 9, 4};
  int a[20] = {0, 1, 2, 3};
  int n = 4;
  sort(v.begin(), v.end());
  sort(v.begin() + 1, v.end());
  // sort takes 2 pointers as parameters in it starting pointer and the ending pointer
  sort(a + 1, a + n);
  // introsort
  // quick->recursion,heap->when the recursion complexity increases,insertion->when the elements decrease

  return 0;
}