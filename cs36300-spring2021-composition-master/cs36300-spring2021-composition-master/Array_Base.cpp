#include <stdexcept>
#include "Array_Base.h"

template <typename T>
Array_Base<T>::Array_Base(void)

// initialize the cur size and the max size_t and data
	: data_(nullptr) 
	, cur_size_(0) 
	, max_size_(0)
	
{
}
//2
template <typename T>
Array_Base<T>::Array_Base(size_t length)


// initialize both cuz size and max size will have a length amount
	: data_(new T[length])
	, cur_size_(length)
	, max_size_(length)
{
}
//3
template <typename T>
Array_Base<T>::Array_Base(size_t length, T fill)


	: data_(new T[length]) 
	, cur_size_(length)
	, max_size_(length)
    

{
	Array_Base::fill(fill);
}

//4
template <typename T>
Array_Base<T>::Array_Base(const Array_Base & array_base)		//			**

// create a copy of the array_base
	: data_(new T[array_base.cur_size_])
	, cur_size_(array_base.cur_size_) 
	, max_size_(array_base.max_size_)
{	
	for(int i = 0; i < cur_size_;i++) {
	//	data_[i] = cur_size_[i];
		data_[i] = array_base[i];
	}
	
}
//5
template <typename T>
Array_Base<T>::~Array_Base(void)
{
// destructor just a delete [] 
	delete [] data_;
    
}
//6	**
template <typename T>
const Array_Base<T> & Array_Base<T>::operator = (const Array_Base & rhs)	//			**
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
template <typename T>
T & Array_Base<T>::operator [] (size_t index)
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
const T & Array_Base<T>::operator [] (size_t index) const
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
T Array_Base<T>::get(size_t index) const
{
	if ( index >= cur_size_) {
		throw std::out_of_range("out of range");
	}
	else {
		return data_[index];
	}
}
//10
template <typename T>
void Array_Base<T>::set(size_t index, T value)
{
	if (index >= cur_size_) {
		throw std::out_of_range("out of range");
	} else {
		data_[index] = value;
	}
}
//12
template <typename T>
int Array_Base<T>::find(T value) const  //                     **
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
int Array_Base<T>::find(T val, size_t start) const       // **
{

	int count = 0;
	if (start =< cur_size_) {
		for (int i = start; start <= max_size_; i++) {
			if (val == data_[i]) {
				count++;
			}
		}
	}
	else {
		throw std::out_of_range("Out of range\n");
	}
	return count;
}
//14	**
template <typename T>
bool Array_Base<T>::operator == (const Array_Base & rhs) const
{
	
		for (int i = 0;  i < cur_size_; i++) {
			if (data_[i] != rhs.data_[i]) {
				return false;
			}
			
		}
}
//15
template <typename T>
bool Array_Base<T>::operator != (const Array_Base & rhs) const
{


	return !(*this == rhs);

}
//16
template <typename T>
void Array_Base<T>::fill(T value)      //          **
{
	// this is where we iterate through the array_base and we will the contents into data_[i]
	for (int i = 0; i < cur_size_; i++) {
		this->data_[i] = value;
	}
}
