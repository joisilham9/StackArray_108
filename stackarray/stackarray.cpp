#include <iostream>
#include <string>

using namespace std;

class StrackArray {
private:
	string stack_array[5];
	int top;
public:
	//constructor
	void StackArray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) { //step 1
			cout << "number of data exceerds the limit." << endl;
			return "";
		}
	
		top++; // step2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushead)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nThe popped element is :" << stack_array[top] << endl; //step2
		top--; //step 3 decrement
}

	bool empty() {
		return (top == -1);
	} 

	void display()

};