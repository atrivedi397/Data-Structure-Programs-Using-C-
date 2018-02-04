#include <iostream>
using namespace std;

class sorting
{
public:
    int* arr , size;
    void input();
    void selection_sort();
    void display();
};

void sorting::input()
{
    cout<<"\nEnter the size of the array :\n";
    cin>>size;
    arr = new int[size];
    cout<<"\nEnter the elements\n";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

void sorting::display()
{
    cout<<"\nThe array is :\n";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void sorting::selection_sort()
{
    int pos, lowest, temp;
    for(int i = 0; i < size; i++)
    {
        lowest = arr[i];
        pos = i;
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < lowest)
            {
                lowest = arr[j];
                pos = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}


int main()
{
    cout<<"\n\nThis is a program to sort array using selection sort algorithm.\n";
    sorting ob;
    int answer;

    do
    {
        ob.input();
        ob.display();
        cout<<"\n\nThe Array After Sorting Is :\n";
        ob.selection_sort();
        ob.display();
        cout<<"\n\nDo you want to sort another array ?\n1. Yes\n2. No\n";
        cin>>answer;

    }while(answer == 1);
    return 0;
}//
// Created by Abhishek Trivedi on 04-Feb-18.
//

