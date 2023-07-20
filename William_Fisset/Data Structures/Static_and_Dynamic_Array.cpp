/*
            Static Array    Dynamic Array
Access              O(1)            O(1)
Search              O(n)            O(n)
Insertion            N/A            O(n)
Appending            N/A            O(1)
Deletion             N/A            O(n)
*/

#include <stdexcept>
#include <iostream>

template <typename T>
class DynamicArray {
    private:
        int len = 0; // Length the user thinks the array is
        int capacity = 0; // Actual size of the array
        T arr[];
    public:
        DynamicArray() { DynamicArray(16); } // Default constructor
        DynamicArray(int capacity) {
            if (capacity < 0) { throw std::invalid_argument("Illegal capacity: " + capacity); }
            this->capacity = capacity;
            arr = new T[capacity];
        }
        int size() { return len; }
        bool isEmpty() { return size()==0; }
        
        T get(int index) { return arr[index]; }
        void set(int index, T elem) { arr[index] = elem; }

        void clear() {
            for (int i = 0; i < capacity; i++) { arr[i]  = NULL; }
            len = 0;
        }

        void add(T elem) {
            if (len+1 >= capacity) { // Resize the array
                if (capacity == 0) { capacity = 1; }
                else { capacity *= 2; }
                T new_arr[] = new T[capacity];
                for (int i = 0; i < len; i++) {
                    new_arr[i] = arr[i];
                }
                arr = new_arr;
            }
            arr[len++] = elem;
        }

        T removeAt(int rm_index){
            if (rm_index >= len || rm_index < 0) { /* Throw out of bounds exception */ }
            T data = arr[rm_index];
            T new_arr[] = new T[len-1];
            for (int i = 0, j = 0; i < len; i++, j++) {
                if (i == rm_index) { j--; }
                else { new_arr[j] = arr[i]; }
            }
            arr = new_arr;
            capacity = --len;
            return data;
        }

        bool remove(T elem) {
            for (int i = 0; i < len; i++) {
                if (arr[i] == elem) {
                    removeAt(i);
                    return true;
                }
            }
            return false;
        }

        int indexOf(T elem) {
            for (int i = 0; i < len; i++){
                if (arr[i] == elem) {
                    return i;
                }
            }
            return -1;
        }

        bool contains(T elem) {
            return indexOf(elem) != -1;
        }
};

int main() {
    DynamicArray<int> myarr (10);
    for (int i = 0; i < 15; i++) {
        myarr.add(i);
    }
    std::cout << myarr.size();
    for (int i = 0; i < myarr.size(); i++) {
        std::cout << myarr.indexOf(i) << " ";
    }
    return 1;
}