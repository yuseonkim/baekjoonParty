/*
# 람다 계산법
함수 정의(function abstraction)와 함수 호출(function application)
간결한 프로그램을 작성하고, 병렬화 프로그램 구성에 장점
자유 변수 : 람다식 밖에서 정의한 변수

# 람다 구문
[capture](parameter list) -> return type {function body}
캡처 리스트는 람다식 밖에서 정의한 변수들 리스트
-> return type을 보통 생략하고, 컴파일러가 자동유추!
(함수 몸체의 return문을 참고해서 반환 타입을 결정, 만일 참고할 return문이 없으면 void)
*/

#include <iostream>
using namespace std;

int main() {
    auto lamda1 = [](const string& a, const string& b) -> bool
    { return a.size() > b.size(); }; 

    int sz = 10;

    auto lamda2 = [sz](const string& a) -> bool
    { return a.size() >= sz; };

    cout << lamda1("abc", "def ghi") << endl; ; // 0(false)

    cout << lamda2("hello") << endl; // 0(false)

    sz = 3;

    cout << lamda2("hello") << endl; // 0(false) -> [sz] 참조를 사용하지 않았기 때문에 sz가 그대로 10

    auto lamda3 = [&sz](const string& a) -> bool
    { return a.size() >= sz; };

    cout << lamda3("hello") << endl; // 1(true) -> [&sz] 참조를 사용했기 때문에 sz가 3으로 변경

    return 0;
}


