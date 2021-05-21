// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.


#include <stdexcept>
#include "Array.h"
//1
template <typename T>
Array<T>::Array(void)
	: Array_Base<T>()
	, max_size_(10)
{
}
//2
template <typename T>
Array<T>::Array(size_t length)
    // Call to Array_Base initialzing constructor.
    : Array_Base<T>(length)
{
}
//3
template <typename T>
Array <T>::Array (size_t length, T fill)
    : Array_Base <T>(length, fill)

{
}

//4
template <typename T>
Array<T>::Array(const Array & array)
    // Call to the copy constructor.
    : Array_Base <T>::Array_Base(array)
{
}
	

//5
template <typename T>
Array<T>::~Array (void)
{
// destructor just a delete [] 
	delete [] data_;

}
//6
template <typename T>
const Array<T> & Array<T>::operator = (const Array & rhs)	//			**
{

	
	if(rhs.cur_size_ > max_size_) {
		int i;
		data_ = new char[cur_size_];
		for (i=0; i<cur_size_; i++) {
			data_[i] = rhs[i];
		}
		
		delete [] data_;
	}
	else {
		if (rhs.cur_size_ < cur_size_) {
			cur_size_ = rhs.cur_size_;
	}
	}
			
}
//7
/*
template <typename T>
T & Array<T>::operator [] (size_t index)
{
// we have character in an index, if it is outside of that area then throw an error
	if (index <= cur_size_) {
	//	int Arrsize;
	//	sizeof(cur_size_)/sizeof(Arrsize[0]);
		return data_[index];		// return the index of which the char is in

	} else {
		throw std::out_of_range("Sorry you hit a roadblock\n");
	}
	
}
//8 return the value of the unmodified 
template <typename T>
const T & Array<T>::operator [] (size_t index) const
{
	if (index <= cur_size_) {
		return data_[index];
	}
	else {
		throw std::out_of_range("Sorry you hit a roadblock\n");
	}

	
}
//9
template <typename T>
T Array<T>::get (size_t index) const
{
	if ( index > cur_size_) {
		throw std::out_of_range("out of range");
	}
	else {
		return data_[index];
	}
}*//*
//10
template <typename T>
void Array<T>::set (size_t index, T value)
{
	if (index > cur_size_) {
		throw std::out_of_range("out of range");
	} else {
		data_[index] = value;
	}
}*/
//11
template <typename T>
void Array <T>::resize(size_t new_size)
{

	if (new_size > max_size_) {

	
    int i;
		T * temp = data_;
		data_ = new T[new_size];
		for (i = 0; i < max_size_; i++) {
			data_[i]=temp[i] ;
		}
		
		delete [] temp;
	}
	else {

		if(new_size < cur_size_) {
			cur_size_ = new_size;
		
		} 
	}	
}
/*
//12
template <typename T>
int Array<T>::find (T ch) const  //                     **
{
	
	bool found = false;
	int count = 0;		// this so it counts how many the character occured
	while (!found) {
		for (int i = 0; i < cur_size_; i++) {
			if (ch == data_[i]) {
				found = true;
				count++;
			}
			else {
				return -1;
			}
		}
	}
	
}
//13
template <typename T>
int Array<T>::find (T ch, size_t start) const       // **
{

	int count = 0;
	if (start < cur_size_) {
		for (int i = start; start <= max_size_; i++) {
			if (ch == data_[i]) {
				count++;
			}
		}
	}
	else {
		throw std::out_of_range("Out of range\n");
	}
}
//14
template <typename T>
bool Array<T>::operator == (const Array & rhs) const
{
	
		for (int i = 0;  i < cur_size_; i++) {
			if (data_[i] != rhs.data_[i]) {
				return false;
			}
			
		}
}
//15
template <typename T>
bool Array<T>::operator != (const Array & rhs) const
{


	return !(*this == rhs);

}
//16
template <typename T>
void Array<T>::fill (T ch)      //          **
{
	// this is where we iterate through the array and we will the contents into data_[i]
	for (int i = 0; i < cur_size_; i++) {
		ch = data_[i];
	}
}
*/
//17
/*template <typename T>
void Array<T>::shrink (void)
{
 
	int i;
    if (cur_size_ > max_size_) {
		T * temp = data_;
		data_ = new T[cur_size_];
		for (i = 0; i < cur_size_; i++) {
			temp[i] = data_[i];
		}
		

		delete [] temp;		// delete to avoid memory leaks

	}
	 	
 
}
//18
void Array::reverse (void)
{
    // COMMENT The resize method should only increase the size of the allocation if
    // the new size is larger than the current memory allocation for the array. If resized,
    // you need to preserve the old data. Otherwise, you can just update cur_size_ to
    // reflect the new size.

	// RESPONSE changed the logic of my method, explenation is down there too
    
    // this took little bit of time ( had to grab a paper and draw ahaha )
	// i have 3 variables, a temporarirly variable, firstcharacter and last character variables
	// i set the firstChar to the first element of the array
	// i set the lastChar to the last element of the array
	// i then make temp = the value of the firstChar
	// after that i set the firstCar to be the value of the last char 
	// lastly the lastchar will have the value of temp ( and temp has the value of the first char)
	// please tell me this logic is correct :(
	// NOTE: i thought you only needed the first and last element, until i was like "but why the only first and last, and then here i am scratching everything and going back to square 1 :(
	/*
	char lastChar;
	char firstChar;
	for (int i = 0; i < cur_size_; i++) {
		cur_size_[cur_size_.size() - 1] = lastChar;
		cur_size_[0] = firstChar;
		temp = firstChar;
		firstChar = lastChar;
		lastChar = temp;
	*
	char temp;
	bool keepGoing = false;
	while(!keepGoing) {
		int j;
		int i;
			// setting i to 0 will make it start at the first index
		for(i = 0;i < j;i++) {
			for(j < cur_size_; j = cur_size_;j--) {
				
				//this will eventually flip as the first element keeps
				// running until it reaches the last element
				// last element going towards the first element(decrease)
				
				temp = data_[i];
				data_[i] = data_[j];
				data_[j] = temp;
		}
		keepGoing = true;
	}
  }
}
//19
Array Array::slice (size_t begin) const
{
    // COMMENT This method is not implemented.

	// RESPONSE method has been emplemented by returning a shallow copy
		return Array::slice(begin,cur_size_);		// returns a shallow copy from begin to cur_size_
    //
	// 	slice(begin);   
}
//20
Array Array::slice (size_t begin, size_t end) const
{
    // COMMENT This method is not implemented.
	// RESPOND method been implemented as the following


	Array a2(end - begin);	// this creates an array ( new array object ) of size end - begin
	int j = 0;
	for (int i = begin; i < end;i++) {
		a2.set(j,data_[i]);
		j++;
	}
	return a2;
	
	
}
*/
