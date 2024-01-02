/**
 * Vector : 
 *  - Sequence containers representing arrays that can change in size.
 *  - Use a Dynamically Allocated Memory = If a vector grows beyond capacity, Reallocate + Copy its entire content to the new memory Before Insertion can occur.
 *  - Are allocated in contiguous blocks of memory = They can be accessed via pointer arithmetic OR [Index]
 *  - Using vector::at() = Avoid undefined behavior accessing an out bounds index and can instead catch a std::out_of_range exception.
 * 
 *  Efficient : 
 *      - accessing elements at any position
 *      - adding/removing element from the ends
 * 
 *  BAD :
 *      - insertion/deletion of elements at ARBRITARY positions
 * 
 *  Complexity : grow Logarithmically
*/

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// templates functions
template<typename T>
void printVector(const vector<T>& p_vect) {
    cout << "Used : " << p_vect.size() << "/" << p_vect.capacity() << " max-size : " << p_vect.max_size() << endl;

    for (const T& t : p_vect) {
        cout << t << " ";
    }

    cout << endl;
}

int main() 
{
    // create 2 vectors
    vector<int> numbers;
    vector<string> strings {"hello", "how", "are", "you", "doing", "?"};

    numbers.push_back(100);
    numbers.push_back(200);
    numbers.push_back(32); 

    printVector(numbers);
    printVector(strings);

    // resize vectors
    strings.resize(3);
    printVector(strings);
    strings.resize(10, "XXX");
    printVector(strings);

    numbers[0] = 43;
    numbers.push_back(400);
    numbers.push_back(500);
    printVector(numbers);

    // using pointer arith
    for(int* p = &numbers[0]; p < (&numbers[0] + numbers.size()); ++p) {
        cout << *p << " ";
    }

    // bad way 
    cout << numbers[10] << endl;

    try {
         cout << numbers.at(10);
    } catch (std::out_of_range& e) {
        cout << e.what();
    }

    cout << endl;


    return 0;
}