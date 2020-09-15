#include<map>
#include<set>
#include<iterator>
#include<algorithm>
#include<cstring>
#include<climits>
#include<cstdlib>
#include<cstdio>
using namespace std;
void makePelindrome(int arr[],int mid1,int mid2,int c,int &n)
{
    while(mid1>=0)
    {
        int temp=arr[mid1]+c;
        c=temp/10;
        temp=temp%10;
        arr[mid1]=arr[mid2]=temp;
        mid1--;mid2++;
    }
    if(c)
    {
        cout<<c<<" ";
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<c<<" ";
    }
    else
    {
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
}

int main()
 {
	//code
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int arr[1001];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            int mid1,mid2,i,j;
            if(n%2==0){
                mid1=(n-1)/2;
                mid2=mid1+1;
            }
            else{
                mid1=mid2=(n-1)/2;
            }
            i=mid1;j=mid2;
            while(i>=0 && j<n){
                if(arr[i]==arr[j]){
                    i--;j++;
                }
                else if(arr[i]>arr[j]){
                    makePelindrome(arr,mid1,mid2,0,n);
                    break;
                }
                else{
                    makePelindrome(arr,mid1,mid2,1,n);
                    break;
                }
            }
            if(i<0 && j==n)
                makePelindrome(arr,mid1,mid2,1,n);
            cout<<endl;
        }
	return 0;
}
