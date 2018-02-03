#include<iostream>
using namespace std;

class function
{
    //function declarations
public:

    //creating an array
    int* create(int* , int);

    //merging array
    void merge_array(int*, int, int*, int, int);

    //displaying array
    void display(int* , int);
};

int main()
{
    //object of class functions
    function ob1;

    //variables declaration
    int* a; int* b; int size1,size2,size3; int* ptr1; int*ptr2;
    cout<<"\n\nThis is a program for merging two arrays using pointers : \n\n Please enter elements in ascending order . \n";
    //asking for the size of first array
    cout<<"\nEnter size of first array :\n\n";
    cin>>size1;

    //calling create() to create an array no. 1
    ptr1 = ob1.create(a , size1);
    ob1.display(ptr1 , size1); //displaying first array

    //asking for the size of second array
    cout<<"\n\nEnter the size of second array :\n\n";
    cin>>size2;

    //calling create() to create an array no. 2
    ptr2 = ob1.create(b , size2);
    ob1.display(ptr2 , size2);    //displaying second array

    //maximum size of the new array8
    size3 = size1+size2;

    //calling merge_array() to merge the two arrays
    ob1.merge_array(ptr1, size1, ptr2, size2, size3);
    return 0;
}

//definition for create()
int* function :: create(int* arr , int m)
{
    arr = new int[m];
    cout<<"\nEnter the elements :\n\n";
    for(int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    return arr;
}

//definition for display()
void function :: display(int* arr , int m)
{

    cout<<"\nThe Array is: \n\n";
    for(int i = 0; i < m; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

//definition for merge_array()

//pointers to 2 arrays passed with their sizes and size 3 indicates the size of resultant array
void function :: merge_array(int* arr1, int size1, int* arr2, int size2, int size3)
{
    //new array declared
    int* arr3;
    arr3 = new int[size3];

    //algorithm for merging
    //i,j,k are counters for array 1,2,3 respectively
    int i = 0, j = 0, k = 0;

    //entry condition
    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            //if elements are equal then reducing the size of final array by 1 i.e. size3--
            if(arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                i++;
                j++;
                size3--;
            }

                //if(arr1[i] < arr2[j]) // it is obvious condition
            else
            {
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }
    }
    //end of while()

    //entry for the last element if first array is larger
    if(i >= size1)
    {
        while( j <= size2)
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    //entry for the last elements if the second array is larger
    if(j >= size2)
    {
        while( i <= size1)
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }

    //displaying the final merged array using member function display()
    cout<<"\n\n\nThe merged array is as :";
    display(arr3, size3);
}
//
// Created by Abhishek Trivedi on 28-Jan-18.
//

