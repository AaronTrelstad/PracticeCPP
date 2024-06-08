//
// Remake std::vector
//

typedef unsigned long size_t;

// Allows for generic types
template<typename T>
class MyVector {
private:
    T* data;  // Pointer to the data array
    size_t size;
    size_t capacity;

    void resize(size_t newCapacity) {
        T* newData = new T[newCapacity];  // Allocate new data
        for (size_t i = 0; i < size; i++) {
            newData[i] = data[i];  // Copy in new data
        }
        delete[] data;  // Deallocate old array
        data = newData;
        capacity = newCapacity;
    }
public:
    // Constructor using member initialization
    MyVector() : data(nullptr), size(0), capacity(0) {}

    // Destructor to deallocate dynamic memory
    ~MyVector() {
        delete[] data;
    }

    void push_back(const T& value) {
        if (size == capacity) {
            resize(capacity == 0 ? 1 : capacity * 2);
        }
        data[size++] = value;
    }

    // Const function throws compile error if you change a data member
    size_t getSize() const {
        return size;
    }

    // Non-const subscript operator, allows modification
    T& operator[](size_t index) {
        return data[index];
    }

    // const subscript operator, doesn't allow modification
    const T& operator[](size_t index) const {
        return data[index];
    }
};




