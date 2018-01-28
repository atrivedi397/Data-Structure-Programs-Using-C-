#include <iostream>
using namespace std ;

int num , j = 0 ,k =0 , n  ;

int main()
{
    int verified_num;      //variable for handling the returns of check_prime()
    int check_prime(int);  //function declaration

    cout<<"\nHow many numbers you want to check for prime ?\n";
    cin>>n;     //taking the no. of inputs

    int storing_array[n],prime_array[k],non_prime_array[j];         //arrays for storing

    cout<<"\n Enter the the numbers one by one .\n\n Please Enter The Numbers Greater Than 3 Only \n\n ";

    for(int i = 0; i < n; i++)
    {
        //storing the elements in array
        cin>>num;
        if (num != 1 && num != 2 && num != 3)
            storing_array[i] = num;
        else {
            // checking if the number provided is 1 or 2 or 3
            cout << " 1 is neither prime nor composite while 2 is the only even prime number ,3 is also prime . Please enter other than 1 , 2 , 3 .\n";
            --i;
        }
    }

    //loop to check the numbers and storing
    for(int i = 0; i < n; i++)
    {
        verified_num = check_prime(storing_array[i]);

        if (verified_num == 1)
        {
            non_prime_array[j] = storing_array[i];
            j++;
        }
        else
        {
            if(verified_num == 2)
            {
                prime_array[k] = storing_array[i];
                k++;
            }
        }
    }


    //showing the prime and non prime numbers
    cout<<"\n\n The Non Prime Numbers Are :\n";

    for(int i = 0; i < j; i++ )
    {
        cout<<non_prime_array[i]<<"\t";
    }

    cout<<"\n\n The Prime Numbers Are : \n";

    for(int i = 0; i < k; i++)
    {
        cout<<prime_array[i]<<"\t";
    }

    return 0;

}

int check_prime(int a)               // function to check prime
{
    int answer = 0;
    int half = a/2;                 // checking by dividing the number into half
    for(int i = 2; i <= half ; i++)
    {
        if((a % i) == 0)
        {
            answer = 1;
            break;                    //denotes the number is not prime
        }
    }

    if(answer == 1)
    {
        //returning for storing in non prime array
        answer = 1;
        return answer;
    }
    else
    {
        //returning for storing in prime array
        answer = 2;
        return answer;
    }
}