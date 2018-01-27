#include <iostream>
using namespace std;

//class defined
class binary_array
{
public:
    //inputting unsorted array
    void input();
    //creating a (insertion) sorted array
    void sorted();
    //searching in binary way
    void binary_search();
private:
    //data members
    int* array , item , size , beg , last , mid;
};

//definition of input()
void binary_array::input()
{
    cout<<"\nWhat is the size of the array ? \n";
    cin>>size;

    array =  new int[size];   //dynamically allocate array

    cout<<"\n\nEnter the elements in any way : \n";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
        cout<<"\n";
    }

    cout<<"\n\n\nThe given array is as follows : \n\n\n";

    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<"  ";
    }
}

//definition of binary_search()
void binary_array::binary_search()
{
    beg  = 0;         //beginning variable
    last = size-1;    //last variable
    cout<<"\n\nWhich element are you looking for ? \n";
    cin>>item;
    bool flag = false;

    // loop to break the array into half for checking and comparing

    while(beg <= last)
    {
        mid = (beg + last)/2;
        if(array[mid] == item)
        {
            flag = true;
            break;      //break when element is matched
        }
        else if(array[mid] < item)
        {
            beg = mid + 1;
        }
        else if(array[mid] > item)
        {
            last = mid - 1;
        }
    }//end of while loop

    // checking if value is found or not

    if (flag)
    {
        cout << "\n\nElement found at position " << (mid + 1) << endl;
    }
    else
    {
        cout << "\nElement not found.\n\n";
    }
}

//definition of sorted (insertion sort)
void binary_array::sorted()           //ascending order
{
    for(int j = 1; j < size;  j++)    //starting from  1 to compare right with left (as done in sorting the cards)
    {
        int element = array[j];      //taking a local variable to temporarily store the value of any element picked from the unsorted array

        int i = j-1;                 //taking i = 0 , the left most index number

        while( i >= 0 && array[i] > element)
        {
            array[i+1] = array[i];
            i = i-1;
        }
        array[i+1] = element;
    }
    cout<<"\n\n\nYour array in ascending form\n\n\n";
    for(int  i = 0; i < size; i++)
    {
        cout<<array[i]<<"  ";
    }

}

// start of main()
int main()
{
    cout<<endl<<endl<<"This is a program to implement the binary search algorithm in an array.\n\n";
    binary_array ob;
    ob.input();
    ob.sorted();
    ob.binary_search();
    int n;
    bool flag;
    do
    {
        cout<<"\nDo you want to search (Binary) more ? \n\n1. Yes \n\n2. No\n\n";
        cin>>n;
        if(n == 1)
        {
            ob.binary_search();
            flag = true;
        }
        else
        {
            flag  = false;
            //exit(0);
        }
    }while(flag);
    return 0;
}
//
// Created by Abhishek Trivedi on 25-Jan-18.
//

