#include<bits/stdc++.h>
using namespace std;

//Complete this function
double termOfGP(int A,int B,int N)
{
    double r = double(B)/double(A);
    
    return A*pow(r,N-1);
}


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        
        cout<<floor(termOfGP(A,B,N))<<endl;
    }

    return 0;
}
