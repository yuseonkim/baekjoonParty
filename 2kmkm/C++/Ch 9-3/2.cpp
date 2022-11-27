#include <iostream>
#include <cstdlib>
#include <sstream>
#include <set>
#include <iterator> // insert_iterator
#include <algorithm> // set_intersection
using namespace std;

void InputKeywords(set<string>& setKeywords) {
    string s;
    do {
        getline(cin, s);
        if (s != string("")) {
            istringstream iss(s);

            string word;
            while (iss >> word)
                setKeywords.insert(word);
        }
    } while (s != string(""));
}

int main() {
    set<string> doc;
    set<string> query;
    InputKeywords(doc);
    InputKeywords(query);

    set<string> intersection_result;
    insert_iterator<set<string>> intersectionIter(intersection_result, intersection_result.begin());
    set_intersection(doc.begin(), doc.end(), query.begin(), query.end(), intersectionIter);

    double similarity = intersection_result.size() / (sqrt(doc.size()) * sqrt(query.size()));
    cout << "The similarity is " << similarity << endl;
    cout << "the intersection set size is " << intersection_result.size() << endl;
    cout << "the doc set size is " << doc.size() << endl;
    cout << "the query set size is " << query.size() << endl;

    return 0;
}

