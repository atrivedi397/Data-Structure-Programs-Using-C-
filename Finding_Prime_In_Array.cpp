#include <iostream>

using namespace std;

int main ()
{
    int n=0,verified, counter1 =0, counter2=0;

    cout<<"\n How many numbers you want to check ?\n";
    int prime(int number);
    cin>>n;
    int num_array[n] , prime_array[n] , non_prime_array[n];
    cout<<"\n Please enter the number to check for prime \n";
    for(int i=0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<"th element.\n";
        cin>>num_array[i];
    }

   for(int i=0; i<=n; i++)
   {
      verified = prime(num_array[i]);
       if(verified == 1)
       {
            non_prime_array[i] = num_array[i];
           counter1++;
       }
       else if(verified == 2)
       {
           prime_array[i] = num_array[i];
           counter2++;
       }
   }

    cout<<"\n Prime Numbers Are \n\n";

    for (int i= 0; i<= counter2; i++)
    {
        cout<<prime_array[i]<<"\t";
    }

    cout<<"\nNon Prime Numbers Are \n\n";

    for(int i= 0;i<= counter1; i++)
    {
       cout<<non_prime_array[i]<<"\t";
    }
    return 0;
}

int prime(int number)
{
    int solution = 0, one = 1, two = 2;
    if (number == 1 )
    {
        cout<<"\n 1 is neither prime nor composite.\n";
    }
    else
    {
        int counter = number/2;
        for(int i = 2; i<= counter; i++)
        {
            if(number%i == 0)
            {
                solution =2;
            }
        }
        if( solution== 2)
        {
            cout<<"\nNot a prime\n";
            return one;
        }
        else
        {
            cout<<"\nIt Is prime\n";
            return two;
        }
    }


}
//
// Created by Abhishek Trivedi on 20-Jan-18.
//

