#include<iostream>
#include <string>
using namespace std;
const int arraySize = 4;
template<class t>
class Stack {
private:
	int top;
	t stack_array[arraySize];
	int counter = 0;
public:

	Stack() {
		top = -1;
	}
	void push(t item) {
		if (top >= arraySize-1) {
			cout << "stack is full" << endl;
		}
		else {
			counter++;
			top++;
			stack_array[top] = item;

		}

	}
	void pop() {
		if (top < 0) cout << "stack is empty" << endl;
		else top--;

	}
	void print_stack() {
		if (top < 0) { cout << "stack is empty"; }
		else{
		cout << '[';
		for (int i = top; i >= 0; i--)
		{
			cout << stack_array[i] << " ";

		}
		cout << "]" << endl;
		}
	}
	void getTop() {
		cout<<stack_array[top] << endl;
	}
	void is_empty() {
		if (top < 0) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}
	}
	int size() {
		return counter;
	}

};
int main() {
	Stack<string> stack_list;
	stack_list.push("ahmad");
	stack_list.push("khaled");
	stack_list.push("zaid");
	stack_list.print_stack();
	cout << stack_list.size() << endl;
}