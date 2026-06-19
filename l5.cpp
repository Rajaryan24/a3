#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node{10,nullptr};
    Node* second = new Node{20,nullptr};
    Node* third = new Node{30,nullptr};

    head->next = second;
    second->next = third;

    third->next = second; // create loop

    Node* slow = head;
    Node* fast = head;

    bool found = false;

    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast)//if both pointers are equal then loop is found
        {
            found = true;
            break;
        }
    }

    if(found)
        cout<<"Loop Found";
    else
        cout<<"No Loop";

    return 0;
}