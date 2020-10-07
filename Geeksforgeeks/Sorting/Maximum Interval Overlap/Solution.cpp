#include<bits/stdc++.h>
using namespace std;
void find()
{
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cin>>dep[i];
    
    sort(arr,arr+n);
    sort(dep,dep+n);
    int j=0;
    int ans=0;
    int tm=0;
    for(int i=1;i<n;i++)
    {
        while(dep[j]<arr[i])
        j++;
        if(ans<i-j+1)
        {
            ans=i-j+1;
            tm=arr[i];
        }
    }
    cout<<ans<<" "<<tm<<endl;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	find();
	}
	return 0;
}
