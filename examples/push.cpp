#include "stack.hpp"

void StackPUSH(size_t _size) {
	Stack<int> A;
	for(int i=0; i<_size; i++) {
		A.push(i);
	}
	cout << "CREATED STACK" << endl;
	cout << "PUSHED " << _size << " VALUES" << endl;
}

int main() {
	try {
		StackPUSH(10);
	} catch(std::exception &e) {
		cout << e.what() << endl;
	}
}