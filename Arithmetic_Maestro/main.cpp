#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

//Square root function
void square_root()
{
    cout<<"Enter the number: ";
    float n;
    cin>>n;
    cout<<"Square root of the number "<<n<<" is : "<<sqrt(n);
}

//Cube root function
void cube_root()
{
    cout<<"Enter the number :";
    float n;
    cin>>n;
    cout<<"Square root of the number "<<n<<" is : "<<cbrt(n);
}

//Greatest Common Divisor function
void gcd_op()
{
    label1:
        cout<<"\nEnter the total numbers :";
        int n;
        cin>>n;

    if(n<=0)
    {
        cout<<"Enter valid input!!";
        goto label1;
    }
    else
    {
        int arr[n];
        label2:
            cout<<"Enter the numbers :";
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                cout<<"Invalid Input: Negative Number"<<endl;
                goto label2;
            }
        }

        int gcd_no= gcd(arr[0],arr[1]);
        for(int i=2;i<n;i++)
        {
            gcd_no=gcd(gcd_no,arr[i]);
        }
        cout<<"The gcd of the given numbers are: "<<gcd_no;
    }

}

//Least Common Multiple function
void lcm_op()
{
    label1:
        cout<<"\nEnter the total number:";
        int n;
        cin>>n;

    if(n<=0)
    {
        cout<<"Enter Valid Input"<<endl;
        goto label1;
    }
    else
    {
        int arr[n];
        label2:
            cout<<"Enter the numbers :";
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                cout<<"Invalid Input: Negative Number"<<endl;
                goto label2;
            }
        }

        int lcm_no= lcm(arr[0],arr[1]);
        for(int i=2;i<n;i++)
        {
            lcm_no= lcm(lcm_no,arr[i]);
        }
        cout<<"The lcm of the given numbers are: "<<lcm_no;
    }

}

//Logarithmic function
void find_log()
{
    label1:
        cout<<"Enter the base of log:";
        int base;
        cin>>base;
    if(base<0)
    {
        cout<<"Enter positive value!!"<<endl;
        goto label1;
    }
    label2:
        cout<<"Enter the number:";
        int number;
        cin>>number;
    if(number<0)
    {
       cout<<"Enter positive value"<<endl;
       goto label2;
    }
    cout<<"Log of "<<number<<" base "<<base<<" is "<<(log(number)/log(base));
}

//Exponential function
void exp_function()
{
    cout<<"Enter the number:";
    int number;
    cin>>number;
    cout<<"The value of e^("<<number<<") is: "<<exp(number);
}

//Trigonometric values
void trig_func()
{
    cout<<"**The value it prints will be in decimal**"<<endl;
    cout<<"Choose from the following options: "<<endl;
    cout<<"\t 1. Sin function"<<endl;
    cout<<"\t 2. Cos function"<<endl;
    cout<<"\t 3. Tan function"<<endl;
    cout<<"\t 4. Cosec function"<<endl;
    cout<<"\t 5. Sec function"<<endl;
    cout<<"\t 6. Cot function"<<endl;
    cout<<endl;

    int option;
    label1:
        cin>>option;

        float number;
        float number_factor;
        if(option<7)
        {
            cout<<"Enter the degree:";
            cin>>number;
            float factor=180/number;
            number_factor=M_PI/factor;
        }

    switch (option)
    {
        case 1:
            cout<<"Sin of: "<<number<<" is "<<sin(number_factor);
            break;
        case 2:
            cout<<"Cos of "<<number<<" is "<<cos(number_factor);
            break;
        case 3:
            cout<<"Tan of "<<number<<" is "<<tan(number_factor);
            break;
        case 4:
            cout<<"Cosec of "<<number<<" is "<<1/(sin(number_factor));
            break;
        case 5:
            cout<<"Sec of "<<number<<" is "<<1/(cos(number_factor));
            break;
        case 6:
            cout<<"Cot of "<<number<<" is "<<1/(tan(number_factor));
            break;
        default:
            cout<<"Choose the correct option!"<<endl;
            goto label1;
    }
}

void factorial()
{
    cout<<"** Supports factorial up to 65 **"<<endl;
    cout<<"Enter the number:";
    int number;
    cin>>number;
    int n=number;

    unsigned long long product=1;
    while(number>0)
    {
        product*=number;
        number--;
    }

    cout<<"Factorial of "<<n<<" is "<<product<<endl;
}

void conversion()
{
    int number,option;

    label1:
        cout<<"Choose from the following options:"<<endl;
        cout<<"\t 1.Decimal to Binary"<<endl;
        cout<<"\t 2.Decimal to Octal"<<endl;
        cout<<"\t 3.Decimal to Hexadecimal"<<endl;

        cin>>option;
    if(option>3 || option<1)
    {
        cout<<"Choose Valid Option!!"<<endl;
        goto label1;
    }

    cout<<"Enter the number:";
    cin>>number;
    int n=number;
    string str; //for binary conversion
    switch (option)
    {
        case 1:
            while(number)
            {
                if(number&1)str+='1';
                else str+='0';
                number>>=1;
            }
            cout<<"Binary Number of "<<n<<" is ";
            for(int i=str.size()-1;i>=0;i--)
                cout<<str[i];
            break;
        case 2:
            cout<<"Octal number of "<<n<<" is "<<oct<<number;
            break;
        case 3:
            cout<<"Hexadecimal number of "<<n<<" is "<<hex<<number;
            break;
        default:
            cout<<"Choose the correct option!"<<endl;
            goto label1;
    }
}

void rng()
{
    label1:
    cout<<"Enter the starting number:";
    int start;
    cin>>start;

    cout<<"Enter the last number:";
    int last;
    cin>>last;

    if(start>last)
    {
        cout<<"Invalid input: start is greater than last"<<endl;
        goto label1;
    }


    cout<<"How many random number you need?";
    int n;
    cin>>n;

    cout<<"The random numbers are: ";
    for(int i=0;i<n;i++)
    {
        cout<<(rand()%(last-start+1))+start<<" ";
    }

}


int main() {

    int option;

   do{
       cout<<endl<<endl;
       cout<<"--------------------Arithmetic Maestro--------------------";
       cout<<endl<<endl;

       cout<<"Choose from the following operations:"<<endl;
       cout<<"\t 1. Square Root"<<endl;
       cout<<"\t 2. Cube Root"<<endl;
       cout<<"\t 3. Greatest Common Divisor"<<endl;
       cout<<"\t 4. Least Common Multiple"<<endl;
       cout<<"\t 5. Logarithmic Functions"<<endl;
       cout<<"\t 6. Exponential Functions"<<endl;
       cout<<"\t 7. Trigonometric Functions"<<endl;
       cout<<"\t 8. Factorial"<<endl;
       cout<<"\t 9. Binary,Octal and Hexadecimal Conversion"<<endl;
       cout<<"\t 10.Random Number Generator"<<endl;

       cin>>option;

       switch (option) {
           case 1:
               square_root();
               break;
           case 2:
               cube_root();
               break;
           case 3:
               gcd_op();
               break;
           case 4:
               lcm_op();
               break;
           case 5:
               find_log();
               break;
           case 6:
               exp_function();
               break;
           case 7:
               trig_func();
               break;
           case 8:
               factorial();
               break;
           case 9:
               conversion();
               break;
           case 10:
               rng();
               break;
           default:
               cout<<"Choose the correct option!!"<<endl;
       }
   }
   while(true);


}
