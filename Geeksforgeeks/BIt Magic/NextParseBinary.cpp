// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

// function to check if the number is sparse
// n : is the number to check if it is sparse
bool isSparse(int n){
     if (n & (n>>1)) 
        return false; 
    return true; 
}

int check(int x) {
    while(1)
   {
      if (isSparse(x))
         return x;
      else 
         x++;
   }
   
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<check(n)<<endl;
        
       
        
    }
    return 0;
}
