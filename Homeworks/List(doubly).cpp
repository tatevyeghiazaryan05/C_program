/* Doubly linked list */
#include <iostream>

class Node {
public:
    int value;
    Node* next;
    Node* prev;
    
    Node (int val) : value (val), next (nullptr), prev (nullptr) {}
    
    Node* get_next () {
        return next;
    }
    
    Node* get_prev () {
        return prev;
    }
};

class List {
private:
    Node* head;
    Node* tail;
public: 
    // constructor
    List () : head (nullptr), tail (nullptr) {}
    // destructor
    ~List () {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current -> next;
            delete current;
            current = next;
        }
    }
    // begin
    Node* begin () {
        return head;
    }
    // end
    Node* end () {
        return tail;
    }
    // insert
    void insert (Node* position, int val) {
        if (position == nullptr) { 
            push_back(val);
            return;
        }
        //creating new node
        Node* new_node = new Node (val);
        new_node -> next = position -> next;
        new_node -> prev = position;
        
        if (position -> next != nullptr) /* position-ic heto node ka? */
            position -> next -> prev = new_node; 
        else 
            tail = new_node;
        
        position -> next = new_node;
    }
    // deleting one element from the list
    void erase (Node* list) {
        if (list == nullptr) 
            return;
        if (list == head) {
            pop_front ();
            return;
        }
        if (list == tail) {
            pop_back ();
            return;
        }
        list -> prev -> next = list -> next; /* 1<->2<->3 -> 1->3 */
        list -> next -> prev = list -> prev; /* 1<-3 */
        delete list;
    }
    // adding element as a tail
    void push_back (int val) {
        Node* new_node = new Node (val);
        if (head == nullptr) {
            head = new_node;
            tail = new_node;
        } else {
            tail -> next = new_node;
            new_node -> prev = tail;
            tail = new_node;
        }
        /* no need to write new_node -> next = nullptr, because it is doing our constructor */ 
    }
    // adding element as a head
    void push_front (int val) {
        Node* new_node = new Node(val);
            
        if (head == nullptr) {
            head = new_node;
            tail = new_node;
        } else {
            new_node -> next = head;
            head -> prev = new_node;
            head = new_node;
        }
    }
    // deleting head
    void pop_front () {
        if (head == nullptr) 
            return;
        Node* temp = head; /* to not lose head's address */
        head = head -> next; /* our 2nd element is now head */
        
        if (head != nullptr) /* it means that we have any elements left */
            head -> prev = nullptr;
        else /* all elements are deleted */
            tail = nullptr;
        
        delete temp;
    }
    // deleting tail
    void pop_back () {
        if (tail == nullptr) 
            return;
        Node* temp = tail;
        tail = tail -> prev;
            
        if (tail != nullptr) 
            tail -> next = nullptr;
        else 
            head = nullptr;
            
        delete temp;
    }
    //
    void printForward () {
        Node* traverser = head;
        while (traverser != nullptr) {
            std::cout << traverser -> value << std::endl;
            traverser = traverser -> next;
        }
    }
    //
    void printBackward () {
        Node* traverser = tail;
        while (traverser != nullptr) {
            std::cout << traverser -> value << std::endl;
            traverser = traverser -> prev;
        }
    }
    //
    int get_size () {
        int size = 0;
        Node *current = head;
        while (current != nullptr) {
            size ++;
            current = current -> next;
        }
        return size;
    }
};

int main() {
    List l;

    l.push_back (10);
    l.push_back (20);
    l.push_back (30);
    std::cout << "\nPrint forward: \n";
    l.printForward ();
    std::cout << "\nPrint backward: \n";
    l.printBackward ();  

    l.push_front (5);
    std::cout << "\nAdding element of the beginning: \n";
    l.printForward();  

    Node* first = l.begin(); // after 5
    l.insert(first, 7);
    std::cout << "\nAdding element after position: \n";
    l.printForward();

    std::cout << "\nDeleting last element using position \n";
    Node* last = l.end();
    l.erase(last);
    l.printForward();

    std::cout << "\nDeleting head and tail \n";
    l.pop_front(); 
    l.pop_back();
    l.printForward();

    std::cout << "\nList size: " << l.get_size() << std::endl;

    return 0;
}
