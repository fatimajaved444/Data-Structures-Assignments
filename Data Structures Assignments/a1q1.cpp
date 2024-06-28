//#include <iostream>
//using namespace std;
//class node 
//{
//public:
//    int val;
//    node* next;
//    node(int x) {
//        val = x;
//        next = nullptr;
//    }
//};
//
//void insertatend(node*& head, int val) 
//{
//    node* n = new node(val);
//    if (head == nullptr)
//    {
//        head = n;
//    }
//    else
//    {
//        node* current = head;
//        while (current->next != nullptr)
//        {
//            current = current->next;
//        }
//        current->next = n;
//    }
//}
//
//void rearrange(node* head, int k) {
//    if (head == nullptr || k <= 0) 
//    {
//        cout << " empty list " << endl;
//        return;
//    }
//
//    int count = 0;
//    node* current = head;
//    node* ptr = nullptr;
//
//    while (current != nullptr) 
//    {
//        count++;
//        if (count % k == 1)
//        {
//            ptr = current;
//            cout << "[";
//        }
//        cout << current->val;
//        if (count % k == 0 || current->next == nullptr) 
//        {
//            cout << "]";
//            if (current->next != nullptr)
//                cout << " -> ";
//        }
//        else 
//        {
//            cout << " -> ";
//        }
//        current = current->next;
//    }
//
//    cout << endl;
//}
//
//
//void print(node* head) {
//    node* current = head;
//    while (current != nullptr) {
//        cout << current->val;
//        if (current->next != nullptr)
//            cout << " -> ";
//        current = current->next;
//    }
//    cout << endl;
//}
//
//int main() {
//
//    node* head = nullptr;
//    insertatend(head, 1);
//    insertatend(head, 2);
//    insertatend(head, 3);
//    insertatend(head, 4);
//    insertatend(head, 5);
//    insertatend(head, 6);
//    insertatend(head, 7);
//    insertatend(head, 8);
//    insertatend(head, 9);
//
//    int k;
//    cout << "enter the size of groups k: ";
//    cin >> k;
//
//    cout << "original linked list: ";
//    print(head);
//
//    cout << "output: ";
//    rearrange(head, k);
//
//    return 0;
//}