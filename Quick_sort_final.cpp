#include<iostream>

using namespace std;

// Swapping two values.
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Partitioning the array on the basis of values at high as pivot value.
int Partition(int a[], int low, int high)
{
    int pivot, index, i;
    index = low;
    pivot = high;

    // Getting index of pivot.
    for(i=low; i < high; i++)
    {
        if(a[i] < a[pivot])
        {
            swap(&a[i], &a[index]);
            index++;
        }
    }
    // Swapping value at high and at the index obtained.
    swap(&a[pivot], &a[index]);

    return index;
}

// Random selection of pivot.
int RandomPivotPartition(int a[], int low, int high)
{
    int pvt, n, temp;
    n = rand();
    // Randomizing the pivot value in the given subpart of array.
    pvt = low + n%(high-low+1);

    // Swapping pvt value from high, so pvt value will be taken as pivot while partitioning.
    swap(&a[high], &a[pvt]);

    return Partition(a, low, high);
}

// Implementing QuickSort algorithm.
int QuickSort(int a[], int low, int high)
{
    int pindex;
    if(low < high)
    {
        // Partitioning array using randomized pivot.
        pindex = RandomPivotPartition(a, low, high);
        // Recursively implementing QuickSort.
        QuickSort(a, low, pindex-1);
        QuickSort(a, pindex+1, high);
    }
    return 0;
}

int main()
{
    int n, i,ans;
    cout<<"\nThis is the program to sort elements using quick sort algorithm :\n";

    bool flag = true;

    do
    {
        cout<<"\nEnter the number of data element to be sorted: \n\n";
        cin>>n;

        int arr[n];

        for(i = 0; i < n; i++)
        {
            cout<<"\nEnter element "<<i+1<<":  \n";
            cin>>arr[i];
            cout<<"\n";
        }

        QuickSort(arr, 0, n-1);

        // Printing the sorted data.
        cout<<"\nSorted Data : ";
        for (i = 0; i < n; i++)
        {
            cout<<arr[i]<<"  ";
        }

        cout<<"\n\nDo you want to sort again ?\n1. Yes\n2. No\n";
        cin>>ans;

        if(ans == 1)
            continue;
        else
            flag = false;
    }while(flag);

    return 0;
}
//
// Created by Abhishek Trivedi on 07-Feb-18.
//

