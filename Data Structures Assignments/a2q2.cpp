//#include <iostream>
//using namespace std;
//class Node {
//public:
//    int data;
//    Node* prev;
//    Node* next;
//};
//
//bool searchInfiniteDoublyLinkedList(Node* middle, int key) {
//   
//    if (middle == nullptr) {
//        return false;
//    }
//    if (middle->data == key) {
//        return true;
//    }
//
//    if (key > middle->data) {
//        return searchInfiniteDoublyLinkedList(middle->next, key);
//    }
//    else {
//        return searchInfiniteDoublyLinkedList(middle->prev, key);
//    }
//}
//
//int main() 
//{
//    
//    Node* middle = new Node{ 9, nullptr, nullptr };
//    middle->prev = new Node{ 7, nullptr, middle };
//    middle->prev->prev = new Node{ 5, nullptr, middle->prev };
//
//    int key = 2;
//    if (searchInfiniteDoublyLinkedList(middle, key)) {
//        cout << "Key " << key << " found in the infinite doubly linked list.\n";
//    }
//    else {
//        cout << "Key " << key << " not found in the infinite doubly linked list.\n";
//    }
//
//    delete middle->prev->prev;
//    delete middle->prev;
//    delete middle;
//
//    return 0;
//}
