#include <iostream>
using namespace std;

//�μ� ��
int main() {
	int A, B;
	cin >> A >> B;

	if (A>B) {
		cout << '>';
	}
	else if (A<B) {
		cout << '<';
	}
	else if(A==B){
		cout << "==";
	}
}