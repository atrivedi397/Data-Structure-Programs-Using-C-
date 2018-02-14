#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};


class Objects
{
    Node* head = nullptr;
    Node* tail = nullptr;
public:
    void create_node(int);
    Node* traverse(int);
    void display();
};

void Objects::create_node(int element)
{
    Node* new_node; Node* temp; int ans , position;
    new_node = new Node;

    new_node -> data = element;
    new_node -> next = nullptr;

    if(head == nullptr)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        cout<<"\n\nWhere do you want to add in the linked list?\n1. At Beginning\n2. At Last\n3. In Between The List\n";
        cin>>ans;
        if(ans == 1)
        {
            new_node->next = head;
            head = new_node;
            display();
        }
        else
        {
            if(ans == 2)
            {
                tail->next = new_node;
                tail = tail->next;
                display();
            }
            else
            {
                cout<<"\nEnter the position:\n";
                cin>>position;
                temp = traverse(position);
                new_node->next = temp->next;
                temp->next = new_node;
                display();
            }
        }
    }
}

void Objects::display()
{
    Node* temp;
    temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}

Node* Objects::traverse(int position)
{
    Node* temp;
    auto counter = 1;
    temp = head;

    while(counter < (position-1))
    {
        temp = temp->next;
        counter++;
    }
    return temp;
}


int main()
{
    Objects ob1;
    int digit, answer;

    cout<<"\nEnter the first number to add :\n";
    cin>>digit;
    ob1.create_node(digit);

    do
    {
        cout<<"\nDo you want to add more?\n1. Yes\n2. No\n";
        cin>>answer;
        if(answer == 2)
            exit(0);
        cout<<"\nEnter the number to add :\n";
        cin>>digit;
        ob1.create_node(digit);
    }while(answer == 1);
    return 0;
}



//
// Created by Abhishek Trivedi on 14-Feb-18.
//

