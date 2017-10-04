//  "Copyright (C) 2017, Koshkina Uliana"
#ifndef WORKSPACE_HOMEWORK_HOMEWORK_02_STACK_STACK_U_INCLUDE_STACK_HPP_
#define WORKSPACE_HOMEWORK_HOMEWORK_02_STACK_STACK_U_INCLUDE_STACK_HPP_

#include <iostream>
#include <exception>
using std::cout;
using std::endl;

template <typename T>
class Stack {
        T* array_;
        size_t array_size_;
        size_t count_ = 0;

 public:
        Stack() : Stack(100) {}

        explicit Stack(size_t _size):array_size_(_size), array_(new T[_size]) {}

        size_t count() const {
            return count_;
        }

        bool empty() const {
            return count();
        }

        void push(T const &item) {
            if (count_ == array_size_) {
                T* new_array_ = new T[array_size_*2];
                for (int i = 0; i < array_size_; i++) {
                    new_array_[i] = array_[i];
                }
                array_size_ = array_size_ * 2;

                delete[] array_;
                array_ = new_array_;
            }
            array_[count_++] = item;
        }


        T pop() {
            if(count_ == 0) throw runtime_error(1);
            return array_[--count_];
        }

        ~Stack() {
            delete[] array_;
        }
};

#endif  //  WORKSPACE_HOMEWORK_HOMEWORK_02_STACK_STACK_U_INCLUDE_STACK_HPP_
