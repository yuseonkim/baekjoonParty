#include <iostream>
#include <map>
#include <string>
#include <string_view> // const string& <==> string_view
#include <algorithm> // erase_if
using namespace std;

void print_map(const string& comment, const map<string, int>& m) {
    cout << comment;
    // iterate using C++17 facilities
    for (const auto& pair : m) {
        auto key = pair.first;
        auto value = pair.second;
        cout << " [" << key << "] = " << value << ";";
    }   cout << "\n";
}

int main() {
    map<string, int> m{ {"CPU", 10 }, {"GPU", 15 }, {"RAM", 20 }};
    print_map("1) Initial map: ", m);

    m["CPU"] = 25; // update "CPU", 10
    m["SSD"] = 30; // insert "SSD", 30
    print_map("2) Update map: ", m);

    cout << "3) m[UPS] = " << m["UPS"] << endl;
    print_map("4) Updated map: ", m);

    m.erase("GPU");
    print_map("5) Updated map: ", m);

    erase_if(m, [](const auto& pair) {return pair.second > 25});
    print_map("6) After erase: ", m);

    cout << "7) m.size() = " << m.size() << endl;

    m.clear();

    cout << boolalpha << "8) Map is empty: " << m.empty() << "\n";

    return 0;
}