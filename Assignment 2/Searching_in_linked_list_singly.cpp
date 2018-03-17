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
    int search_greatest();
    int search_element(int);
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

//definition for linear search on the list
int Objects::search_element(int data)
{
    Node* temp;  int counter = 0;
    temp = get_head();

    if(temp == nullptr)
    {
        cout<<"\nThere is no data in the linked list. \n";
        return -1;
    }
    else
    {
        while(temp->next != tail->next)
        {

            if(temp->data == data)
            {
                counter++;
                return counter;
            }
            else
            {
                counter++;
                temp = temp->next;
            }
        }
    }
}

//searches the greatest element in the linked list
int Objects::search_greatest()
{

    Node* temp = get_head();
    int max = 0;

    if(temp == nullptr)
    {
        cout<<"\nThere is no data in the linked list . First create nodes and then try again.\n";
        return -1;
    }

    while(temp->next != nullptr)
    {
        max = temp->data;
        if(max < temp->next->data)
        {
            max = temp->next->data;
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return max;
}

//main()
int main()
{
    Objects ob1;
    int digit, answer = 0;
    cout<<"\nThis is a program for implementing the operations of linked lists.\n";

    do
    {
        cout<<"\n\nWhat do you want to do?\n1. Create Linked List\n2. Delete Nodes\n3. Search Elements(Linear Search)\n4. Find Greatest\n5. Exit\n\n";
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
                    if(answer == 1)
                    {
                        cout<<"\n\nEnter the position you want to delete:\n\n";
                        cin>>digit;
                        ob1.delete_node(digit);
                    }

                }while(answer == 1);
            }

                break;

            case 3 :
            {
                do
                {
                    cout<<"\n\nEnter the element to search :\n";
                    cin>>digit;

                    answer = ob1.search_element(digit);

                    if(answer == 0)
                    {
                        cout<<"\nThe element is not present in the linked list.\n";
                    }
                    else
                    {
                        if(answer != -1)
                        {
                            cout<<"\nYour element is at position "<<answer<<endl;
                        }
                        else
                        {
                            if (answer == -1)
                                break;    //as if head = null, no need to search again hence break
                        }
                    }
                    cout<<"\nDo you want to search again ? \n1. Yes\n2. No\n";

                    cin>>answer;

                    if(answer == 2)
                        break;

                }while(answer == 1);
            }
                break;

            case 4 :
            {
                int max = ob1.search_greatest();

                if(max == -1)
                {
                    break;
                }
                else
                    cout<<"\nThe greatest element in the linked list is "<<max<<endl;
            }
                break;

            case 5 : exit(0);

            default : cout<<"\n\nEnter a valid choice\n";
        }

    }while(answer);
    return 0;
}

//
// Created by atrivedi on 3/11/18.
//

