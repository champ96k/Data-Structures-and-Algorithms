#include<bits/stdc++.h>
using namespace std;

void mapDemo() {

   map<int,int>A;
   
   //Insert into map
   A[0]=10;
   A[1]=50;
   A[8]=6;
   A[4]=95;
   
   cout<<"Display Map :";
   for(int i=0; i<A.size();i++) {
     cout<<A[i]<<endl;
   }
  
  //map<char int>cnt;
  
  string x = "Tushar Nikam";
  
  for(char c : x) {
    cnt[c]++;
  }
  
  //find how many time that char occure 
  cout<<cnt['a']<<" "<<cnt['z']<<endl;
  
}

void setDemo() {
  
  //set declaration
  set<int>s;
  set <int> :: iterator itr; 
  //set <int, greater <int> > :: iterator itr; 
  
  //insert
  s.insert(120);
  s.insert(80);
  s.insert(20);
  s.insert(120);
  s.insert(7212);
  
  //in set the element is automaticaly sorted
  // In set does not allow repeted value
  
  //Display value
  cout<<"Display Number :";
   for (itr = s.begin(); itr != s.end(); ++itr) 
    {
      cout << '\n' << *itr; 
    }
    
    //check element is present or not
    set <int> :: iterator it = s.find(20);       //if 20 is present return that number else return s.end(); element
    
    set <int> :: iterator it1 = s.upper_bound(20);
    set <int> :: iterator it2 = s.lower_bound(0);
    
    cout<<"\n*************"<<endl;
    cout<<*it1<<" "<<*it2<<endl;
}

void vectorDemo() {
  
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
  
  //vectorDemo();
  //setDemo();
  mapDemo();
  
  return 0;
}
