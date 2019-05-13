#include "Node.cpp"

using namespace std;

template<class T>class Stack {
private:
	Node<T> * top;
	int count;

public:
	Stack() {
		count = 0;
		top = NULL;
	}
	bool isEmpty() {
		return count == 0;
	}

	void push(T value) {
		Node<T> *  temp = new Node<T>(value, NULL, top);
		top = temp;
		count++;
	}
	T peek()
	{
		return top->getValue();
	}
	T pop() {
		if (isEmpty()) {
			return NULL;   
		}
		else {
			Node<T> * temp = top;
			top = top->next_node;
			count--;
			return temp->getValue();
		}
	}
};