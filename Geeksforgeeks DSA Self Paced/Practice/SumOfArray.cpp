#include<iostream>
using namespace std;
int main() 
{
	int A[100],N,T,sum;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	sum=0;
    cin>>N;
	for(int j=0;j<N;j++){
	    cin>>A[j];
	    sum=sum+A[j];
	}
	cout<<sum<<endl;
	    
	}
	return 0;
}
