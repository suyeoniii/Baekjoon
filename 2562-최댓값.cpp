#include <iostream>
using namespace std;

//9�� �� �߿��� �ִ񰪰� �ִ��� ��ġ ���
int main() {
	int ans = 0;
	int index = 0;
	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		if (ans < a) {
			ans = a;
			index = i+1;
		}
	}
	cout << ans << endl;
	cout << index;

}