/* One linked list */
#include <iostream>

class Node {
public:
    int Value;
    Node* Next;
};

class List {
public:
    void printList (Node* n) {
        while (n != nullptr) {
            std::cout << n -> Value << std::endl;
            n = n -> Next;
        }
    }

    void insertAtTheFront (Node** head, int newValue) {
        Node* newNode = new Node ();
        newNode -> Value = newValue;
        newNode -> Next = *head;
        *head = newNode;
    }

    void insertAtTheEnd (Node** head, int newValue) {
        Node* newNode = new Node ();
        newNode -> Value = newValue;
        newNode -> Next = nullptr;

        if (*head == nullptr) {
            *head = newNode;
            return;
        }

        Node* last = *head;
        while (last -> Next != nullptr) {
            last = last -> Next;
        }
        last -> Next = newNode;
    }

    void insertAfter (Node* previous, int newValue) {
        if (previous == nullptr) {
            std::cout << "Previous cannot be null" << std::endl;
            return;
        }

        Node* newNode = new Node ();
        newNode -> Value = newValue;
        newNode -> Next = previous -> Next;
        previous -> Next = newNode;
    }
};

int main () {
    Node* head = new Node ();
    Node* second = new Node ();
    Node* third = new Node ();

    head -> Value = 1;
    head -> Next = second;
    second -> Value = 2;
    second -> Next = third;
    third -> Value = 3;
    third -> Next = nullptr;

    List myList;
    myList.insertAfter (head, 12);
    myList.insertAtTheFront (&head, -1);
    myList.insertAtTheEnd (&head, 4);

    std::cout << "List: \n";
    myList.printList (head);

    return 0;
}
