/*
                            Complexity
Binary Heap Construction    O(n)
Polling                     O(log(n))
Peeking                     O(1)
Adding                      O(log(n))
Naive Removing              O(n)
Advanced Removing           O(log(n))
(w hash table)
Naive contains              O(n)
Contains 
(w hash table)              O(1)
*/
template <typename T>
class PQueue {
    private:
        // number of elements currently inside heap
        int heapSize = 0;

        // internal capacity of heap
        int heapCapacity = 0;

        // dynamic list to track elements inside heap
        std::vector<T> heap = null;

        /* map keeps track of possible indices particular node value is found
        in the heap, lets us have O(log(n)) removal and O(1) element contain check
        at cost of some additional space*/
        std::map<T, std::set<int>> map = new std::map
    
    public:
        // construct initially empty priority queue
        PQueue() {}

        // construct priority queue with initial capacity
        PQueue (int sz) {
            heap = new std::vector<>(sz);
        }

        PQueue (T[] elems) {
            heapSize = heapCapacity = elems.
        }
    
};

int main() {
    return 0;
}