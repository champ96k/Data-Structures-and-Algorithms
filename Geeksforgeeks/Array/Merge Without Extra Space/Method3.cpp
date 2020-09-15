#include<bits/stdc++.h>
using namespace std;
int nextGap(int gap) 
{ 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 
  
void merge(int *arr1, int *arr2, int n, int m) 
{ 
    int i, j, gap = n + m; 
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
    { 
        // comparing elements in the first array. 
        for (i = 0; i + gap < n; i++) 
            if (arr1[i] > arr1[i + gap]) 
                swap(arr1[i], arr1[i + gap]); 
  
        //comparing elements in both arrays. 
        for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) 
            if (arr1[i] > arr2[j]) 
                swap(arr1[i], arr2[j]); 
  
        if (j < m) 
        { 
            //comparing elements in the second array. 
            for (j = 0; j + gap < m; j++) 
                if (arr2[j] > arr2[j + gap]) 
                    swap(arr2[j], arr2[j + gap]); 
        } 
    } 
} 

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<m;i++)
	    cin>>b[i];
	   /* for(int i=m-1;i>=0;i--)
	    {
	        int j,last=a[n-1];
	        for(j=n-2;j>=0 && a[j]>b[i];j--)
	        {
	            a[j+1]=a[j];
	        }
	    
	    if(j!=m-2 || last>b[i]){
	    a[j+1]=b[i];
	    b[i]=last;
	    }
	}*/
	/*int g=n+m;
	while(g>0){
	    for(int i=0;i+g<n;i++){
	        if(a[i]>a[i+g])
	        swap(a[i],a[i+g]);
	    
	    int j;
	    if(g>n)
	    g=g-n;
	    else g=0;
	    for(j=g;j<m && i<n;j++)
	    {
	        if(a[i]>b[j])
	        swap(a[i],b[j]);
	    }
	    if(j<m)
	    {
	        for(j=0;j+g<m;j++){
	        if(b[j]>b[j+1])
	        swap(b[j],b[j+g]);
	    }
	    }
	    g=(g/2+g%2);
	    if(g<=1)
	    g=0;
	}
	}*/
	merge(a,b,n,m);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	for(int i=0;i<m;i++)
	cout<<b[i]<<" ";
	cout<<endl;
	}
	return 0;

}
