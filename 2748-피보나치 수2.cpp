#include <iostream>

using namespace std;

int main() {
	long long n;  // ���� 0<=n<=90
	cin >> n;

	long long* fibonacci = new long long[n + 1]; //�޸��� �迭

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int i = 2; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]; //fibonacci��ȭ��
	}
	cout << fibonacci[n] << endl;
}