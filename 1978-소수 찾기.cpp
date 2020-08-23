#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	vector <int> v; //�Է� ��
	vector <int> prime; //�Ҽ� �迭
	int ans = 0; //��� ��(�Ҽ� ����)
	bool isPrime = true; //�Ҽ��Ǻ�

	cin >> N; //�׽�Ʈ���̽� �Է�

	for (int i = 0; i < N; i++) { //�Է�
		int a, b;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end()); //����

	prime.push_back(2); //�Ҽ� �迭�� 2�߰� �ϰ� ����

	//�Է¹��� �ִ񰪱����� �Ҽ� �迭 �����
	for (int i = 3; i <= v[v.size()-1]; i++) { //�Է� ���� ������ ����(�ִ�)���� �ݺ�
		isPrime = true;
		for (int j = 0; j < prime.size(); j++) { //�Ҽ� �迭 ũ�� ��ŭ �ݺ�

			if (i>=prime[j]&&i % prime[j] == 0) { //�Ҽ� �迭 ������ ũ�鼭 ������ �������� �Ҽ� �ƴ�
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) { //���� if���� ��� ��� �� �Ҽ���
			prime.push_back(i); //�Ҽ� �迭�� �߰�
		}
	}

	//������ ���� �Ҽ� �迭�� �Է� �� ���ؼ� �Ҽ� �Ǻ�
	for (int i = 0; i < v.size(); i++) {
		for(int j = 0;j<prime.size();j++)
			if (v[i] == prime[j]) {
				ans += 1;
				break;
			}
	}
	cout << ans; //�Է°� �� �Ҽ� ���� ���
}