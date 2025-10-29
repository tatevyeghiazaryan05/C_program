SinglyLinkedListNode* insertNodeAtPosition (SinglyLinkedListNode* llist, int data, int position)
{
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode (data);

    if (position == 0) {
        new_node -> next = llist;
        return new_node;
    }
    SinglyLinkedListNode* temp = llist;
    int index = 0;
    while (index < position - 1 && temp != nullptr) {
        temp = temp -> next;
        index ++;
    }

    new_node -> next = temp -> next;
    temp -> next = new_node;

    return llist;
}