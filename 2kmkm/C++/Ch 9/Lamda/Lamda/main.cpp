/*
# ���� ����
�Լ� ����(function abstraction)�� �Լ� ȣ��(function application)
������ ���α׷��� �ۼ��ϰ�, ����ȭ ���α׷� ������ ����
���� ���� : ���ٽ� �ۿ��� ������ ����

# ���� ����
[capture](parameter list) -> return type {function body}
ĸó ����Ʈ�� ���ٽ� �ۿ��� ������ ������ ����Ʈ
-> return type�� ���� �����ϰ�, �����Ϸ��� �ڵ�����!
(�Լ� ��ü�� return���� �����ؼ� ��ȯ Ÿ���� ����, ���� ������ return���� ������ void)
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

    cout << lamda2("hello") << endl; // 0(false) -> [sz] ������ ������� �ʾұ� ������ sz�� �״�� 10

    auto lamda3 = [&sz](const string& a) -> bool
    { return a.size() >= sz; };

    cout << lamda3("hello") << endl; // 1(true) -> [&sz] ������ ����߱� ������ sz�� 3���� ����

    return 0;
}


