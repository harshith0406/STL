#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 5;
  // upper will find the next largest element in the whole array and must condition is that the array should be sorted

  // lower will find the element if its there and if not it will find the next largest element
  // both the lower and upper bound will return the location of the element commonly called as pointers or indexes
  // int *ptr=lower_bound(from where,till where ,after which);
  int *ptr = lower_bound(a, a + n, 5);
  if (ptr == (a + n))
  {
    cout << "not found" << endl;
  } // thats the base condition
  int *ptr = upper_bound(a, a + n, 5);
  // both work in O(logn) time of complexity

  return 0;
}