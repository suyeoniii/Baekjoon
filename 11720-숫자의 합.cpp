#include <iostream>
#include <string>
using namespace std;
//�Է¹��� ���� ���ڸ��� �� ���

int main() {
	int N;
	string s;
	int ans = 0;
	cin >> N;
	cin >> s;

	for (int i = 0; i < N; i++) {
		ans += s[i] - 48;
	}
	cout << ans;
}