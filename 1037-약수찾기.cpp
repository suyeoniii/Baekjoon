#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*�־��� ���� ���� � ���� ������� �˾Ƴ��� ����
 ���������� �������� ���� ū���� ���� ���� ��
*/

int main() {
	int N;
	cin >> N;
	vector <int> v;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[N - 1];
}