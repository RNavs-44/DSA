/*
            Singly Linked     Doubly Linked 
Search               O(1)              O(1)
Insert (head)        O(n)              O(n)
Insert (tail)        O(1)              O(1)
Remove (head)        O(n)              O(1)
Remove (tail)        O(n)              O(1)
Remove (middle)      O(n)              O(n)
*/

#include <stdexcept>

template <typename T>
class DoublyLinkedList {
    private:
        template <typename U>
        class Node {
            public:
                T data;
                Node* prev, next;
                Node (T data, Node* prev, Node* next)
                    : this->data(data), this->prev = prev, this->next = next { }
        };

        int len = 0;
        Node <T>* head = nullptr;
        Node <T>* tail = nullptr;

        T remove(Node <T> *node) {
            if (node->prev == nullptr) { return removeFirst(); }
            if (node->next == nullptr) { return removeLast(); }

            node->next->prev = node->prev;
            node->prev->next = node->next;

            T data = node->data;

            node->data = nullptr;
            node = node->prev = node->next = nullptr;
            size--;

            return data;
        }
        
    public:
        void clear() {
            Node <T>* trav = head;
            while (trav != nullptr) {
                Node <T>* next = trav->next;
                trav->prev = trav->next = nullptr;
                trav->data = nullptr;
                trav = next;
            }
            head = tail = trav = nullptr;
            size = 0;
        }
        int size() { return this->len; }

        bool isEmpty() { return size() == 0; }

        void add(const T &elem) {
            addLast(elem);
        }

        void addFirst(const T &elem) {
            if (isEmpty()) { head = tail = new Node <T>( elem, nullptr, nullptr ); }
            else {
                head->prev = new Node <T>( elem, nullptr, head );
                head = head->prev;
            }
            len++;
        }

        void addLast(const T &elem) {
            if (isEmpty()) { head = tail = new Node ( elem, nullptr, nullptr ); }
            else {
                tail->next = new Node <T> ( elem, tail, nullptr );
                tail = tail->next;
            }
            len++;
        }

        void addAt(int index, const T &data) {
            if (index < 0 || index > size) { throw std::invalid_argument("Invalid Index") }
            if (index == 0) { 
                addFirst(data); 
                return;
            }
            if (index == size) { 
                addLast(data); 
                return; 
            }
            Node<T>* temp = head;
            for (int i = 0; i < index; i++) {
                temp = temp->next;
            }
            
        }

        T peekFirst() {
            if (isEmpty()) { throw std::runtime_error("Empty list"); }
            return head->data;
        }

        T peekLast() {
            if (isEmpty()) { throw std::runtime_error("Empty list"); }
        }

        T removeFirst() {
            if (isEmpty()) { throw std::runtime_error("Empty list"); }
            T data = head->data;
            head = head->next;
            len--;

            if (isEmpty()) { tail = nullptr; }
            else { head->prev = nullptr; }

            return data;
        }

        T removeLast() {
            if (isEmpty()) { throw std::runtime_error("Empty list"); }
            T data = tail->data;
            tail = tail->prev;
            len--;

            if (isEmpty()) { head = nullptr; }
            else { tail->next = nullptr; }

            return data;
        }

        T removeAt(const int index) {
            if (index < 0 || index > size) { throw std::invalid_argument("Invalid Index"); }

            if (index < size/2) {
                for (int i = 0, Node <T>* trav = head; i != index; i++) {
                    trav = trav->next;
                }
            }
            else {
                for (int i = size-1, Node <T>* trav = tail; i != index; i--) {
                    trav = trav->prev;
                }
            }
            return remove(trav);
        }

        T remove(const T &obj) {
            for (Node <T>* trav = head; trav!= nullptr; trav=trav->next) {
                if (obj == trav->data) {
                    remove(trav);
                    return true;
                }
            }
            return false;
        }

        int indexOf(const T &obj) {
            for (Node <T>* trav = head, int index = 0; trav!= nullptr; trav=trav->next, index++) {
                if (obj == trav->data) {
                    return index;
                }
            }
            return -1;
        }

        bool contains(const T &obj) {
            return indexOf(obj) != -1;
        }
};