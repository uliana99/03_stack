#include "stack.hpp"

void StackPOP(size_t _size) {
	try {
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
		
	} catch(const exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	StackPOP(16);
}