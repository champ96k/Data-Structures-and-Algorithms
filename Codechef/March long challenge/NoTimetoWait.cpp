#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int timeZone,int hourLeft,int needHour) {
    
    int possibleHourLeft = hourLeft;
    for(int i=0;i<timeZone;i++) {
        if((possibleHourLeft+a[i])>=needHour) {
            return true;
        }
    }
    return false;
}

int main() {
    
    int timeZone,needHour,hourLeft;
    cin>>timeZone>>needHour>>hourLeft;
    int a[timeZone];
    
    for(int i=0;i<timeZone;i++) {
        cin>>a[i];
    }
    
    if(solve(a,timeZone,hourLeft,needHour)) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
  return 0;
}

/*
Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved. However, he is sure that he cannot solve the problem in the remaining time. From experience, he figures out that he needs exactly H hours to solve the problem.

Now Chef finally decides to use his special power which he has gained through years of intense yoga. He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, which are T1,T2,…,TN hours respectively behind his current time.

Find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.

Input
The first line of the input contains three space-separated integers N, H and x.
The second line contains N space-separated integers T1,T2,…,TN.
Output
Print a single line containing the string "YES" if Chef can solve the problem on time or "NO" if he cannot.

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤N≤100
1≤x<H≤100
1≤Ti≤100 for each valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input 1
2 5 3
1 2
Example Output 1
YES
Explanation
Chef already has 3 hours left. He can go to the 2-nd time zone, which is 2 hours back in time. Then he has a total of 3+2=5 hours, which is sufficient to solve the problem.

Example Input 2
2 6 3
1 2
Example Output 2
NO
Explanation
If Chef goes to the 1-st time zone, he will have 3+1=4 hours, which is insufficient to solve the problem.

If he goes to the 2-nd time zone, he will have 3+2=5 hours, which is also insufficient to solve the problem.

Since none of the time travel options can be used to gain sufficient time to solve the problem, Chef is incapable of solving it.

*/