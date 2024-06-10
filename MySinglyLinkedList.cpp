//
// Remake Linked List
//

typedef unsigned long size_t;

template<typename T>
class MySinglyLinkedList {
private:
    struct Node {
        T data;
        Node* next;

        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;
    size_t size;
public:
    MySinglyLinkedList() : head(nullptr), size(0) {}

    ~MySinglyLinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current -> next;
            delete current;
            current = next;
        }
    }

    void push_front(const T& value) {
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
        ++size;
    }

    void push_back(const T& value) {
        Node* newNode = new Node(value);

        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current -> next) {
                current = current -> next;
            }
            current -> next = newNode;
        }

        ++size;
    }

    void add(const T& value, int pos) {
        Node* newNode = new Node(value);

        if (pos < 0 || !head) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            while (current -> next && pos > 1) {
                current = current -> next;
                --pos;
            }

            newNode -> next = current -> next;
            current -> next = newNode;
        }
        ++size;
    }

    void pop_front() {
        if (head) {
            Node* oldHead = head;
            head = head -> next;
            delete oldHead;
            --size;
        }
    }

    void pop_back() {
        if (head) {
            Node* current = head;
            while (current -> next) {
                current = current -> next;
            }
            current -> next = nullptr;
        }
    }

    void pop(int index) {

    }

    void reverse() {

    }

};