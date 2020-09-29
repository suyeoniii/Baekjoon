#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int pro = 0;

	string s;
	getline(cin, s);

	vector<string> problem;

	while (s!="������ ����� ��") {
		getline(cin, s);
		problem.push_back(s);
	}
	problem.pop_back();

	for (int i = 0; i < problem.size(); i++) {
		if (problem[i] == "����") {
			pro++;
		}
		else if (problem[i] == "������") {
			if (pro > 0) {
				pro--;
			}
			else {
				pro += 2;
			}
		}
	}
	if (pro > 0) {
		cout << "����";
	}
	else {
		cout << "�������� �����";
	}
}