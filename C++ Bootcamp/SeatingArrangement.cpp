#include<iostream>
using namespace std;

int main() {
  
  int testCases,n,compartment=0;
  
  cin>>testCases;
  
  while(testCases--)
    {
      cin>>n;
      compartment = n % 12;
      
      switch(compartment) 
        {
            case 0:
                    cout<<n-11;
                    cout<<" WS\n";
                    break;
            case 1:
                    cout<<n+11;
                    cout<<" WS\n";
                    break;
            case 2:
                    cout<<n+9;
                    cout<<" MS\n";
                    break;
            case 3:
                    cout<<n+7;
                    cout<<" AS\n";
                    break;
            case 4:
                    cout<<n+5;
                    cout<<" AS\n";
                    break;
            case 5:
                    cout<<n+3;
                    cout<<" MS\n";
                    break;
            case 6:
                    cout<<n+1;
                    cout<<" WS\n";
                    break;
            case 7:
                    cout<<n-1;
                    cout<<" WS\n";
                    break;
            case 8:
                    cout<<n-3;
                    cout<<" MS\n";
                    break;
            case 9:
                    cout<<n-5;
                    cout<<" AS\n";
                    break;
            case 10:
                    cout<<n-7;
                    cout<<" AS\n";
                    break;
            case 11:
                    cout<<n-9;
                    cout<<" MS\n";
                    break;
        }
      }  
    return 0;
  }
