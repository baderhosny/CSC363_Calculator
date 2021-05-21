# cs36300-spring2021-assignment1

for my version that compiles ( errors commented out ) 

// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

/* TODO questions! 
*	check all functions with ** (dont understand what to do)
*	meaning of '/a'
*	meaning of '@param[in]'
*/
#include "Array.h"
//1
Array::Array (void)
{
// initialize the cur size and the max size_t and data
//	: max_size_(20) , cur_size_(0) , char * data_ = nullptr;

}
//2
Array::Array (size_t length)
{
// initialize both cuz size and max size will have a length amount
//	: max_size_(length) , cur_size_(length) , char * data_ = (new char[length]);
}
//3
Array::Array (size_t length, char fill)
{
//	: max_size_(length) , cur_size_(length) , char * data_ = (new char[length]);

}

//4
Array::Array (const Array & array)		//			**
{
// create a copy of the array
//	: max_size_(length) , cur_size_(length) , char * data_ = (new char[length]);
	
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
	data_ = nullptr;
}
//6
const Array & Array::operator = (const Array & rhs)	//			**
{
//				
//	this = rhs;
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
//		throw std::out_of_range("Sorry you hit a roadblock\n");
	}
	
}
//8 return the value of the unmodified 
const char& Array::operator [] (size_t index) const
{
	if (index <= cur_size_) {
		return data_[index];
	}
	else {
//		throw std::out_of_range("Sorry you hit a roadblock\n");
	}

	
}
//9
char Array::get (size_t index) const
{
//	if ( index > size_t) {
//		throw std::out_of_range("out of range");
//	}
//	else {
//		return data_[index];
//	}
}
//10
void Array::set (size_t index, char value)
{
//	if (index > size_t) {
//		throw std::out_of_range("out of range");
//	} else {
//		// index = value;
//	}
}
//11
void Array::resize (size_t new_size)
{
	if(new_size < cur_size_) {
		cur_size_ = new_size;
	} 
	else if (new_size > cur_size_) {	//  if new size is greater than current
		cur_size_ = new_size;
	}
	else {
		if (new_size == cur_size_) {

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
//		throw std::out_of_range("Out of range\n");
	}
}
//14
bool Array::operator == (const Array & rhs) const
{
	bool correct = false;
	while (!correct) {
//		if (Array == rhs) {
//			correct = true;
//		}
	}
		
}
//15
bool Array::operator != (const Array & rhs) const
{
//	if( rhs != )
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
 	if ( cur_size_ > max_size_) {
		for(int i = 0; i < cur_size_;i++) {
			
	}
} 
}
//18
void Array::reverse (void)
{
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
	char temp;
	char lastChar;
	char firstChar;
	for (int i = 0; i < cur_size_; i++) {
		cur_size_[cur_size_.size() - 1] = lastChar;
		cur_size_[0] = firstChar;
		temp = firstChar;
		firstChar = lastChar;
		lastChar = temp;
	*/
	bool keepGoing = false;
	while(!keepGoing) {
		int j;
		int i;
		for(i = 0;i < j;i++) {
			for(j < cur_size_; j = cur_size_;j--) {
				data_[i]=data_[j]; 	//this will eventually flip as the first element keeps
							// running until it reaches the last element
							// last element going towards the first element(decrease)
		}
		keepGoing = true;
	}
  }
}
//19
Array Array::slice (size_t begin) const
{
// 	slice(begin);   
}
//20
Array Array::slice (size_t begin, size_t end) const
{
	int result = begin - end;
	for(int i = 0; i < result;i++) {
	
	}
}
