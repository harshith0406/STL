#include <bits/stdc++.h>
using namespace std;
int main()
{
  pair<int, string> p;

  // pair is mainly used to club 2 types of 2 same or different datatypes into one

  //  pair can be initialised in 2 methods
  // 1.make_pair(a,b);
  // 2.p={1,"a"};

  // to access the first element of the pair we use p.first and for second we use p.second
  
  make_pair(1,"one");
  p = {1, "a"};
  cout << p.first << " " << p.second << endl;

  pair<int, string> p1 = p;
  p1.first = 2;
  // creates a copy of the p in p1 and when the value of p1 is changed then the value of p remain unchanged

  pair<int, string> &p2 = p;
  p2.first = 3;
  // basically it points to the same location and once the value of the pair is changes using p2 since it point it will also be changed

  pair<int, int> p_array;
  // this is used to create a array using pair and when similar operations are to be done on a array we can use this

  return 0;
}