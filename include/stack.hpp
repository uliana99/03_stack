//  "Copyright (C) 2017, Koshkina Uliana"
#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <stdexcept>
using std::cout;
using std::endl;


template <typename T>
class Stack {
        T* array_;
        size_t array_size_;
        size_t count_ = 0;

 public:
        Stack() noexcept : Stack(100) {}

        explicit Stack(size_t _size) noexcept : array_size_(_size), array_(new T[_size]) {}

        Stack(const Stack& oth_arr) noexcept : array_(new T[oth_arr.array_size_]), array_size_(oth_arr.array_size_), count_(oth_arr.count_) {
            *this = oth_arr;
        }

        Stack(Stack&& oth_arr) noexcept : array_(oth_arr.array_), array_size_(oth_arr.array_size_), count_(oth_arr.count_) {
            *this = oth_arr;
        }

        size_t count() const noexcept {
            return count_;
        }

        bool empty() const noexcept {
            if(count_ == 0) return false;
            return true;
        }

        void push(T const &item) noexcept {
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

        T top() const noexcept {
            return array_[count_];
        }

        void pop() noexcept {
            if(count_ == 0) throw std::logic_error("Error");
            --count_;
        }

        ~Stack() noexcept {
            delete[] array_;
        }

        Stack<T>& operator=(const Stack& oth_arr) noexcept {
            if(this != &oth_arr) {
                delete[] array_;
                count_ = oth_arr.count_;
                array_size_ = oth_arr.array_size_;
                array_ = new T[array_size_];

                for(int i = 0; i < count_; i++) {
                    array_[i] = oth_arr.array_[i];
                }
            }
            return *this;
        }

        Stack<T>& operator=(Stack&& oth_arr) noexcept {
            if(this != &oth_arr) {
                count_ = oth_arr.count_;
                array_size_ = oth_arr.array_size_;
                array_ = oth_arr.array_;

                oth_arr.count_ = 0;
                oth_arr.array_size_ = 0;
                oth_arr.array_ = nullptr;
            }
            return *this;
        }
};

#endif  /*  STACK_HPP  */
