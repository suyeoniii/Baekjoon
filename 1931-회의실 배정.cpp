#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int N = 0; //ȸ�� ����
	int a, b;
	int ans = 1;
	int time;
	cin >> N; //�Է�

	vector<pair<int, int>>v; //������ ���ͼ���

	for (int i = 0; i < N; i++) { //ȸ�� �ð� �Է�
		cin >> a >> b;
		v.push_back(pair<int, int>(b, a)); //����ð����� �����ϱ� ���� (����ð�, ���۽ð�)���� �Ҵ�
	}
	sort(v.begin(), v.end());//�������� ����
	time = v[0].first;

	for (int i = 1; i < N; i++) {
		if (time <= v[i].second) {
			time = v[i].first;
			ans += 1;
		}
	}
	cout << ans;

}