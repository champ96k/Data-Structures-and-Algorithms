#include<bits/stdc++.h>
using namespace std;


 int digitsInFactorial(int n)
   {
     if (n < 0)
       return 0;
       
        // base case
        if (n <= 1)
          return 1;

        double digits = 0;
        for (int i=2; i<=n; i++)
        digits += log10(i);
        return floor(digits) + 1;
}



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
