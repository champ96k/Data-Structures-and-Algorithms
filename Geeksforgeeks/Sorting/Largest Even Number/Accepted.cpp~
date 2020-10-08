
#include <iostream>
using namespace std;


int main() {
	//code
	
	int t,i,j,x,n;
	scanf("%d",&t);//test cases.
	
	for(i=0; i<t; i++)
	{
        string str;
        cin>>str;
        int n=str.size();
        int k=0; 
        
        //initialise count array with 0.
	    int count[10];
	    for(j=0; j<10; j++)
	    count[j]=0;
	    
	    int rem,pos=-1;
	    
	    while(k<n)
	    {
	        rem=str[k]-48;
	        count[rem]+=1; //populating count array.
	        k+=1;
	    }
	    
	    //find the smallest even number in the digits.
	    for(j=0; j<10; j+=2)
	    {
	        if(count[j]!=0)
	        {
	            pos=j;
	            break;
	        }
	    }
	    
	    //if even are absent, find the smallest odd number in the digits.
	    if(pos==-1)
	    {
	        for(j=1; j<10; j+=2)
	        {
	            if(count[j]!=0)
	            {
	                pos=j;
	                break;
	            }
	        }
	    }
	    
	    //decrease the count by one.
	    count[pos]-=1;
        
        //print the digits.
	    for(x=9; x>=0; x--)
	    for(j=0; j<count[x]; j++)
	    cout<<x;
	    cout<<pos<<endl;//leave a new line at the end.
	}
	
}
