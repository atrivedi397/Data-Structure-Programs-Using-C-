#include<iostream>
using namespace std;


struct Node
{
    //node definition
    int data;
    Node* next;
};


class Objects
{
    //pointers to point head and tail
    Node* head = nullptr;
    Node* tail = nullptr;
public:
    //function for operations
    void create_node(int);
    void delete_node(int);
    Node* get_head();
    Node* traverse(int);
    void display();
};

//function definition
void Objects::create_node(int element)
{
    Node* new_node; Node* temp; int ans , position;
    new_node = new Node; //new node created

    //inserting in new node
    new_node -> data = element;
    new_node -> next = nullptr;

    //making head node if list is empty
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
            //adding at beginning
            new_node->next = head;
            head = new_node;
            display();
        }
        else
        {
            if(ans == 2)
            {
                //adding at last
                tail->next = new_node;
                tail = tail->next;
                display();
            }
            else
            {
                cout<<"\n\nEnter the position:\n\n";
                cin>>position;

                //traversing to get the address of node where to add
                temp = traverse(position);

                //adding in between
                new_node->next = temp->next;
                temp->next = new_node;
                display();
            }
        }
    }
}

//display definition
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

//traversing on linked list
Node* Objects::traverse(int position)
{
    Node* temp;
    auto counter = 1;

    //get_head() for getting the head's address
    temp = get_head();

    while(counter < (position-1))
    {
        temp = temp->next;
        counter++;
    }
    return temp;
}

//definition for deletion
void Objects::delete_node(int position)
{
    Node* temp; Node* to_be_deleted;

    temp = get_head();

    if(temp == nullptr)
    {
        cout<<"\n\nNothing to delete here!!!!! First enter then try to delete.\n\n";
        return;
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

//get_head()
Node* Objects::get_head()
{
    return head;
}


//main()
int main()
{
    Objects ob1;
    int digit, answer;
    cout<<"\nThis is a program for implementing the operations of linked lists.\n";

    do
    {
        cout<<"\n\nWhat do you want to do?\n1. Create Linked List\n2. Delete Nodes\n3. Exit\n\n";
        cin>>answer;

        switch (answer)
        {
            case 1 :
            {
                {
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

                }
            }
                break;

            case 2 :
            {
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
            }

                break;

            case 3 : exit(0);

            default : cout<<"\n\nEnter a valid choice\n";
                break;
        }


    }while(answer == 1 || answer == 2 || answer == 3 );
    return 0;
}



//
// Created by Abhishek Trivedi on 14-Feb-18.
//