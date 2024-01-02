#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

using namespace std;

template <class T>
class Array {

	template <class V>
	friend ostream& operator<<(ostream&, const Array<V>&);

	public:

		//constructor
		Array();
				
		//destructor
		~Array();
		
		//other
		// T& add(const T&);
		// T& remove(const T&);
		const T& get(int index) const;
		int getSize() const;
		bool isFull() const;
		void clear();

		ostream& print(ostream& output);

		// T& operator=(const T& t);
		T& operator+=(const T& t);
		T& operator-=(const T& t);
		T& operator[](int index);
		T& operator[](int index) const;

		// T& operator-();
		// operator+()
	
	private:
		int numElements;
		T* elements;
	
};

template <class T>
Array<T>::Array(){
	elements = new T[MAX_ARR];
	numElements = 0;
}

template <class T>
Array<T>::~Array(){
	delete [] elements;
}

template <class T>
int Array<T>::getSize() const{
	return numElements;
}

template <class T>
bool Array<T>::isFull() const {
	return numElements >= MAX_ARR;
}

template <class T>
const T& Array<T>::get(int index) const{
	if (index < 0 || index >= numElements) {
		cerr<<"Array index out of bounds"<<endl;
		exit(1);
	}
	return elements[index];
}
template <class T>
void Array<T>::clear(){
	for (int i=0; i<numElements; i++){
		delete elements[i];
		numElements--;
	}
}

template <class T>
T& Array<T>::operator+=(const T& t){
	// return (*this).add(t);
	if (numElements >= MAX_ARR)  return elements[numElements];
  	elements[numElements++] = t;
	return elements[numElements];

}

template <class T>
T& Array<T>::operator-=(const T& t){
	// return (*this).remove(t);

	int index = 0;
	while (index < numElements){
		if (t == elements[index]){
			--numElements;
			break;
		}
		++index;
	}

	T removed = elements[index];

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
	return removed;
}

template <class T>
T& Array<T>::operator[](int index) {
  if (index < 0 || index >=numElements){
    cout<< "ERROR: invalid index"<<endl;
    exit(1);
  }
  return elements[index];
}

template <class T>
T& Array<T>::operator[](int index) const{
  if (index < 0 || index >=numElements){
    cout<< "ERROR: invalid index"<<endl;
    exit(1);
  } 
  return elements[index];
}

template <class T>
ostream& operator<<(ostream& output, const Array<T>& arr){
	output << endl;
  	for (int i=0; i<arr.getSize(); ++i){
    	output << arr.elements[i];
	}
 	return output;
}
// template <class T>
// T& operator=(const Array<T>& arr){
// 	arr
//  	return *this;
// }


// template <class T>
// ostream& operator<<(ostream& output,  Array<T> arr)
// {
// 	arr.print(output);
// 	return output;
  
// }






#endif