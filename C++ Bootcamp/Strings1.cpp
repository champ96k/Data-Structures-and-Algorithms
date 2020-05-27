/*
Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
  
  string firstString,secondString;
  cin>>firstString>>secondString;
   
   //Find String Length
   cout<<firstString.size()<<" "<<secondString.size()<<endl;
   
   //String concatination
   cout<<firstString+secondString<<endl;
   
   char firstElementOfFirst = firstString[0];
   char firstElementOfSecond = secondString[0];

   for(int i=0;i<firstString.size();i++) {
     if(i==0) {
       cout<<firstElementOfSecond;
     }
     else {
       cout<<firstString[i];
     }
   }
   
   cout<<" ";
   
   for(int i=0;i<secondString.size();i++) {
     if(i==0) {
       cout<<firstElementOfFirst;
     }
     else {
         cout<<secondString[i];
       } 
    }
    
   return 0;
  }

