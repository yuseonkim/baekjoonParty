#include <iostream>
#include <functional> // function
using namespace std;

int main() {
    auto addtwointegers = [](int x) -> function<int(int)> {
        return [=](int y) { return x + y; };
    };

    auto higherorder = [](const function<int(int)>& f, int z) {
        return f(z) * 2;
    };

    auto answer = higherorder(addtwointegers(7), 8); // (lamda y. 7+y) 8
    cout << answer << endl;

    return 0;
}