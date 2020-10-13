#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n, sum=0;
	    cin>>n;
	    int arr[n][n];
	    
	    for( int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            cin>>arr[i][j];
	        }
	    }
	    
	    for(int i=0; i<n; i++ ){
	        for(int j=0; j<n; j++){
	            if(i==j || (i+j)==(n-1)){
	                sum=sum+arr[i][j];
	            }
	        }
	    }
	    if(n%2!=0){
	       sum=sum+arr[(n/2)][(n/2)];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
