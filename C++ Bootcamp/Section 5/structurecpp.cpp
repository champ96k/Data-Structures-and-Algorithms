


#include <iostream>
using namespace std;

struct User{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main() {
    
    User mickey = {001, "mickey", "mickey@cartoon.com", 2};
    User donald = {002, "donald", "donald@cartoon.com", 3};
    
    User * d = &donald;
    
    cout << donald.email << endl;
    donald.course_count = 4;
//    donald.uId = 221;
    
    donald.email = "ddonaldy@toon.com";
    
    cout << donald.email << endl;
    
    d->course_count = 12;
    cout << donald.course_count << endl;
    
    return 0;
}


