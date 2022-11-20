#include <iostream>
#include <sstream>        // istringstream, ostringstream 클래스를 사용하기 위한 헤더
#include <cctype>
/* 완성하시오 */  //  toupper(ch), tolower(ch), isdgit(ch),
//  isalpha(ch) 함수를 사용하기 위한 헤더

using namespace std;


int main() {
    string str;

    int cnt = 0;
    int alpha[26];

    for (int i = 0; i < 26; i++) {
        alpha[i] = 0;
    }

    while (cin >> str) {

        for (char i = 'A'; i <= 'Z'; i++) {
            if (toupper(str[0]) == i) {


                alpha[int(i) - 65]++;
                break;
            }
        }
        cnt++;
    }
    cout << "total :" << cnt << "word" << endl;

    for (char i = 'A'; i <= 'Z'; i++) {
        cout << i << ':';
        for (int j = 0; j < alpha[int(i) - 65]; j++) {
            cout << "*";
        }
        cout << endl;
        ;

    }

}
