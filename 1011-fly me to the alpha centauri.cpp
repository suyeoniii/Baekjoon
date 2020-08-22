/*
	���� : k-1,k,k+1��ŭ �ӵ��� �ٲ㰡�� ������ ���� ������ �� �� �ּ����� �̵� ��
	*ù�ӵ��� ������ �ӵ��� �׻� 1��
	ex) ��� : 1 , ���� : 5
	�ӵ� = 1, 2, 1
	�� = 3

	����)

	�Է� : 
	3 (�׽�Ʈ ���̽� ��)
	0 3 (���,������)
	1 5
	45 50

	��� : (�̵� ��)
	3
	3
	4

	-2020.08.22 suyeoniii
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, ans, length, k; //�׽�Ʈ ���̽� ��, ��, ���� ����, �̵� ����
	bool even; //k�� ���ϴ� Ƚ���� ¦/Ȧ �� �Ǻ�

	vector <int> v;
	
	cin >> N;

	for (int i = 0; i < N; i++) { //�Է�
		int a, b;
		cin >> a;
		cin >> b;
		v.push_back(b - a); //�Ÿ��� ����
	}

	for (int i = 0; i < N; i++) {

		ans = 0;
		length = v[i]; //���� ���� = �Ÿ�
		even = false; //�ʱⰪ = Ȧ����
		k = 1; 

			while (length > 0) { //���̰� 0���� ū ���� ����
				length -= k; //k��ŭ ���̸� ���ְ� ��++
				ans += 1;

				if (even) { //k�� �ι� ��������, 1�÷���
					k = k + 1;
					even = false;
				}
				else { //k �ѹ� ������
					even = true;
				}
			}
		cout << ans << endl;
	}
}

