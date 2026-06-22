#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node{10,nullptr};
    head->next = new Node{20,nullptr};
    head->next->next = new Node{30,nullptr};

    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while(curr != nullptr)
    {
        next = curr->next;//this whole loop important
        curr->next = prev;//get the idea of the next node and point to the previous node

        prev = curr;//move the previous node to the current node
        curr = next;//moving the current node to the next node
    }

    head = prev;

    Node* temp = head;

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}