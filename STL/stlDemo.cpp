#include<bits/stdc++.h>
using namespace std;

void vectorDemo(){
  
  vector<int>v;
  vector<int>::iterator i;
  int element,j;
  
  //insert Element into vector
  cout<<"Insert Element: "<<endl;
  for(j=0;j<8;j++){
    cin>>element;
    v.push_back(element);
  }
  
  //display element     : std::vector<int>::iterator
  cout<<"Display Element: ";
  for(i=v.begin();i!=v.end();i++) {
    cout<<*i<<" ";
  }
  
  //upper_bound         : >=
  //lower bound         : >
  vector<int>::iterator it1 = lower_bound(v.begin(),v.end(),100);
  vector<int>::iterator it2 = upper_bound(v.begin(),v.end(),100);

  cout<<"\nLower_bound: "<<*it1<<"\nupper_bound"<<*it2<<" "<<endl;
  
  //number of times occure (in this ex 100)
  cout<<"100 is "<<it2-it1<<" times continous occure"<<endl;
  
  //sort number
  sort(v.begin(),v.end());
  
   //display element     : std::vector<int>::iterator
  cout<<"Display Element after sorting: ";
  for(i=v.begin();i!=v.end();i++) {
    cout<<*i<<" ";
  }
  
}


int main() {
  
  vectorDemo();
  
  return 0;
}
