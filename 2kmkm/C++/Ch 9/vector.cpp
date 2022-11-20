/*
# for_each

for_each는 인자를 주소 값으로 전달 받는다.
첫 번째 매개 변수로 값의 시작점인 주소 값을 받고, 두 번째 인자로 값의 마지막 요소를 가리키는 주소 값을 전달 받음
!! 두 번째 인자를 전달받을 때 전달 받은 주소 값 전 까지의값만 출력 !!

Unaryfunction for_each(InputIt first, InputIt last, Unaryfunction f)
first : 시작 주소 값
last : 요소의 마지막 다음 null or 쓰레기 값의 주소
f : 사용자가 정의한 함수 or 함수 객체


# push_back

void push_back(const T& value);
vector의 끝에 요소를 추가할 때 사용하는 함수

# sort

sort(begin, end)
오름차순 정렬 수행
begin : 해당 배열의 메모리 주소
end : 정렬할 마지막 주소가 있는 메모리 주소

# count_if

count_if(first, last)
'true'를 리턴하는 원소들의 개수 카운트
first : 원소의 시작
last : 원소의 끝

*/


#include <iostream>
#include <vector> // vector
#include <algorithm> // for_each
using namespace std;

int main() {
    vector<string> words;
    words.push_back("a"); // words[0] ==> "a"
    words.push_back("de"); // words[1] ==> "de"
    words.push_back("ghi"); // words[2] ==> "ghi"

    char c = ' ';
    ostream& os = cout;

    for_each(words.begin(), words.end(),
        [&os, c](const string& s) { os << s << c; });

    sort(words.begin(), words.end(),
        [](const string& s1, const string& s2) { return s1 < s2; });

    // for_each 문을 반복해서 작성하여 sort 결과를 확인

    for_each(words.begin(), words.end(),
        [&os, c](const string& s) { os << s << c; });

    int num = 2;

    cout << count_if(words.begin(), words.end(),
        [num](const string& s) { return s.length() > num; }) << endl;

    return 0;

}