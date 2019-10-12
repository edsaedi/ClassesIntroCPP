#include "List.h"
template<class T>
List<T>::List()
{
	capacity = 10;
	array = array[capacity];
	count = 0;
}

template<class T>
List<T>::~List()
{
	delete[] array;
}

template<class T>
void List<T>::Add(T value)
{
	int tempSize = capacity;
	if (count >= tempSize)
	{
		tempSize * 2;
	}
	T temp[] = temp[tempSize * 2];

	for (int i = 0; i < 5; i++)
	{
		temp[i] = array[i];
	}

	array = temp;
	count++;
}

template<class T>
bool List<T>::Remove(T value)
{
	return Remove(Find(value));
}

template<class T>
bool List<T>::Remove(int index)
{
	if (index < 0)
	{
		return false;
	}

	T temp[] = temp[capacity];

	int removeIndex = 0;
	for (int i = 0; i < capacity; i++)
	{
		if (i != index)
		{
			temp[removeIndex] = array[i];
			removeIndex + 1;
		}
	}

	count--;
	return true;
}

template<class T>
int List<T>::FindIndex(T value)
{
	int index = -1;
	for (int i = 0; i < capacity; i++)
	{
		if (value == array[i])
		{
			index = i;
			break;
		}

	}
	return index;
}