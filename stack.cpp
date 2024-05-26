#include <bits/stdc++.h>
using namespace std;
int main()
{
  // stack inbuilt function lifo data structure
  // push pop top
  stack<int> stk;
  stk.push(1); // push an element into a stack
  if (stk.empty())
  { // return a bool value to the program
    cout << "stack empty" << endl;
  }
  while (!stk.empty())
  {
    cout << stk.top(); // returns the top value of the stack
  }
  stk.pop(); // removes the top value from the stack
  return 0;
}