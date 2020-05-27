#include<bits/stdc++.h>
using namespace std;

int main() {
  int num1,num2;
  string c[]= {"","one","two","three","four","five","six","seven","eight","nine"};
  cin>>num1>>num2;
  
  for(int i=num1;i<num2;i++) {
    cout<<((i<=9) ? c[i] : ((i%2)==0 ? "even" :"odd" ))<<endl;
  }

  if(num1+1==num2) {
      switch(num2) {
        case 1:
                cout<<"one"<<endl;
                break;
        case 2:
                cout<<"two"<<endl;
                break;
        case 3:
                cout<<"three"<<endl;
                break;
        case 4:
                cout<<"four"<<endl;
                break;
        case 5:
                cout<<"five"<<endl;
                break;
        case 6:
                cout<<"six"<<endl;
                break;
        case 7:
                cout<<"seven"<<endl;
                break;
        case 8:
                cout<<"eight"<<endl;
                break;
        case 9:
                cout<<"nine"<<endl;
      
      }
  }
  
   if((num2%2)==0 ) {
     if(num1<=9 && num2 <=9 ) {

     } else {
          cout<<"even"<<endl;
     }
    }
    else {
      cout<<"odd"<<endl;
    }
  
  return 0;
}

