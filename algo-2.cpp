#include <bits/stdc++.h>
using namespace std;
int main()
{
  //this is returning bool
  //lamda function
  auto sum=[](int i,int j){
    return i+j;
  };
  cout<<sum(2,3);
  //all of fucntion return bool value
  vector<int> arr{1,2,3};
  cout<<all_of(arr.begin(),arr.end(),[](int x){return x>0;});
  //check whether all the elements of the array are greater than zero or not
  cout<<any_of(arr.begin(),arr.end(),[](int x){return x>0;});
  //check whether any of the function is accepting the given condition
  cout<<none_of(arr.begin(),arr.end(),[](int x){return x>0;});
  //check whether all of the function is not accepting the given condition


  
  return 0;
}