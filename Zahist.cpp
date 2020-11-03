#include <iostream>
#include <cmath>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
    float a, b, d;
    string c;
    int p = 1;
    d = 0;

    while (p = 1)
    {
        cout << "Chislo a = "; cin >> a; 
        cout << "Diya = "; cin >> c;
        cout << "Chilslo b = "; cin >> b;
        if (c == "+")
            d = a + b;
        else
         {
            if(c == "-")
                d = a - b;
                else
               
                if (c == "*")
                    d = a * b;
               
                else
                    if (c == "/")
                        d = a / b;                           
        }
        cout << "Result = " << d << endl << "Shob prodovjiti natisnit 1";
        p = 0;
        cin >> p;
    }
}