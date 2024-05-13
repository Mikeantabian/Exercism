// #include "circular_buffer.h"
// #include <cstddef>
// #include <memory>
// #include <stdexcept>

// namespace circular_buffer {

//     // //constructor
//     // template<typename T>
//     // circular_buffer<T>::circular_buffer(size_t size) : 
//     //     buf(std::unique_ptr<T[]>(new T[size])), maxSize(size)
//     // {

//     // }

//     // template<typename T>
//     // void circular_buffer<T>::clear()
//     // {
// 	//     std::lock_guard<std::mutex> lock(mutex);
// 	//     head = tail;
// 	//     full = false;
//     // }

//     // template<typename T>
//     // bool circular_buffer<T>::empty() const
//     // {     
// 	//     //if head and tail are equal, we are empty
// 	//     return (!full && (head == tail));
//     // }

//     // template<typename T>
//     // bool circular_buffer<T>::isFull() const
//     // {
// 	//     //If tail is ahead the head by 1, we are full
// 	//     return full;
//     // }

//     // template<typename T>
//     // size_t circular_buffer<T>::capacity() const
//     // {
// 	//     return maxSize;
//     // }

//     // template<typename T>
//     // size_t circular_buffer<T>::size() const
//     // {
// 	//     size_t size = maxSize;

// 	//     if(!full)
// 	//     {
// 	// 	    if(head >= tail)
// 	// 	    {
// 	// 		    size = head - tail;
// 	// 	    }
// 	// 	    else
// 	// 	    {
// 	// 		    size = maxSize + head - tail;
// 	// 	    }
// 	//     }

// 	//     return size;
//     // }

//     // template<typename T>
//     // T circular_buffer<T>::read() {
//     //     //std::lock_guard<std::mutex> lock(mutex);

// 	//     if(empty())
// 	//     {
// 	// 	    throw std::domain_error("empty buffer");
// 	//     }

// 	//     //Read data and advance the tail (we now have a free space)
// 	//     auto val = buf[tail];
// 	//     full = false;
// 	//     tail = (tail + 1) % maxSize;

// 	//     return val;
//     // }

//     // template<typename T>
//     // void circular_buffer<T>::write(T item){
//     //     std::lock_guard<std::mutex> lock(mutex);

// 	//     buf[head] = item;

// 	//     if(full)
// 	//     {
// 	// 	    tail = (tail + 1) % maxSize;
// 	//     }

// 	//     head = (head + 1) % maxSize;

// 	//     full = head == tail;
//     // }
// }  // namespace circular_buffer


#include "circular_buffer.h"

namespace circular_buffer {

}  // namespace circular_buffer