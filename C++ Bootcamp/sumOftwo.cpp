/* 
Sum of two
Maths and logic are the necessary parts of programming that can be learned through practice. Here is a simple mathematical problem of addition for you to solve.

Write a program to print the sum of two integers.

Instructions:

We have defined two integer variables  and  for you.
We have provided the code to get the input for the two variables.
You have to write the logic to add the two variables.
Print the sum.

*/


#include <iostream>
using namespace std;

int main(){
    
	int num1, num2;   // Define two integer variables
	cin >> num1 >> num2;  // Get input for the two variables
    
	int sum = 0;
	// Write the logic to add these numbers here:
	sum=num1+num2;
	cout << sum << endl;   // Print the sum
	return 0;
}
