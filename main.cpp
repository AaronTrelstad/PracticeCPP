#include "MyVector.cpp"
#include "MySinglyLinkedList.cpp"
#include "MyUtils.cpp"

/**
 * Making common things in C++
 * Data Structures: Vector, Single and Double Linked List, Stack, Queue, Binary Trees, Heaps
 * Virtual Functions: Virtual File System
 * Memory: Smart Pointers(Unique and Shared), Garbage Collector
 * @return
 */
int main() {
    MyVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.pop_back();
    vec.push_back(30);

    MyUtils::print("MyVector\n");
    for (int i = 0; i < vec.getSize(); i++) {
        MyUtils::printInt(vec[i]);
        MyUtils::print(" ");
    }
}