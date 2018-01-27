#include<iostream>
using namespace std;

class array
{
public:
    //function declared for inserting the elements
    void insert_initial();
    //function to insert new
    void insert_new();
    //function declared for deleting the elements
    void del();
    //function to search any element
    void search() ;
private:
    int* storing_array;   //the array to store elements
    int flag = 0, size, no_of_elements , value ,pos , element;      //other required variables
};
void array::insert_initial()      //function defined
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

    cout<<"\n\nThe given array is : \n\n";
    for(int i = 0; i < no_of_elements ; i++)
    {
        cout<<storing_array[i]<<"  ";
    }

    //do-while for the insertion of new elements
    //delete []storing_array; //(if activated the delete function is not properly working )
}

void array::del()
{
    cout<<"\nWhich position do you want to delete ?\n";
    cin>>pos;


   if(!storing_array)
   {
       cout<<"\nNothing to delete. First insert some elements.\n";
   }
    else
   {
       if(pos <= no_of_elements)
       {
           //loop to delete the element

           for(int i = (pos-1); i < no_of_elements; i++)
           {
               storing_array[i] = storing_array[i+1];
           }
           no_of_elements-=1;
       }
       else
       {
           cout<<"\n\n!!!!!!!!Provide a position lesser than the number of elements . !!!!!!\n\n";
       }
   }

    //loop to display array after delete
    cout<<"\n\nArray after deleted element : \n\n";
    for(int i = 0; i < no_of_elements; i++)
    {
        cout<<storing_array[i]<<"  ";
    }
}

//function defined for linear search
void array::search()
{
    cout<<"\n\nEnter the element you want to search : \n";
    cin>>element;
    for(int i = 0; i < no_of_elements; i++)
    {
        if(storing_array[i] == element)
        {
            cout<<"\n\n The given element is present at index number "<<i<<" and at position "<<(i+1)<<endl<<endl;
            //removed 'break' just in case if the element is present at more than 1 places then loop does not terminate;
        }
    }
}

void array::insert_new()  //function to insert a new element in the same array
{
    do
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
    }while(flag == 1);           //end of do-while

    cout<<"\nThe newly formed array is :\n";

    //loop to display the new array after insertion
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
        cout<<"\n\n\nSelect one of the following\n\n1. Insert In A New Array\n\n2. Insert In Same Array\n\n3. Search (Linear)\n\n4. Delete From An Array\n(You should first enter the elements and then you can delete)\n\n5. Exit\n";
        cin>>n;
        switch (n)
        {
            case 1 : ob.insert_initial();
                break;
            case 2 : ob.insert_new();
                break;
            case 3 : ob.search();
                break;
            case 4 : ob.del();
                break;
            case 5 : exit(0);
            default : cout<<"\nPlease provide a valid input . \n";
        }
    }while(true);

    //return 0;
}