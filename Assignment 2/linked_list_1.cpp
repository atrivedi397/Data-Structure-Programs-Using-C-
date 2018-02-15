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
    void delete_node(int);
    Node* gethead();
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
        cout<<"\n\nWhere do you want to add in the linked list?\n1. At Beginning\n2. At Last\n3. In Between The List\n\n";
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
                cout<<"\n\nEnter the position:\n\n";
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
    cout<<"\n\nThe newly formed linked list is :\n\n";
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
    temp = gethead();

    while(counter < (position-1))
    {
        temp = temp->next;
        counter++;
    }
    return temp;
}

void Objects::delete_node(int position)
{
    Node* temp; Node* to_be_deleted;

    temp = gethead();

    if(temp == nullptr)
    {
        cout<<"\n\nNothing to delete here!!!!!\n\n";
        exit(0);
    }

    if(position == 1)
    {
        temp = traverse(position);
        head = temp->next;
        delete temp;
    }
    else
    {
        temp = traverse(position);
        to_be_deleted = traverse((position+1));

        temp->next = to_be_deleted->next;
        delete to_be_deleted;
    }

    display();
}

Node* Objects::gethead()
{
    return head;
}


int main()
{
    Objects ob1;
    int digit, answer;

    cout<<"\n\nEnter the first number to add :\n\n";
    cin>>digit;
    ob1.create_node(digit);

    do
    {
        cout<<"\n\nDo you want to add more?\n1. Yes\n2. No\n\n";
        cin>>answer;
        if(answer == 2)
            break;
        cout<<"\n\nEnter the number to add :\n\n";
        cin>>digit;
        ob1.create_node(digit);

    }while(answer == 1);

    do
    {
        cout<<"\n\nDo you want to delete any node ?\n\n1. Yes\n2. No :\n\n";
        cin>>answer;
        if(answer == 2)
        {
            break;
        }

        cout<<"\n\nEnter the position you want to delete:\n\n";
        cin>>digit;
        ob1.delete_node(digit);

    }while(answer == 1);
    return 0;
}



//
// Created by Abhishek Trivedi on 14-Feb-18.
//

