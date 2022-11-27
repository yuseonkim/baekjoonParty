#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;

    s.insert("A"); s.insert("D"); s.insert("D"); 
    s.insert("C"); s.insert("C"); s.insert("B");
    // {A,B,C,D}

    cout << "The set contains: \n";
    set<string>::const_iterator p;
    for (p = s.begin(); p != s.end(); p++) cout << *p << " ";
    cout << endl; // A B C D

    cout << "The set contains: \"C\" : ";
    if (s.find("C") == s.end()) cout << "no" << endl;
    else cout << "yes" << endl;
    
    cout << "Removing \"C\"\n";
    s.erase("C");
    for (p = s.begin(); p != s.end(); p++) cout << *p << " ";
    cout << endl;

    cout << "The set contains: \"C\": ";
    if (s.find("C") == s.end()) cout << "no" << endl;
    else cout << "yes" << endl;
    
    return 0;
}