//Koshkina_Uliana
#include "stack.hpp"

void StackINIT();
void StackPUSH(size_t _size);
void StackPOP(size_t _size);
void StackEMPTY(size_t _size);

int main() {
	try {
		StackINIT();
		StackPUSH(10);
		StackPOP(14);
		StackEMPTY(12);
	} catch(std::exception &e) {
		cout << e.what() << endl;
	}
	
	return 0;
}