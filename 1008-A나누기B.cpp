#include <iostream>
#include <math.h>
using namespace std;

//������ �� �Ҽ������� �����

int main() {
	int A, B;
	int ans = 0;
	cin >> A >> B;

	cout << fixed;
	cout.precision(20);

	cout.unsetf(ios::fixed);
	cout << A / (double)B;
}