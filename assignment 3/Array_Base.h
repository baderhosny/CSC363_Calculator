#ifndef _ARRAY_BASE_H_
#define _ARRAY_BASE_H_



#include <cstring>          // for size_t definition

template <typename T>
class Array_Base {
    public :
         typedef T type;
        // Default Constructor
        Array_Base(void);

        Array_Base(size_t length);

        // fill
        Array_Base(size_t length, T fill);

         // Copy
        Array_Base(const Array_Base & arr);

        // destructor
        ~Array_Base(void);

        // get char in given index, if not in array range then give throw exception
        T &operator[](size_t index);

        // get char in given index, if not in array range then give throw exception
        T get(size_t index) const;

        // set char at given index, if not in array range then give throw exception
        void set(size_t index, T value);

        const T &operator[](size_t index) const;

        // Locate the specified character in the array. if not retune -1
        int find(T element) const;

        // Locate specificed character at an index with a start point. If not found then return -1.
        int find(T element, size_t start) const;

        // Test for equality
        bool operator==(const Array_Base &rhs) const;

        // Test for inequality
        bool operator!=(const Array_Base &rhs) const;

        // Fill the array with content.
        void fill(T element);

       // void shrink(T element);
       // void resize();

        private:
  // Pointer to the actual data.
  char * data_;

  // Current size of the array.
  size_t cur_size_;

  // Maximum size of the array.
  size_t max_size_;



};
#include "Array_Base.cpp"
#endif
