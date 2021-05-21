// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

// COMMENT You have many compilation errors in the code below!

/* TODO questions! 
*	check all functions with ** (dont understand what to do)
*	meaning of '/a'
*	meaning of '@param[in]'
*/

#include <stdexcept>
#include "Array.h"
//1
Array::Array (void)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.


// RESPONSE each initialization has its own line now!

    // COMMENT The allocation size should match the max size.
    // fixed the size allocation to be the same
// initialize the cur size and the max size_t and data
	: data_(nullptr) 
	, cur_size_(0) 
	, max_size_(0)
	
{
}
//2
Array::Array (size_t length)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.

// RESPONSE each initialization has its own line now

// initialize both cuz size and max size will have a length amount
	: data_(new char[length])
	, cur_size_(length)
	, max_size_(length)
{
}
//3
Array::Array (size_t length, char fill)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.


// RESPONSE each initialization has it's own line now!

	: data_(new char[length]) 
	, cur_size_(length)
	, max_size_(length)
    
    // COMMENT You need to fill the array.
    // RESPONSE fill array been implemented
{
	Array::fill(fill);
}

//4
Array::Array (const Array & array)		//			**
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.

// RESPONSE each variable has its own unique line
//
//
// each of the initialization been placed its own line

// create a copy of the array
	: data_(new char[array.cur_size_])
	, cur_size_(array.cur_size_) 
	, max_size_(array.max_size_)
{	
	for(int i = 0; i < cur_size_;i++) {
	//	data_[i] = cur_size_[i];
		data_[i] = array[i];
	}
	
}
//5
Array::~Array (void)
{
// destructor just a delete [] 
	delete [] data_;
    
    // COMMENT There is no need to reset the data_ variable since this object is no
    // longer useable after the desturctor returns.

	// RESPONSE commented out and not removed for future reference 
	// data_ = nullptr;
}
//6
const Array & Array::operator = (const Array & rhs)	//			**
{
	// COMMENT This method is not implemented.
	// RESPONSE method been impemented by using the resize method that i implemented, comparing rhs with data 
	
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
char & Array::operator [] (size_t index)
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
const char& Array::operator [] (size_t index) const
{
	if (index <= cur_size_) {
		return data_[index];
	}
	else {
		throw std::out_of_range("Sorry you hit a roadblock\n");
	}

	
}
//9
char Array::get (size_t index) const
{
	if ( index > cur_size_) {
		throw std::out_of_range("out of range");
	}
	else {
		return data_[index];
	}
}
//10
void Array::set (size_t index, char value)
{
	if (index > cur_size_) {
		throw std::out_of_range("out of range");
	} else {
		data_[index] = value;
	}
}
//11
void Array::resize (size_t new_size)
{
    // COMMENT The resize method should only increase the size of the allocation if
    // the new size is larger than the current memory allocation for the array. If resized,
    // you need to preserve the old data. Otherwise, you can just update cur_size_ to
    // reflect the new size.

	// RESPONSE if new size is bigger than cur then we need to  we create a new temp array and copy original
	// to temp and then deelting original, if the new size is less than cur size then we simply set cur size to be same as new size
	if (new_size > max_size_) {

	
    int i;
		char * temp = data_;
		data_ = new char[new_size];
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
//12
int Array::find (char ch) const
{
	// are we given a character that we need to search thro the array?		**
	// what do you mean by the meaning of "the index of the first"
	// after we find this character we count how many it occured, if it does not exist it returns -1
	// so it should be a 
	/*
	*	for (the array)
	*		if (character exists in array)
	*			then count how many it shows up in the Array
	*		else if (it doesnt exist then return -1)
	*/
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
int Array::find (char ch, size_t start) const
{
	// for this find function we can say that start searching from index 10 whatever comes after till max size
	// question is: is it always from start to the max size, or does it have to be from start to a specified end 
	// like from index 5 to index 10
	// how to think about it				**
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
bool Array::operator == (const Array & rhs) const
{
    // COMMENT You can define operator != in terms of operator ==.
	// RESPONSE using ==
    // COMMENT Check for self comparison first.
	// RESPONSE this is what i was missing, self compared, the for loop will itterate through
	// it until it finds somethings wrong then it will return false
	
		for (int i = 0;  i < cur_size_; i++) {
			if (data_[i] != rhs.data_[i]) {
				return false;
			}
			
		}
}
//15
bool Array::operator != (const Array & rhs) const
{
    // COMMENT This method is not implemented.
	// RESPONSE method has been implemented.

	return !(*this == rhs);
//			**
}
//16
void Array::fill (char ch)
{
	// this is where we iterate through the array and we will the contents into data_[i]
	for (int i = 0; i < cur_size_; i++) {
		ch = data_[i];
	}
}
//17
void Array::shrink (void)
{
    // COMMENT Purpose of the shrink method is to recover an unused
    // memory allocation. For example, if the array has allocated 10, and
    // the current size is 5, then 5 spaces us wasted. The shrink method
    // we reclaim the 5 unused spaces so the array only has an allocation
    // large enough to fits is current size (i.e., 5 in this example).

	// RESPONSE i have hopefully solved this method by saving the data into an array
	// a loop will read through the array and saves the data into the new array
	// therefore resizing the array, but will have to delete as we have created a new to prevent
	// data leaks ( memory leaks)

	int i;
    if (cur_size_ > max_size_) {
		char * temp = data_;
		data_ = new char[cur_size_];
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
	*/
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
