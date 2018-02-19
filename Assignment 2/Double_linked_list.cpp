#include<iostream>
using  namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};


class objects
{
private:

    //members to denote head and tail
    node* head = nullptr;
    node* tail = nullptr;
public:

    //functions to be implemented
    void create_node(int);
    node* get(int); //for getting head or tail of linked list

    //traversals
    node* traverse_forward(int);
    node* traverse_backward(int);

    //deletion
    void delete_node();

    //display
    void display();
};

//definition of creation
void objects::create_node(int element)
{
    node* new_node; node* temp1; node* temp2; int ans , position;

    new_node = new node;

    //initially storing element and pointing to null
    new_node->data = element;
    new_node->prev = nullptr;
    new_node->next = nullptr;

    //storing at head if no head was there initially
    if(head == nullptr)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        cout<<"\n\nWhere do you want to add in the linked list?\n1. At Beginning\n2. At Last\n3. In Between The List\n\n";
        cin>>ans;

        switch (ans)
        {
            case 1 :
            {
                //adding at beginning
                head->prev = new_node;
                new_node->next = head;
                head = head->prev;
                display();
            }
            break;

            case 2 :
            {
                //adding at last
                tail->next = new_node;
                new_node->prev = tail;
                tail = tail->next;
                display();
            }
            break;

            case 3 :
            {
                cout<<"\nWhere do you want to insert?\n1. From Left\n2. From Right\n";
                cin>>ans;

                if(ans == 1)
                {
                    cout<<"\n\nEnter the position:\n\n";
                    cin>>position;

                    //traversing to get the address of node where to add
                    temp1 = traverse_forward(position);

                    //another pointer for linking the next node to new node
                    temp2 =  traverse_forward((position+1));

                    //adding in between
                    new_node->prev = temp1;
                    new_node->next = temp1->next;
                    temp1->next = new_node;
                    temp2->prev = new_node;
                    display();
                }
                else
                {
                    if(ans == 2)
                    {
                        cout<<"\n\nEnter the position:\n\n";
                        cin>>position;

                        //traversing to get the node where to add
                        temp1 = traverse_backward(position);

                        //second pointer for linking the next node to the new node
                        temp2 = traverse_backward((position+1));

                        //adding in between
                        new_node->prev = temp1->prev;
                        new_node->next = temp1;
                        temp1->prev = new_node;
                        temp2->next = new_node;
                        display();
                    }
                }
            }
            break;

            default :
            {
                cout<<"\nProvide a valid answer.\n";
                return;
            }
        }
    }
}


//getting head or tail
node *objects::get(int value)
{
    return value == 1 ? head : tail;
}


//traversal forward(left to right)
node *objects::traverse_forward(int position)
{
    node* temp ;
    auto counter = 1;

    temp = get(1);

    //forward traversal
    while(counter < (position-1))
    {
        temp = temp->next;
        counter++;
    }
    return temp;
}

//traversal backward(right to left)
node *objects::traverse_backward(int position)
{
    node* temp;
    auto counter = 1;

    temp = get(2);

    //backward traversal
    while(counter < (position-1))
    {
        temp = temp->prev;
        counter++;
    }
    return temp;
}

void objects::display()
{
    node* temp;

    //displaying from left to right
    temp = get(1);
    cout<<"\n\nThe newly formed list in forward way. \n";
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    //displaying from right to left
    temp = get(2);
    cout<<"\n\nThe newly formed list in backward way.\n";
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
}

void objects::delete_node()
{
    node* temp; node* to_be_deleted;
    int position, ans;
    cout<<"\nFrom where do you want to delete?\n1. From Left\n2. From Right\n";
    cin>>ans;

    switch (ans)
    {
        case 1 :
        {
            //checking if head is null or not
            temp = get(1);
            if(temp == nullptr)
            {
                cout<<"\n!!!There is nothing to delete .!!!\n";
                return;
            }
            else
            {
                cout<<"\nEnter position:\n";
                cin>>position;

                //if first node is to be deleted.
                if(position == 1)
                {
                    //checking if it is the last node left.
                   if(head->next == nullptr)
                   {
                       delete head;
                       cout<<"\nEverything is deleted.\n";
                       exit(0);
                   }
                   else
                   {
                       //otherwise stepping head by 1
                       head = temp->next;
                       head->prev = nullptr;
                       delete temp;
                       display();
                   }
                }
                else
                {
                    //deleting any node in the list from left
                    temp = traverse_forward(position);
                    to_be_deleted = traverse_forward((position+1));
                    temp->next = to_be_deleted->next;
                    to_be_deleted->next->prev = temp;
                    delete to_be_deleted;
                    display();
                }
            }
        }
        break;

        case 2 :
        {
            //checking if tail is null or not
            temp = get(2);
            if(temp == nullptr)
            {
                cout<<"\n!!!There is nothing to delete .!!!\n";
                return;
            }
            else
            {
                cout<<"\nEnter position:\n";
                cin>>position;
                if(position == 1)
                {
                    //if it is the last node left
                   if(tail->prev == nullptr)
                   {
                       delete tail;
                       cout<<"\nEverything is deleted.\n";
                       exit(0);
                   }
                   else
                   {
                       //otherwise shrinking tail by one step
                       tail = temp->prev;
                       tail->next = nullptr;
                       delete temp;
                       display();
                   }
                }
                else
                {
                    //deleting any node in between the list from right
                    temp = traverse_backward(position);
                    to_be_deleted = traverse_backward((position+1));
                    temp->prev = to_be_deleted->prev;
                    to_be_deleted->prev->next = temp;
                    delete to_be_deleted;
                    display();
                }
            }
        }
        break;

        default :
        {
            cout<<"\nEnter a valid number\n";
            return;
        }
    }
}


int main()
{
    objects ob1;
    int digit, answer;

    cout<<"\nThis is a program for implementing the operations of doubly linked lists.\n";

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
                    ob1.delete_node();
                }while(answer == 1);
            }
                break;

            case 3 : exit(0);

            default : cout<<"\n\nEnter a valid choice\n";
                break;
        }
    }while(answer == 1 || answer == 2 || answer == 3);

    return 0;
}




//
// Created by Abhishek Trivedi on 17-Feb-18.
//

