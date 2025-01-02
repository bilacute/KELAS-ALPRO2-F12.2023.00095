#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* tambahNode(Node* head, int dataBaru) {
    Node* newNode = new Node{dataBaru, nullptr};
    if (!head) {
        return newNode;
    } else {
        Node* temp = head;
    while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}


int cariKunci(Node* head, int kunci) {
    int indeks = 0;
    Node* temp = head;
    while (temp) {
        if (temp->data == kunci) {
            return indeks;
        }
        temp = temp->next;
        indeks++;
    }
    return -1;
}


void tampilkanLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;


    head = tambahNode(head, 14);
    head = tambahNode(head, 21);
    head = tambahNode(head, 13);
    head = tambahNode(head, 30);
    head = tambahNode(head, 10);


    cout << "Linked List: ";
    tampilkanLinkedList(head);


    int kunci;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> kunci;

    int indeks = cariKunci(head, kunci);
    if (indeks != -1) {
        cout << "Kunci ditemukan pada indeks: " << indeks << endl;
    } else {
        cout << "Kunci tidak ditemukan." << endl;
    }

    return 0;
}
