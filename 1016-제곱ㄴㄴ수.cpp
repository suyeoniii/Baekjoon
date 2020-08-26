#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	int i = 2;
	int a, b;

	cin >> a >> b;

	int ans = b - a + 1;

	vector <int> prime; //�Ҽ� �迭
	vector <int> square;
	bool isPrime = true; //�Ҽ��Ǻ�

	prime.push_back(2); //�Ҽ� �迭�� 2�߰� �ϰ� ����
	square.push_back(4);

	//�Է¹��� �ִ񰪱����� �Ҽ� �迭 �����
	for (int i = 3; i <= sqrt(b); i++) { //�Է� ���� ������ ����(�ִ�)���� �ݺ�
		isPrime = true;
		for (int j = 0; j < prime.size(); j++) { //�Ҽ� �迭 ũ�� ��ŭ �ݺ�

			if (i >= prime[j] && i % prime[j] == 0) { //�Ҽ� �迭 ������ ũ�鼭 ������ �������� �Ҽ� �ƴ�
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) { //���� if���� ��� ��� �� �Ҽ���
			prime.push_back(i); //�Ҽ� �迭�� �߰�
			square.push_back(pow(i, 2));
		}
	}
	
	for (i = a; i <= b; i++) {
		for (int j = 0; j < square.size(); j++) {
			if (square[j] <= i) {
				if (i % square[j] == 0) {
					ans -= 1;
					break;
				}
			}
			else {
				break;
			}
		}
	}
	cout << ans;
}