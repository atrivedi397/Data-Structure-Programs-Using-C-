#include<iostream>
using namespace std;

class array
{
public:
    //member functions and data members
    //for creation
    void create();

    //for display
    void display();

    //for merging
    void merge(array , array );

    //data members
    int* arr, size;
};

//definition for create function
void array::create()
{
    cout<<"\nWhat is the size of the array\n";
    cin>>size;
    arr = new int[size];
    cout<<"\nPlease enter the values in ascending order only.\n\n";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

//definition for display function
void array::display()
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

//definition for merging
void array::merge(array ob1 , array ob2)
{
    //third object created for storing the merged array
    array ob3;
    ob3.size = ob1.size + ob2.size;

    ob3.arr = new int[ob3.size];

    //counters for first , second , third arrays
    int i = 0, j = 0, k = 0;
    //end1, end2 for last index numbers of the array
    int end1 = (ob1.size-1);
    int end2 = (ob2.size-1);

    //algorithm for merging
    while( i <= end1 && j <= end2)
    {
        if( ob1.arr[i] < ob2.arr[j])
        {
            ob3.arr[k] = ob1.arr[i];
            i++;
            k++;
        }
        else
        {
            if( ob1.arr[i] == ob2.arr[j])
            {
                ob3.arr[k] = ob1.arr[i];
                k++;
                i++;
                j++;
                //if the numbers are equal then size is reduced by 1
                ob3.size--;
            }
            else
            {
                //if( ob1.arr[i] > ob2.arr[j])
                ob3.arr[k] = ob2.arr[j];
                k++;
                j++;
            }
        }
    }

    //entry for the last element if first array is larger
    if( i >= ob1.size)
    {
        while(j <= ob2.size)
        {
            ob3.arr[k] = ob2.arr[j];
            k++;
            j++;
        }
    }//end of do-while

    //entry for the last element if second array is larger
    if( j >= ob2.size)
    {
        while(i <= ob1.size)
        {
            ob3.arr[k] = ob1.arr[i];
            k++;
            i++;
        }
    }

    //displaying the final merged array
    cout<<"\n\nThe merged array is as follows :\n\n";
    ob3.display();
}


int main()
{
    int answer;
    cout<<"\nThis Is A Program For Merging Two Sorted(Ascending) Arrays. \n";

    do
    {
        array ob1, ob2, ob3;
        ob1.create();
        ob1.display();
        ob2.create();
        ob2.display();
        ob3.merge(ob1, ob2);

        cout<<"\n\nDo you want to run it again ?\n1. Yes\n2. No\n";
        cin>>answer;
    }while(answer == 1);

    return 0;
}

//
// Created by Abhishek Trivedi on 04-Feb-18.
//