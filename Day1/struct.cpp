#include<bits/stdc++.h>
using namespace std;

/*
Input Format

Input will consist of four lines.
The first line will contain an integer, representing age.
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

Output will be of a single line, consisting of age, first_name, last_name and standard, each separated by one white space.

P.S.: I/O will be handled by HackerRank.

Sample Input

15
john
carmack
10
Sample Output

15 john carmack 10
*/

struct person {
  int age;
  string firstName,lastName;
  int std;
};

int main() 
  {
   person p1;
   cin>>p1.age>>p1.firstName>>p1.lastName>>p1.std;
   
   cout<<p1.age<<" "<<p1.firstName<<" "<<p1.lastName<<" "<<p1.std;
   
   return 0;
  }
