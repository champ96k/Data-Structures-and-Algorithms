/*


*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<" ";  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  

int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        string str;
        cin>>str;
        int len = str.size();
        permute(str,0,len-1);
    }
    return 0;
}
