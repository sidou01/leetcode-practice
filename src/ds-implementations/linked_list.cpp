#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    ListNode(int x) : value(x), next(NULL) {}
};

class MyLinkedList {
    public:
    ListNode *head;
    int size;

    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    /** 
        Get the value of the index-th node in the linked list.
        If the index is invalid, return -1. 
    */
    int get(int index) {
       if(index < 0 || index > size - 1) { return -1; }
       ListNode* current = head;
       int i = 0;
        while(i++ != index) {
            current = current->next;
       }
       return current->value;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
       ListNode *node = new ListNode(val);
       node->next = head;
       head = node;
       size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode *node = new ListNode(val);
        ListNode *current = head;
        while(current->next != NULL) {
           current = current->next;
        }
        current->next = node;
        size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) { return; }

        ListNode *node = new ListNode(val);
        ListNode *current = head;

        int i = 0;
        while(i++ != index - 1) {
            current = current->next;
        }

        node->next = current->next;
        current->next = node; 
        size++;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index < 0 || index > size - 1) { return; }
        if(index == 0) {
            ListNode *nodeToBeDeleted = head;
            head = head->next;
            free(nodeToBeDeleted);
            size--;
        }
        else {
            ListNode *current = head;
            int i = 0;
            while(i++ != index - 1) { current = current->next; }

            ListNode *nodeToBeDeleted = current->next;
            current->next = current->next->next;
            free(nodeToBeDeleted);
            size--;
        }
    }

    void print() {
        ListNode *current = head;
        while(current->next != NULL) {
            cout << current->value << "->";
            current = current->next;
        }
        cout << current->value << '\n';
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
int main() {
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(1);
    obj->addAtHead(2);
    obj->addAtHead(3);
    obj->addAtHead(5);
    obj->addAtIndex(3, 77);
    obj->deleteAtIndex(0);
    obj->print();

    return 0;
}