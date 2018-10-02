/**
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order and each of their nodes contain a single digit. 
Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
**/

/**  Your Solution goes here   **/

node* add_data(linked_list1,linked_list2){
  
  node* new_node = (node*)malloc(sizeof(node));
  n1=linked_list1->head;
  n2=linked_list2->head;
  n3=new_node;
  while(n1!=NULL){
    n3->data=n1->data+n2->data;
    n1=n1->next;
    n2=n2->next;
    node* next_node = (node*)malloc(sizeof(node));
    n3->next=next_node;
    n3=n3->next;
  }
  return new_node;
}
   
