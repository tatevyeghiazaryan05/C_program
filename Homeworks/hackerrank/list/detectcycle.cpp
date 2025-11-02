bool has_cycle(Node* head) {
    if(head == nullptr)
        return false;
   Node* fast = head;
   Node* slow = head;
   while(fast != nullptr && fast->next != nullptr){
    fast = fast->next->next;
    slow = slow->next;
    if(fast == slow)
        return true;     
   }
   return false;
}
