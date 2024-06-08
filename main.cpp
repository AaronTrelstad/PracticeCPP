#include "MyVector.cpp"
#include "Utils.cpp"

/**
 * Making common things in C++
 * Data Structures: Vector, Single and Double Linked List, Binary Trees, Heaps
 * Memory: Smart Pointers, Garbage Collector
 * @return
 */
int main() {
    MyVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.pop_back();
    vec.push_back(30);

    Utils::print("MyVector\n");
    for (int i = 0; i < vec.getSize(); i++) {
        Utils::printInt(vec[i]);
        Utils::print(" ");
    }
}