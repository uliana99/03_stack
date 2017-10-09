#include "stack.hpp"

void StackINIT() {
	Stack<int> A;
	Stack<char> B(Stack<char>(20));
	cout << "CREATED STACK A (INT)" << endl << "MOVED STACK B (CHAR)" << endl;
}

int main() {
	try {
		StackINIT();
	} catch(std::exception &e) {
		cout << e.what() << endl;
	}
}