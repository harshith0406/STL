#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<pair<int, int> >v={{1,2}};
  for(int i=0; i<v.size(); i++){
  cout<<v[0].first;
  }
  //mainly its used to print the value of first and second in the 0th index
  //how to take a input
  int a,b;
  for(int i=0; i<v.size(); i++){
  cin>>a>>b;
  v.push_back({a,b});
  }
  return 0;
}
// we use to create a vector like vector<vector<int>> v;
//where we first store a vector and push it to another vector
