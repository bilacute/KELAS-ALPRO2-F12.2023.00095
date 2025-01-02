#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* tambahNode(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}


void cetakDanJumlahkan(Node* head) {
    Node* temp = head;
    int sum = 0;

    cout << "List 1 = ";
    while (temp != nullptr) {
        cout << "[" << temp->data << "]";
        if (temp->next != nullptr) {
            cout << "<=>";
        }
        sum += temp->data;
        temp = temp->next;
    }
    cout << endl << "SUM = " << sum << endl;
}

int main() {
    Node* head = nullptr;
    int list[] = {4, 3, 4, 60};
    int jumlah = sizeof(list) / sizeof(list[0]);

        for (int i = 0; i < jumlah; i++) {
        head = tambahNode(head, list[i]);
}

        cetakDanJumlahkan(head);

return 0;
}
