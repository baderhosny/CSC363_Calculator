//
// size
//
template <typename T>
inline size_t Queue<T>::size(void) const
{
    return sizeQ;
}
//
// is_empty
//
template <typename T>
inline bool Queue<T>::is_empty(void) const
{
    if(sizeQ == 0) {
        return true;
    } else {
        return false;
    }
}


