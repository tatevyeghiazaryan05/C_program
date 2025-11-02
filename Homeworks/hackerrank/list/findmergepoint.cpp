int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* current1 = head1;

    while (current1 != nullptr) {
        SinglyLinkedListNode* current2 = head2;

        while (current2 != nullptr) {
            if (current1 == current2) {
                return current1->data;
            }
            current2 = current2->next;
        }

        current1 = current1->next;
    }

    return -1;
}
