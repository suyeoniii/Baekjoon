#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	int num;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		num = N - i;
		for (int j = 0; j < num; j++) {
			cout << ' ';
		}
		for (int j = 0; j < 2*i-1; j++) {
			cout << '*';
		}
		cout << endl;
	}

}