#include <iostream>
using namespace std;
int main() {

	int N = 0;
	cin >> N;
	int* num = new int[N]; //포인터배열
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	int v = 0;
	cin >> v;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (num[i] == v)
			count += 1;
	}
	cout << count << endl;
	return 0;
};