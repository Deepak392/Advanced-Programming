#include <iostream>
using namespace std;

class Stack {
private:
	static const int n = 5;
	int items[n];
	int topIndex;

public:
	Stack() : topIndex(-1) {}

	bool isEmpty() const {
		return topIndex == -1;
	}

	bool isFull() const {
		return topIndex == n - 1;
	}

	void push(int value) {
		if (isFull()) {
			cout << "Stack is full. Cannot push " << value << ".\n";
			return;
		}
		items[++topIndex] = value;
	}

	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty. Cannot pop.\n";
			return;
		}
		cout << "Popped: " << items[topIndex--] << '\n';
	}

	int peek() const {
		if (isEmpty()) {
			cout << "Stack is empty.\n";
			return -1;
		}
		return items[topIndex];
	}

	void display() const {
		if (isEmpty()) {
			cout << "Stack is empty.\n";
			return;
		}
		cout << "Stack (top to bottom): ";
		for (int index = topIndex; index >= 0; --index) {
			cout << items[index] << ' ';
		}
		cout << '\n';
	}
};

class Queue {
private:
	static const int CAPACITY = 5;
	int items[CAPACITY];
	int frontIndex;
	int rearIndex;
	int itemCount;

public:
	Queue() : frontIndex(0), rearIndex(-1), itemCount(0) {}

	bool isEmpty() const {
		return itemCount == 0;
	}

	bool isFull() const {
		return itemCount == CAPACITY;
	}

	void enqueue(int value) {
		if (isFull()) {
			cout << "Queue is full. Cannot enqueue " << value << ".\n";
			return;
		}
		rearIndex = (rearIndex + 1) % CAPACITY;
		items[rearIndex] = value;
		++itemCount;
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "Queue is empty. Cannot dequeue.\n";
			return;
		}
		cout << "Dequeued: " << items[frontIndex] << '\n';
		frontIndex = (frontIndex + 1) % CAPACITY;
		--itemCount;
	}

	int front() const {
		if (isEmpty()) {
			cout << "Queue is empty.\n";
			return -1;
		}
		return items[frontIndex];
	}

	int rear() const {
		if (isEmpty()) {
			cout << "Queue is empty.\n";
			return -1;
		}
		return items[rearIndex];
	}

	void display() const {
		if (isEmpty()) {
			cout << "Queue is empty.\n";
			return;
		}
		cout << "Queue (front to rear): ";
		for (int offset = 0; offset < itemCount; ++offset) {
			cout << items[(frontIndex + offset) % CAPACITY] << ' ';
		}
		cout << '\n';
	}
};

int main() {
	Stack stack;
	cout << "STACK\n";
	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.display();
	cout << "Top: " << stack.peek() << '\n';
	stack.pop();
	stack.display();

	Queue queue;
	cout << "\nQUEUE\n";
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.display();
	cout << "Front: " << queue.front() << '\n';
	cout << "Rear: " << queue.rear() << '\n';
	queue.dequeue();
	queue.display();

	return 0;
}

