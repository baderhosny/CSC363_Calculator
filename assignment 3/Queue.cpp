// Queue.cpp

template <typename T>
Queue<T>::Queue (void)
    : arrQ(Array<T>())
    , frontQ(0)
    , backQ(0)
    , sizeQ(10)
{

}
template <typename T>
Queue<T>::Queue (const Queue & queue)
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
void Queue<T>::enqueue (T element)
{
    //              **
    //arrQ(sizeQ);
    backQ++;
}
template <typename T>
void Queue<T>::dequeue (void)
{
    if(frontQ > backQ) {
        frontQ++;
    } else {
        throw empty_exception("Error");
    }
}
template <typename T>
void Queue<T>::clear (void)
{
    delete arrQ;
    frontQ = 0;
    backQ = 0;
    sizeQ = 0;
}

