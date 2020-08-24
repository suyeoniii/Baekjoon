#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;//�׽�Ʈ���̽�
	vector <int> v; //�Է� ��
	vector <int> prime; //�Ҽ� �迭
	vector <pair<int, int>> ans; //��� ��(�Ҽ� ����)
	int num = 0; //���ذ� - �־��� ¦���� ��
	int a = 0; //���ذ����� ���� �Ҽ�
	int b = 0; //���ذ����� ū �Ҽ�
	bool isPrime = true; //�Ҽ��Ǻ�

	cin >> N; //�׽�Ʈ���̽� �Է�

	for (int i = 0; i < N; i++) { //�Է�
		int a, b;
		cin >> a;
		v.push_back(a);
	}

	prime.push_back(2); //�Ҽ� �迭�� 2�߰� �ϰ� ����

	//�Է¹��� �ִ񰪱����� �Ҽ� �迭 �����
	for (int i = 3; i <= *max_element(v.begin(), v.end()); i++) { //�Է� ���� ������ ����(�ִ�)���� �ݺ�
		isPrime = true;
		for (int j = 0; j < prime.size(); j++) { //�Ҽ� �迭 ũ�� ��ŭ �ݺ�

			if (i >= prime[j] && i % prime[j] == 0) { //�Ҽ� �迭 ������ ũ�鼭 ������ �������� �Ҽ� �ƴ�
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) { //���� if���� ��� ��� �� �Ҽ���
			prime.push_back(i); //�Ҽ� �迭�� �߰�
		}
	}

	//�� �Ҽ� ã��
	for (int i = 0; i < v.size(); i++) {
		num = v[i] / 2; //���ذ�
		for (int j = 0; j < prime.size(); j++) {
			if (num >= prime[j]) { //���ذ����� ���� �Ҽ� ã��
				a = j;
			}
			if (num <= prime[j]) { //���ذ����� ū �Ҽ� ã��
				b = j;
				break;
			}
		}

		//�� �Ҽ��� ���� �־��� ���� �� ������ a, b �� ����
		while (a >= 0 && a < prime.size() && b >= 0 && b < prime.size()) {
			if (prime[a] + prime[b] == v[i]) {//�� ã���� ��
				ans.push_back(make_pair(prime[a], prime[b]));
				break;
			}
			else if (prime[a] + prime[b] >= v[i]) {//�־��� ������ ũ�� ���� ���� ����
				a -= 1;
			}
			else if (prime[a] + prime[b] <= v[i]) { //�־��� ������ ������ ū���� �ø�
				b += 1;
			}
		}
	}

	for (int i = 0; i < ans.size(); i++) { //�� ���
		cout << ans[i].first << ' ' << ans[i].second << endl;;
	}
}