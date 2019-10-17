#include "List.h"
template<class T>
List<T>::List()
{
	capacity = 10;
	array = new T[capacity];
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

	if (count >= capacity)
	{
		capacity * 2;
	}
	// T array    =     element that is size * 2
	T* temp = new T[capacity * 2];

	for (int i = 0; i < count; i++)
	{
		temp[i] = array[i];
	}
	temp[count] = value;
	delete[] array;
	array = temp;
	count++;
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
T List<T>::Search(int index)
{
	return array[index];
}

template<class T>
void List<T>::Sort()
{
	bool finished = false;
	int index = 0;
	while (!finished)
	{
		for (int i = 0; i < count - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				auto temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
			}
		}
		index++;
	}
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