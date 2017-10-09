#include "stack.hpp"

void StackEMPTY(size_t _size) {
	Stack<int> A;

	for(int i=0; i<_size; i++) {
		A.push(i);
	}

	Stack<int> B = Stack<int>(A);

	cout << "CREATED STACK A & STACK B" << endl;
	cout << "PUSHED " << _size << " VALUES" << endl;
	cout << "COPIED STACK A" << endl;

	while(A.empty()) {
		A.pop();
		cout << A.top() << " ";
	}
	cout << endl << "CLEAN STACK A COMPLETE" << endl;

	while(B.empty()) {
		B.pop();
		cout << B.top() << " ";
	}
	cout << endl << "CLEAN STACK B COMPLETE" << endl;
}

int main() {
	try {
		StackEMPTY(10);
	} catch(std::exception &e) {
		cout << e.what() << endl;
	}
}