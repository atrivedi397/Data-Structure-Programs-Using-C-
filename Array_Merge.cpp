#include <iostream>
using namespace std;

class merge_array
{
public:
    //function to input the arrays
    //void input_array();
    //function to sort the array
    //int* array_sort(int* , int);
    //function to merge the array
    void array_merge();
private:
    int* array1; int* array2; int* array3;
    int beg1 = 0, beg2 = 0, size1, size2, end1, end2;
};

void merge_array::array_merge()
{
    cout<<"\n\nEnter the size of first Array : \n";
    cin>>size1;
    cout<<"\n\nEnter the size of second Array : \n";
    cin>>size2;
    array1 = new int[size1];       //dynamically allocating the memory

    array2 = new int[size2];
    cout<<"\nEnter the elements of first array :\n\n";
    for(int i = 0; i < size1; i++)
    {
        cin>>array1[i];
    }

    cout<<"\nEnter the elements of second array :\n\n";
    for(int i = 0; i < size2; i++)
    {
        cin>>array2[i];
    }

    // array1 = array_sort(array1, size1);
    // array2 = array_sort(array2, size2);



    //now that the array have been sorted (ascending) we can merge the two
    end1 = size1-1;
    end2 = size2-1;
    if(array1[end1] < array2[beg2])
    {
        for(int i = 0; i <= end1; i++)
        {
            array3[i] = array1[i];
        }
        for(int i = 0; i <= end2; i++)
        {

            array3[end1] = array2[i];
            end1++;
        }
    }
    else
    {
        if(array1[beg1] > array2[end2])
        {
            for(int i = 0; i <= end2; i++)
            {
                array3[i] = array2[i];
            }
            for(int i = 0; i <= end1; i++)
            {
                array3[end2] = array1[i];
                end2++;
            }
        }
    }

    //displaying the merged array
    cout<<"\n\nThe final merged array is :\n\n";
    for(int i = 0; i <= ((end1+end2)-2); i++)
    {
        cout<<array3[i]<<"  ";
    }
}


/*int* merge_array::array_sort(int* Array, int total)
{
    int key;
    for(int j = 1; j < total; j++)
    {
        key = Array[j];
        int i = j-1;
        while(i >= 0 && Array[i] > key)
        {
            Array[i+1] = Array[i];
            i = i-1;
        }
        Array[i+1] = key;
    }

    return Array;

}
 //Will have to work on this
*/

int main()
{
    cout<<"\nThis Is A Program To Merge Two Arrays:\n";
    bool flag = false;
    int n;
    merge_array ob;
    ob.array_merge();
    do
    {
        cout<<"\n\nDo You want to merge again ?\n\n1. Yes\n\n2. No & Exit(Press Any key Except 1)";
        cin>>n;
        if( n == 1 )
        {
            ob.array_merge();
            flag = true;
        }
        else
            exit(0);
    }while(!flag);
}
//
// Created by Abhishek Trivedi on 28-Jan-18.
//

