#include "Node.cpp"

using namespace std;

template<class T> class Queue
{
private:
	Node<T> * head;
	Node<T> * tail;

public:
	Queue<T>() {
		head = NULL;
		tail = NULL;
	}

	void enqueue(T value) {
		Node<T> * temp = new Node<T>(value, NULL, NULL);
		if (head != NULL)
			head->next_node = temp;
		else
			tail = temp;
		head = temp;
	}

	T dequeue() {
		Node<T>* temp = new Node<T>();
		temp = tail;
		tail = tail->next_node;
		return temp->getValue();
	}
};