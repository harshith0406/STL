#include <bits/stdc++.h>
using namespace std;
int main()
{
  //mainly used for mapping a key to the value
  //if we use map then the values inside the map automatically get sorted too 
  //they are implemented using red black tree so since its a balancing tree this will automatically get sorted
  //the data is not contigous in nature hence the memory which is allocated in the storage cant be accessed with +=1 rather we use ++ so the iterator have the links between them 

  map<int,string>mp;
  mp[1]="abs";
  mp.insert({4,"abs"});//take O(logn)
  //when we initialize th map i,e mp[1] then it consumes logn space and the default value will be set as the corresponding pair
  //bool false,int float 0
  //we cant insert new keys inside the map rather it will automatically update to the latest key thats been uploaded inside the program
  //printing nlogn

  auto it=mp.find(3);
  //this return a pointer and if no value is found then it return the mp.end() as the pointer so hence we can write

  if(it==mp.end()){//logn operation
    cout<<"no value found"<<endl;
  }
  else{
    cout<<(*it).first<<(*it).second<<endl;
  }

  mp.erase(it);
  //this mainly used to remove the element from the map

  mp.clear();//all are logn and it removes all



  for(auto i:mp){
    cout<<i.first<<" "<<i.second<<endl;
  }
  return 0;
}