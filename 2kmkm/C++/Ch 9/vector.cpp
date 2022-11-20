/*
# for_each

for_each�� ���ڸ� �ּ� ������ ���� �޴´�.
ù ��° �Ű� ������ ���� �������� �ּ� ���� �ް�, �� ��° ���ڷ� ���� ������ ��Ҹ� ����Ű�� �ּ� ���� ���� ����
!! �� ��° ���ڸ� ���޹��� �� ���� ���� �ּ� �� �� �����ǰ��� ��� !!

Unaryfunction for_each(InputIt first, InputIt last, Unaryfunction f)
first : ���� �ּ� ��
last : ����� ������ ���� null or ������ ���� �ּ�
f : ����ڰ� ������ �Լ� or �Լ� ��ü


# push_back

void push_back(const T& value);
vector�� ���� ��Ҹ� �߰��� �� ����ϴ� �Լ�

# sort

sort(begin, end)
�������� ���� ����
begin : �ش� �迭�� �޸� �ּ�
end : ������ ������ �ּҰ� �ִ� �޸� �ּ�

# count_if

count_if(first, last)
'true'�� �����ϴ� ���ҵ��� ���� ī��Ʈ
first : ������ ����
last : ������ ��

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

    // for_each ���� �ݺ��ؼ� �ۼ��Ͽ� sort ����� Ȯ��

    for_each(words.begin(), words.end(),
        [&os, c](const string& s) { os << s << c; });

    int num = 2;

    cout << count_if(words.begin(), words.end(),
        [num](const string& s) { return s.length() > num; }) << endl;

    return 0;

}