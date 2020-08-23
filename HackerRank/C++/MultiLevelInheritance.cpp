/*
Sample Output

Multi Level Inheritance

I am an equilateral triangle
I am an isosceles triangle
I am a triangle

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

class Equilateral : public Isosceles
{
    public:
        void equilateral(){
            cout << "I am an equilateral triangle" << endl;
        }
};


int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

