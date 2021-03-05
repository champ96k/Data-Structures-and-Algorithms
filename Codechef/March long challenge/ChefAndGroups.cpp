#include<bits/stdc++.h>
using namespace std;

int solve(string str) {
    
    int len = str.size();
    int count=0; 
    if(str[0]=='1') {
        count++;
    }
    
    for(int i=1;i<len;i++) {
        if(str[i]=='1' && str[i-1]=='0') {
            count++;
        } 
    }
    return count;
}

int main() {
    
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        cout<<solve(str)<<endl;
    }
  return 0;
}

/*
There are N seats in a row. You are given a string S with length N; for each valid i, the i-th character of S is '0' if the i-th seat is empty or '1' if there is someone sitting in that seat.

Two people are friends if they are sitting next to each other. Two friends are always part of the same group of friends. Can you find the total number of groups?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.
Output
For each test case, print a single line containing one integer ― the number of groups.

Constraints
1≤T≤50
1≤N≤105
Subtasks
Subtask #1 (100 points): original constraints

Example Input
4
000
010
101
01011011011110
Example Output
0
1
2
4
Explanation
Example case 1: Since all seats are empty, the number of groups is 0.

Example case 2: Since only one seat is occupied, the number of groups is 1.

Example case 3: Here, two seats are occupied, but since they are not adjacent, the people sitting on them belong to different groups.

Example case 4: Here, we have 4 groups of friends with size 1, 2, 2 and 4 respectively. That is, first group is sitting at 2nd seat, second group at 4th and 5th seat, third group at 7th and 8th seat and fourth group at 10th to 13th seat.
*/