#include <iostream>
using namespace std;

// class for the table

class table
{
public:
    float temp;             //temp for storing the value of the table
    void print_table();    //function for calculating and display
};

/* 3 loops are used for formatting the output as single loop was providing the tables but in uncool manner.So 3
 loops are used for separately calculating the tables and displaying .*/


void table::print_table()      //function defined outside the class
{
    for(int i = 1; i <= 10; i++)              //loops to print table for 1 to 6
    {
        for(int j = 1; j <= 6; j++)
        {
            cout<<j<<" * "<<i<<" = "<<(temp = i*j)<<"\t";
            if(j == 6)
            {
                cout<<"\n";
            }
        }
    }

    cout<<endl;

    for(int i = 1; i <= 10; i++)                //loop for calculating table from 7 to 12
    {
        for(int j = 7; j <= 12; j++)
        {
            cout<<j<<" * "<<i<<" = "<<(temp = i*j)<<"\t";
            if(j == 12)
            {
                cout<<"\n";
            }
        }
    }


    cout<<endl;

    for(int i = 1; i <= 10; i++)                // loop for calculating table 13 to 15
    {
        for(int j = 13; j <= 15; j++)
        {
            cout<<j<<" * "<<i<<" = "<<(temp = i*j)<<"\t";
            if(j == 15)
            {
                cout<<"\n";
            }
        }
    }
}

int main()
{
    table ob;
    ob.print_table();
    return 0;
}//
// Created by Abhishek Trivedi on 23-Jan-18.
//

