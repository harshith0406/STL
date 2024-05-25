#include <bits/stdc++.h>
using namespace std;
int main()
{
  // we cant use normal iterators to iterate over map set and all we need special iterators for that case we will use this special type which we will learn now

  //.begin() and .end() are mainly used for locating the start and end pf the particular container
  vector<int> container;
  sort(container.begin(), container.end());
  // used to point and store all the related stuff

  // we wont use the st++ or for loop to iterate over the set and map kind of container coz the data wont be in continous format and it++ will move to next container but in map and set it need not be in next sequantial memory location so st++ works and st+=1 fails

  // st++ will move the iterator to next iterator but it+=1 will move the iterator to next location so both are not same

  // range based loops after c++ 11
  for (int i : container){
    //value++
    cout << i;
  }
  //suppose we use value ++ here still it wont change coz its creating a copy of the actual vector but not giving the actual vector for iteration
  for (int &i : container){
    //value++
    cout << i;
  }
  //in the above vase we will get the value++ function seen working very well coz there is a reference which is direclty pointing to the main memory location

  vector<pair<int, int> > p;
  for(pair<int, int> i:p){
    cout<<i.first<<" "<<i.second<<endl;
  }
  //in this way we can use this for pairs too

  auto a=1.0;
  // we use auto keyword to dynamically allocate the datatype rather than we explicitely using it we will give the computer the freedom to choose the datatype by itself
  for(auto a:container){
    cout<<a;
  }
  return 0;
}