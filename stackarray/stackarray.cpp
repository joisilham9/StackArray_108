#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//constructor
	 StackArray() {
		top = -1;
	}
	  
	void push() {
		if (top == 4) { //step 1
			cout << "number of data exceerds the limit." << endl;
			return;
		}
		cout << "\nEnter a element : ";
		string element;
		getline(cin, element);
		top++; // step2

		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushead)" << endl;
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

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}

	}
};

int main() {
	StackArray s;
	while (true) {
		cout << endl;
		cout << "\n**stack menu**\n";
		cout << "1.push\n";
		cout << "2.pop\n";
		cout << "3.display\n";
		cout << "4.exit\n";
		cout << "\nenter your choice : ";
		
	    string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
	
		switch (ch) {
		case '1' : {
			s.push();
			break;
			} 
	 	case '2':
			if (s.empty()) {
				cout << "\nstack is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3' :
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;
		}
	}
}