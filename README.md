# C-STL

Each container has several member functions that can be used to work with them.
All containers except the Adapters have ITERATORS that can be used to access their elements.

## 3 types of containers availables :

### Sequence containers    : 
    - elements are accessed by 'index'. 
    - Ordered in a strict linear sequence. 
    - Contiguous memory block (array, vector) and not for (deque, forward_list, list)

### Associative containers : 
    - elements are accessed by 'key'.
    - Order can be more loosely, optimized for searching algorithms.
    - Maps (key/value pairs), sets (unique keys), unordered_maps, unordered_sets

### Adapter  containers    : 
    - simply a new API on top of an existing containers
    - stack, queue, priority queue

