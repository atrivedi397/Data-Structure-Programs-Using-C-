#include <iostream>
using namespace std;

class  bubble
{
public:

    //data members and member functions
    void input(int length);
    void display();
    void bubble_sort(bubble object);
    int* array, size;
};

//definition for input function
void bubble::input(int length)
{
    size = length;
    array = new int[size];
    cout<<"\n\nEnter the elements :\n";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
}

//definition for displaying
void bubble::display()
{
    cout<<"\n\nThe formed array is as follows :\n";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<"  ";
    }
}

//definition for sorting(Bubble)
void bubble::bubble_sort(bubble object)
{
    //algorithm for bubble sort
    int pass = 0, temp;      // pass used as a counter variable
    while(pass < size)
    {
        for(int i = 0; i < (size-1); i++)    //(size-1) is done here because of the last element won't have next element to compare.
        {
            if(object.array[i] > object.array[i+1])
            {
                temp = object.array[i];            /* swapping the elements if previous element is less than the next one*/
                object.array[i] =object.array[i+1];
                object.array[i+1] = temp;
                display();
                cout<<endl;
            }
        }
        pass++;
        cout<<"\nPass = "<<pass;
    }

    cout<<endl<<endl<<endl<<"The sorted array is as follows : "<<endl;
    display();            //displaying the final array
}

int main()
{
    cout<<"\n\nThis is a program for bubble sort the array. \n\n";
    int size_of_array, m;
    bubble* object;    //pointer to class created
    bool flag = true;
    do
    {
        cout << "\nHow many elements do you want to enter in array ?\n";
        cin >> size_of_array;
        object = new bubble[size_of_array];
        object->input(size_of_array);
        object->display();
        object->bubble_sort(*object);  //passing "pointer to class object"
        cout<<"\n\nDo want to sort again\n1. Yes \n2. No\n";
        cin>>m;
        if(m == 1)
        {
            flag;
        }
        else
        {
            flag = false;
        }

    }while(flag);

    return 0;
}//
// Created by Abhishek Trivedi on 03-Feb-18.
//

