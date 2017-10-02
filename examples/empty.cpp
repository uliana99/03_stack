#include "stack.hpp"

void StackEMPTY(size_t _size) {
	Stack<int> A;
	for(int i=0; i<_size; i++) {
		A.push(i);
	}

	while(!A.empty()) {
		cout << A.pop() << " ";
	}
	cout << "CREATED STACK" << endl;
	cout << "PUSHED " << _size << " VALUES" << endl;
	cout << "CLEAN COMPLETE" << endl;
}

int main() {
	StackEMPTY(10);
}