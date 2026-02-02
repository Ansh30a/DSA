#include <iostream>
#include <stack>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


Node* addTwoLists(Node* head1, Node* head2) {
    stack<int> s1, s2;


    while (head1 != NULL) {
        s1.push(head1->data);
        head1 = head1->next;
    }


    while (head2 != NULL) {
        s2.push(head2->data);
        head2 = head2->next;
    }


    int carry = 0;
    Node* result = NULL;


    while (!s1.empty() || !s2.empty() || carry) {
        int sum = carry;


        if (!s1.empty()) {
            sum += s1.top();
            s1.pop();
        }


        if (!s2.empty()) {
            sum += s2.top();
            s2.pop();
        }


        carry = sum / 10;
        int digit = sum % 10;


        Node* newNode = new Node(digit);
        newNode->next = result;
        result = newNode;
    }


    while (result != NULL && result->data == 0 && result->next != NULL) {
        result = result->next;
    }


    return result;
}


void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    Node* head1 = new Node(0);
    head1->next = new Node(0);
    head1->next->next = new Node(6);

    Node* head2 = new Node(1);
    head2->next = new Node(0);
    head2->next->next = new Node(2);

    Node* result = addTwoLists(head1, head2);
    printList(result);

    return 0;
}
