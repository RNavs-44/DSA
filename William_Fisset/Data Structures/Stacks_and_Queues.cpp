#include <list>
#include <stdexcept>

template <typename T>
class ListStack {
    private:
        std::list <T> list; // Doubly Linked list
    public:
        ListStack() {}
        ListStack(T first_elem) {  
            push(first_elem);
        }
        int size() {
            return list.size();
        }
        bool isEmpty() {
            return size()==0;
        }
        void push(T elem) {
            list.push_back(elem);
        }
        T peek() {
            if (isEmpty()) { throw std::invalid_argument("Empty Stack"); }
            return list.back();
        }
        T pop() {
            if (isEmpty()) { throw std::invalid_argument("Empty Stack"); }
            T elem = peek();
            list.pop_back();
            return elem;
        }
};

template <typename T>
class ListQueue {
    private:
        std::list <T> list; // Doubly Linked list
    public:
        ListQueue() {}
        ListQueue(T first_elem) {  
            offer(first_elem);
        }
        int size() {
            return list.size();
        }
        bool isEmpty() {
            return size()==0;
        }
        void offer(T elem) {
            list.push_back(elem);
        }
        T peek() {
            if (isEmpty()) { throw std::invalid_argument("Empty Queue"); }
            return list.front();
        }
        T poll() {
            if (isEmpty()) { throw std::invalid_argument("Empty Queue"); }
            T elem = peek();
            list.pop_front();
            return elem;
        }
};

int main() {
    return 0;
}