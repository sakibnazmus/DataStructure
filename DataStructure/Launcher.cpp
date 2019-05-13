#include <iostream>
#include <stdio.h>
#include "Stack.cpp"
#include "Queue.cpp"
#include "Heap.cpp"

using namespace std;

int main() {
	/*Stack<int> s;
	Queue<int> q;
	
	s.push(10);	
	s.push(20);
	
	cout << s.pop() << endl;
	s.push(25);
	cout << s.pop() << endl;

	cout << s.pop() << endl;
	getchar();

	q.enqueue(10);
	q.enqueue(20);
	cout << q.dequeue() << endl;
	q.enqueue(25);
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	getchar();*/
	Heap<int> h = Heap<int>(10, 1);
	bool on = true;
	while (on) {
		int choice;
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			int val;
			scanf_s("%d", &val);
			h.insert(val);
			break;

		case 5:
			h.print_all();
			break;
		case -1:
			on = false;
			break;
		default:
			break;
		}
	}
	
	return 0;
}