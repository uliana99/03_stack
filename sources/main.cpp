//Koshkina_Uliana
#include "stack.hpp"

int l = 0;

void StackINIT() {
	Stack<int> A;
	cout << "CREATED " << ++l << " STACK" << endl;
}

void StackPUSH(size_t _size) {
	Stack<int> A;
	for(int i=0; i<_size; i++) {
		A.push(i);
	}
	cout << "CREATED STACK" << endl;
	cout << "PUSHED " << _size << " VALUES" << endl;
}

void StackPOP(size_t _size) {
	Stack<int> A;
	for(int i=0; i<_size; i++) {
		A.push(i);
	}
		
	for(int j=0; j<(_size/2); j++) {
		cout << A.pop() << " ";
	}
	cout << endl;

	cout << "CREATED STACK" << endl;
	cout << "PUSHED " << _size << " VALUES" << endl;
	cout << "POPED " << (_size/2) << " VALUES" << endl;
}

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