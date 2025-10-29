#include <iostream>
#include <cmath>
class VectorClass {
private:
    int* data;
    size_t _size;
    size_t cap;

public:
    // Constructor
    VectorClass() {
        _size = 0;
        cap = 1;
        data = new int[cap];
    }

    // Destructor
    ~VectorClass() {
        delete [] data;
    }

    void push_back(int value) {
        if (_size == cap) {
            size_t newCap;
            if (_size == 0)
                newCap = 2;
            else
                newCap = (size_t) ceil(_size * 1.6);

            int* newData = new int[newCap];

            for (size_t i = 0; i < _size; ++i)
                newData[i] = data[i];

            delete[] data;
            data = newData;
            cap = newCap;
        }
        data[_size++] = value;
    }

    void pop_back() {
        if (_size > 0)
            _size--;
    }

    int operator [] (size_t index) const {
        return data[index];
    }

    size_t size() const {
        return _size;
    }

    size_t capacity() const {
        return cap;
    }
};


int main() {
    VectorClass v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Size: " << v.size() << ", capacity: " << v.capacity() << "\n";

    v.pop_back();
    std::cout << "After pop, size: " << v.size() << ", capacity: " << v.capacity() << "\n";

    std::cout << "Elements of vector: ";
    for (size_t i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";

    return 0;
}