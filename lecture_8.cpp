#include <iostream>
#include <math.h>
using namespace std;

// power function:
int power(int x, int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    cout << "The power of x^y is: " << ans << endl;
}

// Checking even or odd function:
bool isEven(int num2)
{
    if (num2 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Factorial program using function:
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// Taking out the nCr value using function:
int nCr(int n, int r)
{
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    int ans = num / den;
    return ans;
}

// Prime or not using the function:
bool isPrime(int num3)
{
    for (int i = 2; i < num3; i++)
    {
        if (num3 % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Finding the AP value using the function:
int ap_fun(int num4)
{
    int ans = (3 * num4 + 7);
    return ans;
}

// Pass-by-value function:
void dummy(int num5)
{
    num5++;
    cout << "The Copy value of num5 is: " << num5 << endl;
}

int main()
{
    // Switch case:
    char ch = '1';
    int num = 2;

    switch (ch)
    {
    case 1:
        cout << "First Case." << endl;
        break;

    case '1':
        cout << "Second Case." << endl;
        // Nested Switch Case:
        switch (num)
        {
        case 2:
            cout << "Value of num is " << num << endl;
            break;

        default:
            break;
        }
        break;

    default:
        cout << "It is a Default Case." << endl;
        break;
    }

    // Calculator Using the Switch Case:
    int a, b;
    char operation;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the operation you want to perform: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "The addition of a and b is: " << a + b << endl;
        break;

    case '-':
        cout << "The Subtraction of a and b is: " << a - b << endl;
        break;

    case '*':
        cout << "The Multiplication of a and b is: " << a * b << endl;
        break;

    case '/':
        cout << "The Division of a and b is: " << a / b << endl;
        break;

    case '%':
        cout << "The modulo of a and b is: " << a % b << endl;
        break;

    default:
        cout << "Enter the valid operation." << endl;
        break;
    }

    // Checking the notes in the amount:
    int amount;
    cout << "Enter the amount value: ";
    cin >> amount;

    if (amount >= 200)
    {
        int ans = amount / 200;
        amount = amount - (200 * ans);
        cout << "Notes of 200 is: " << ans << endl;
    }
    if (amount >= 100)
    {
        int ans = amount / 100;
        amount = amount - (100 * ans);
        cout << "Notes of 100 is: " << ans << endl;
    }
    if (amount >= 50)
    {
        int ans = amount / 50;
        amount = amount - (50 * ans);
        cout << "Notes of 50 is: " << ans << endl;
    }
    if (amount >= 20)
    {
        int ans = amount / 20;
        amount = amount - (20 * ans);
        cout << "Notes of 20 is: " << ans << endl;
    }
    if (amount >= 10)
    {
        int ans = amount / 10;
        amount = amount - (10 * ans);
        cout << "Notes of 10 is: " << ans << endl;
    }
    if (amount >= 2)
    {
        int ans = amount / 2;
        amount = amount - (2 * ans);
        cout << "Notes of 2 is: " << ans << endl;
    }
    if (amount >= 1)
    {
        int ans = amount / 1;
        amount = amount - (1 * ans);
        cout << "Notes of 1 is: " << ans << endl;
    }

    // calculating the power using the Functions:
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    power(x, y); //function of power

    // checking the even or odd using the function:
    int num2;
    cout << "Enter the num2 value: ";
    cin >> num2;

    if (isEven(num2))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }

    // Taking out the nCr values:
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    int ans = nCr(n, r);
    cout<<"The value of nCr is: "<<ans<<endl;

    // Checking prime or not using the function:
    int num3;
    cout << "Enter the num3 value: ";
    cin >> num3;

    if (isPrime(num3))
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }

    // Finding the AP values using function:
    int num4;
    cout<<"Enter the num4 value: ";
    cin>>num4;

    int ans1 = ap_fun(num4);
    cout<<"The series of AP is: "<<ans1<<endl;

    // Pass-by-Value:
    int num5;
    cout << "Enter the value of num5: ";
    cin >> num5;
    dummy(num5);
    cout << "The original value of num5 is: " << num5 << endl;

}