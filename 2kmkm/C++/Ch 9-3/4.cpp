#include <iostream>
#include <map>
#include <string>
#include <string_view>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> mapNumReviewers;
    map<string, int> mapSumReviews;

    // Input
    int numRatings;
    cin >> numRatings;
    cin.ignore(2, '\n');

    for (int i = 0; i < numRatings; i++) {
        string title;
        getline(cin, title);

        int rating;
        cin >> rating;
        cin.ignore(2, '\n');

        if (mapNumReviewers.find(title) == mapNumReviewers.end())
            mapNumReviewers[title] = 1;
        else mapNumReviewers[title]++;

        if (mapSumReviews.find(title) == mapSumReviews.end())
            mapNumReviewers[title] = rating;
        else mapNumReviewers[title] += rating;
    }
    
    // Output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    map<string, int>::const_iterator iter;
    for (iter = mapNumReviewers.begin(); iter != mapNumReviewers.end(); iter++) {
        string title = iter->first;
        int numReviewers = iter->second;
        int sumRatings = mapSumReviews[title];

        cout << title << ": " << numReviewers << " reviewers. "
            << "Average of " << static_cast<double>(sumRatings) / numReviewers << "/5" << endl;
    }
    return 0;
}