#include <iostream>
#include <vector>
using namespace std;

//ī�� ���� �� �Է�
//���� �����ʴ� �ִ� ī�� �� ���

int main() {
	int N, M;
	int ans = 0;
	vector<int> v;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = i+1; j < v.size(); j++) {
			if (j != i) {
				for (int k = i + 2; k < v.size(); k++) {
					if (k != i && k != j) {
						if (v[i] + v[j] + v[k] <= M) {
							if (v[i] + v[j] + v[k] > ans) {
								ans = v[i] + v[j] + v[k];
							}
						}
					}
				}
			}
		}
	}

	cout << ans;
}