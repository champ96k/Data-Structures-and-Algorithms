/*

Day 4: Class vs. Instance

Input Format

Input is handled for you by the stub code in the editor.

The first line contains an integer,  (the number of test cases), and the  subsequent lines each contain an integer denoting the  of a Person instance.

Constraints

Output Format

Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already in the editor. If your methods are implemented correctly, each test case will print  or  lines (depending on whether or not a valid  was passed to the constructor).

Sample Input

4
-1
10
16
18
Sample Output

Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.

*/

using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

Person::Person(int initialAge){
    if(initialAge < 0)
    {
        age = 0;
        cout <<"Age is not valid, setting age to 0.\n";
    }
    else
    {
    age = initialAge;    
    }
}

void Person::amIOld(){
    if(age<13){
        cout<<"You are young.\n";
    }
    else if(age >=13 && age < 18)
    {
        cout<<"You are a teenager.\n";
    }
    else if(age >=18)
    {
    cout<<"You are old.\n";    
    }
}

void Person::yearPasses(){
    age = age+1;
}

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
