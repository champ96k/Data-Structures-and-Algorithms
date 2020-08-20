/*

Sahil is in the mood to attend Geeks Classes. He reaches venue of Geeks Classess. Now, he is confused about his sitting place. There are two columns of students sitting in the classes. Each student has been assigned a score on the basis of their score in Geeks Class Entrance Contest. Now, he wants to sit in the row which contains students with maximum score. Help him in finding the desired column.

Input : First line of Input contains testcase "T". For each testcase "T", there will be 3 lines of input, first line contains lengths of the columns, and next two lines contains the scores of students sitting in that column.

Output : For each testcase, Output the column in which Sahil should sit.

Constraints :
1 <= T <= 100
1 <= N1, N2 <= 10000
1 <= score <= 1000000

Example :
Input :
2
5 6
8 4 5 6 7
2 3 4 5 6 7
3 5
100 29 37
100 200 300 400 500
Output :
C1
C2

Explanation :
TestCase 1 : In 1st column sum of score of students is 30 which is more than 2nd column (score = 27).

TestCase 2 : In 2nd column sum of score of students is 1500 which is more than 1st column (score = 166).

*/



#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int a,b,sum1=0,sum2=0,i,j,l,k;
	    cin>>a>>b;
	    int a1[a],b1[b];
	    
	    for( i=0;i<a;i++) {
	        cin>>a1[i];
	    }
	    
	    for(j=0;j<b;j++) {
	        cin>>b1[j];
	    }
	    
	    for(k=0;k<a;k++) {
	        sum1=sum1+a1[k];
	    }
	    
	    for(l=0;l<b;l++) {
	        sum2=sum2+b1[l];
	    }
	    
	   // cout<<"Sum1: "<<sum1<<endl;
	   // cout<<"Sum2: "<<sum2<<endl;
	    if(sum1>=sum2) {
	        cout<<"C1"<<endl;
	    } else {
	        cout<<"C2"<<endl;
	    }
	}
	return 0;
}
