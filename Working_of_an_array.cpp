#include<iostream>
using namespace std;

class array
{
public:
    //function declared for inserting the elements
    void insert();
    //function declared for deleting the elements
    void del();
private:
    int* storing_array;   //the array to store elemnts
    int flag = 0, size, no_of_elements , value ,pos , element;      //other required variables
};
void array::insert()      //function defined
{
    cout<<"\nWhat is the size of your array ?\n";
    cin>>size;

    //start of the do-while loop to insert the elements

    do
    {
        cout<<"\nHow many elements do you want to insert ?\n";
        cin>>no_of_elements;
        storing_array = new int[size];              //dynamically allocate storing_array
        if(size >= no_of_elements)
        {
            cout<<"\nEnter your numbers :\n";
            for(int i = 0;i < no_of_elements ; i++ )
            {
                cin>>storing_array[i];
            }
            flag = 1;
        }
        else
        {
            cout<<"\n!!!Overflow Insufficient size of the array provided. \n";
            flag = 0;
        }
    }while(flag != 1);            //end of do-while

    //loop for showing what has been inserted initially

    cout<<"\nThe given array is : \n";
    for(int i = 0; i < no_of_elements ; i++)
    {
        cout<<storing_array[i]<<"  ";
    }

    //do-while for the insertion of new elements

    do
    {
        cout<<"\nDo you want to insert more elements\n\n1. Yes\n\n2. No\n ";
        cin>>value;
        if (value == 1)
        {
            cout<<"\nAt which position do you want to insert the new element ?\n";
            cin>>pos;
            cout<<"\nProvide the element you want to enter : \n";
            cin>>element;
            if(pos <= no_of_elements)
            {
                for(int i = no_of_elements; i > (pos-1) ; i--)
                {
                    storing_array[i] = storing_array[i-1];
                }
                storing_array[pos-1] = element;
                no_of_elements+=1;
                flag = 0;
            }
            else
            {
                cout<<"\n!!!!Array is a continuous block of memory, so can't insert at position untill its previous space is filled.\n";
                flag = 1;
            }
        }
        else
        {
            flag = 1;
        }
    }while(flag == 1);           //end of do-while

    cout<<"\nThe newly formed array is :\n";

    //loop to display the new array after insertion
    for(int i = 0; i < no_of_elements; i++)
    {
        cout<<storing_array[i]<<"  ";
    }
    //delete []storing_array; //(if activated the delete function is not properly working )
}

void array::del()
{
    cout<<"\nWhich position do you want to delete ?\n";
    cin>>pos;

    //loop to delete the element

   if(!storing_array)
   {
       cout<<"\nNothing to delete. First insert some elements.\n";
   }
    else
   {
       for(int i = (pos-1); i < no_of_elements; i++)
       {
           storing_array[i] = storing_array[i+1];
       }
       no_of_elements-=1;
   }

    //loop to display array after delete
    cout<<"\n\nArray after deleted element : \n\n";
    for(int i = 0; i < no_of_elements; i++)
    {
        cout<<storing_array[i]<<"  ";
    }
}

int  main()
{
    array ob;
    int n ;
    do
    {
        cout<<"\nSelect one of the following\n\n1. Insert In Array\n\n2. Delete From An Array\n\n3. Exit\n";
        cin>>n;
        switch (n)
        {
            case 1 : ob.insert();
                break;
            case 2 : ob.del();
                break;
            default: exit(0);
        }
    }while(true);

    //return 0;
}