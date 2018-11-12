#pragma once

const int DEFAULT_CAPACITY = 10;

class ArrayException {};

class Array
{
	
public:
	int* ptr;

	int size, capacity;

	explicit Array(int startCapacity = DEFAULT_CAPACITY);
	~Array();

	Array(const Array& arr);

	Array& operator =(const Array& arr);

	int& operator [](int index);

	void insert(int index, int element);
	void insert(int element);
	void increaseCapacity(int size);
	void remove(int& index);

	int getSize() const;

 	//friend ostream& operator <<(ostream& out, const Array& arr);
};
