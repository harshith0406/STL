#include <bits/stdc++.h>
using namespace std;
int main()
{
  // stack inbuilt function lifo data structure
  // push pop top
  queue<int> q;
  q.push(1); // push an element into a queue
  if (q.empty())
  { // return a bool value to the program
    cout << "stack empty" << endl;
  }
  while (!q.empty())
  {
    cout << q.front(); // returns the first element
  }
  q.pop(); // removes the top value from the stack
  return 0;
}