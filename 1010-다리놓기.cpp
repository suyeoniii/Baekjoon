#include <iostream>
#include <vector>
#include <algorithm>

/*
DP�˰��� ���
mCn�� �ϸ� �� ���� �� ����.
m>=n
*/

using namespace std;
int arr[32][32] = { 0, }; //���� �迭 - ���

void dp(int a,int b) { //dp����
	int b2 = b-1; 
	
		while (b2 != b) { //���ϴ� ���� ��ϵǸ� ����
			if (arr[a][b2] == 0) { //��ϵȰ� ������ ���� ������ �ڷ� �̵�
				b2 -= 1;
			}
			else if (arr[a][b2] != 0) { //��ϵȰ� ������ ������ �̵��ϸ� �������� �̿��Ͽ� ���
				b2 += 1;
				arr[a][b2] = arr[a][b2 - 1] * b2 / (b2 - a);
			}
		}
}

int main() {
	int T, N, M; //�׽�Ʈ���̽�
	vector <pair<int, int>> v; //�Է� �޴� �迭
	vector <int> answer; //����� �迭
	int ans = 0;

	cin >> T;
	
	for (int i = 0; i < T; i++) {//�Է�
		cin >> N >> M;
		v.push_back(make_pair(N, M));
	}
	for (int i = 0; i < 31 ; i++) {//n==m�ΰ�� 1���
		arr[i][i] = 1;
	}
	for (int i = 0; i < T; i++) {//�׽�Ʈ���̽� �ݺ�
		if (arr[v[i].first][v[i].second]!=0) { //���� ������ ���
			answer.push_back(arr[v[i].first][v[i].second]);
		}
		else { //���� 0�̸�(������) ���ϱ�
			dp(v[i].first, v[i].second);
			answer.push_back(arr[v[i].first][v[i].second]);
		}
	}

	for (int i = 0; i < answer.size(); i++) { //�� ���
		cout << answer[i] << endl;
	}
}