#include "stack.hpp"

int l = 0;

void StackINIT() {
	Stack<int> A;
	cout << "CREATED " << ++l << " STACK" << endl;
}

int main() {
	StackINIT();
	StackINIT();
}