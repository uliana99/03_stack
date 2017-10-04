#include "stack.hpp"

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

int main() {
	try {
		StackPOP(16);
	} catch(const exception& e) {
		if(e == 1) cout << e.what() << endl;
	}
}
