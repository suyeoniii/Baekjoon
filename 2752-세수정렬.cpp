#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//���� ����

int main() {
	vector<int> v;
	for (int i = 0; i < 3; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<" ";
	}

}