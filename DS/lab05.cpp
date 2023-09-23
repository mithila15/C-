#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
    int size;

public:
    LinkedList() {
        head = NULL;
        size = 0;
    }

    void InsertAtHead(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int getSize() {
        return size;
    }

    int getValue(int index) {
        if (index >= size) {
            return -1;
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    void printReverse(Node* current) {
        if (current == NULL) {
            return;
        }
        printReverse(current->next);
        cout << current->data << " ";
    }

    void printReverse() {
        printReverse(head);
    }

    void swapFirst() {
        if (size < 2) {
            return;
        }
        Node* second = head->next;
        head->next = second->next;
        second->next = head;
        head = second;
    }

    void Traverse() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << std::endl;
    }
};

int main() {
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

  cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    cout<<endl;
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}
