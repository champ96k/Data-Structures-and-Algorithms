
#include <bits/stdc++.h>
using namespace std;


void quadraticRoots(int a,int b, int c)
{
   //Your code here
   float r= (b*b)-(4*a*c);
   if(r<0){
   cout<<"Imaginary";
   return;}
   if(r==0){
       float r1=(-b)/(2*a);
       int r2=floor(r1);
       if(r2==-0)
       r2=0;
       cout<<r2<<" "<<r2;
       return;
   }
   float r1= ((-b)+sqrt(r))/(2*a);
   r1=floor(r1);
   if(r1==-0)
   r1=0;
   float r2= ((-b)-sqrt(r))/(2*a);
   r2=floor(r2);
   if(r2==-0)
   r2=0;
   if(r1>r2)
   cout<<r1<<" "<<r2;
   else
   cout<<r2<<" "<<r1;
   return;
   
  
}



int main() {
	int T; 
	cin>>T; //input number of testcases
	
	while(T--)
	{
	    int a, b, c; 
	    cin>>a>>b>>c; //Input a, b, and c
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  
