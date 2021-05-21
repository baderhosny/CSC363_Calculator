// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
#include <iostream>
template <typename T>
Stack <T>::Stack(void)
    : data_(nullptr)
    , stack_size_(0)
    , topElement(-1)
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
    : data_(new T[stack.stack_size_])
    , stack_size_(stack_size_)
    , topElement(topElement)
{

}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
    delete [] data_;
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
//	arrayStack.set(stack_size_, element);
    if (topElement >= this->stack_size_ - 1) {
	throw std::out_of_range("Error");
    } else {
        this->topElement++;
    }
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
    if(!(this->is_empty())) {
	topElement--;
    } else {
	throw std::out_of_range("error");
    }

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
    int i;
    topElement = rhs.topElement;
    stack_size_ = rhs.stack_size_;
    data_ = new char[stack_size_];
	for (i=0; i<stack_size_; i++) {
		data_[i] = rhs.data_[i];
	}
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    delete [] data_;
    data_ = nullptr;
}
