// Queue.cpp

template <typename T>
Queue<T>::Queue(void)
    : arrQ(Array<T>())
    , frontQ(0)
    , backQ(0)
    , sizeQ(10)
{

}
template <typename T>
Queue<T>::Queue(const Queue & queue)
    : arrQ(Array<T>(queue.sizeQ))
    , frontQ(queue.sizeQ)
    , backQ(queue.sizeQ)
    , sizeQ(queue.sizeQ)
{

}
template <typename T>
Queue<T>::~Queue(void)
{
    delete [] arrQ;
}
template <typename T>
void Queue<T>::enqueue(T element)
{
    // COMMENT This method is not implemented.
    // RESPONSE implemented by resizing the QUEUE by twice the size if we are the size of the queue
    if(backQ + 1 == arrQ.size()) {
	//resize
	arrQ.resize(arrQ.size() * 2); 	// we double the size of a array whenever we full
	arrQ[sizeQ--] = elements;
}	
    arrQ.set(backQ + 1, element) 
    backQ++;
    sizeQ++;
}
template <typename T>
void Queue<T>::dequeue(void)
{
    // COMMENT This method is not implemented.
	
    // response Implemented the method by checking if the size of the queue is 0, if not then frontQ++
    if(sizeQ == 0) {
        throw empty_exception("Error");
    } else {
        frontQ++;
    }
}
template <typename T>
void Queue<T>::clear(void)
{
    delete arrQ;
    frontQ = 0;
    backQ = 0;
    sizeQ = 0;
}

