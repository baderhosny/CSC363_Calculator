// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack(void)
    : data_(nullptr)
    , stack_size_(0)
    , topElement(-1)
    , top_(0)
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
    , top_(stack.top_)
{

}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
 //   delete [] data_;
}

//
// push
//
template <typename T>
void Stack <T>::push(T element)
{
	top_ = element;
    if (stack_size_ == stack_array.size()) {
        stack_array.resize(stack_array.size()+1);
    } else {
        stack_size_++;
    //    stack_size_[topElement] = element;
    }
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
    if(this->is_empty()) {
        throw empty_exception("stack is empty");
    } else {
	stack_size_--;
	}

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
    topElement = rhs.topElement;
    stack_size_ = rhs.stack_size_;
    data_ = new char[stack_size_];
	for (int i=0; i<stack_size_; i++) {
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
