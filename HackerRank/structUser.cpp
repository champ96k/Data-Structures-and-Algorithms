#include<bits/stdc++.h>
using namespace std;

/*
Input Format

//

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

The code provided by HackerRank will use your class members to set and then get the elements of the Student class.

Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10

*/

struct User{
  int age;
  string firstName;
  string lastName;
  int std;
};

int main() {
  
  User p1;
  cin>>p1.age;
  cin>>p1.firstName;
  cin>>p1.lastName;
  cin>>p1.std;
  
  cout<<p1.age<<endl;
  cout<<p1.lastName<<", "<<p1.firstName<<endl;
  cout<<p1.std<<"\n\n";
  
  cout<<p1.age<<","<<p1.firstName<<","<<p1.lastName<<","<<p1.std;
  
 return 0;
}
