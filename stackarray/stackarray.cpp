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
	}
};