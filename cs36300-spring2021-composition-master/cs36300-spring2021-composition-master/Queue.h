#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Queue.inl"

#include <exception>
#include "Array.h"


template <typename T>
class Queue
{
    public:
    typedef T type;
    // we need a default constructor
    // copy constructor
    //
    // default constructor
    Queue(void);

    // copy constructor
    Queue(const Queue & queue);

    //deconstructor
    ~Queue(void);


    // add element to the end of the list
    void enqueue(T element);

    // removes the element at the front of the
    // the list, if there are not elments in the
    // queue, this method throws empty_exception, similar to the stack

    void dequeue(void);

    // test if the queue is empty, similar to the stack,
    // otherwise, this method returns false
    bool is_empty(void) const;

    //returns the number of elements in the queue
    size_t size(void) const;

    //removes all the elements in the queue

    void clear (void);


    private:

    Array<T> arrQ;
    size_t frontQ;  // first element
    size_t backQ;   // last element
    size_t sizeQ;   // the size

};
#endif
