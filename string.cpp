#include <cstdio>
#include<iostream>

using namespace std;

int main(void)
//this is for a pull request
{
    // strings
    string s, s1;
    s = "HELLO";
    s1 = "HELLO";
    if(s.compare(s1) == 0) // comparing string s and s1
        cout << s << " is equal to " << s1 << endl;
    else // strings are not equal
        cout << s << " is not equal to " << s1 << endl;
    s.append(" WORLD!"); // appending string "WORLD!"
    cout << s << endl;
    printf("%s\n", s.c_str());
    if(s.compare(s1) == 0)
        cout << s << " is equal to " << s1 << endl;
    else
        cout << s << " is not equal to " << s1 << endl;
    return 0;
}
