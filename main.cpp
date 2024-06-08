#include "MyVector.cpp"
#include "Utils.cpp"


// Remaking common libraries
int main() {
    MyVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);

    Utils::print("MyVector ");
    for (int i = 0; i < vec.getSize(); i++) {
        Utils::printInt(vec[i]);
        Utils::print(" ");
    }
}