#include <iostream>

using namespace std; 

#pragma once

template<class T>class Node
{
private:
	T value;

public:
	Node<T>*prev_node;
	Node<T>*next_node;
	Node(){}
	Node(T val, Node<T>*prev, Node<T>*next) {
		value = val;
		prev_node = prev;
		next_node = next;
	}
	T getValue()
	{
		return value;
	}
};
