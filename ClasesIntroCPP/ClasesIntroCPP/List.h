#pragma once
template<class T>
class List
{
private:
	T* array;
	int capacity;
	int count;
public:
	List();
	~List();
	void Add(T value);
	bool Remove(int index);
	int FindIndex(T value);
	T Search(int index);
	void Sort();
};

#include "List.tpp"
