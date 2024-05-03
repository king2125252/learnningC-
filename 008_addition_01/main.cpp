#include <iostream>

using namespace std;

int main()
{
    /*
      數列:
      求和
                 s1 = 1 + 2 + 3 + ..... + n
                 s2 = 1 + 2^2 + 3^2 + .... + n ^2
                 s3 = 1 + 1/2 + 1/3 + .... + 1/n
                 s4 = 1 - 1/2 + 1/3 - ....... (+-)1/n
                     f( i ) = j * 1/ i
                 sn = sum( f ( i ) )
                     i = 0 ~ t

    */

    double s;
    int n;
    cout << "Please input a positive integer : ";
    cin >> n;
    cout << "s1 = 1 + 2 + 3 + ..... + n" << endl;
    for( int i = 1; i <= n; i++)
    {
        s = s + i;

        if(i == n)
        {
            cout << i << " = ";
        }
        else
        {
            cout << i << " + ";
        }
    }
    cout << s << endl << endl;

    cout << "s2 = 1 + 2^2 + 3^2 + .... + n ^2" << endl;
    s = 0;
    for( int i = 1;  i <= n;  i++ )
    {
        s = s + i * i;

        if(i == 1)
        {
            cout << i << " + ";
        }
        else if(i == n)
        {
            cout << i << "^2  = ";
        }
        else
        {
            cout << i << "^2  + ";
        }
    }
    cout << s <<endl << endl;

    cout << "s3 = 1 + 1/2 + 1/3 + .... + 1/n" << endl;
    s = 0;
    for( int i = 1;  i <= n;  i++ )
    {
        s = s + 1.0 / i ;
        if(i == 1)
        {
            cout << i << " + ";
        }
        else if(i == n)
        {
            cout << " 1/"<< i << " = ";
        }
        else
        {
            cout << " 1/"<< i << " + ";
        }
    }
    cout << s <<endl << endl;


    cout << "s4 = 1 - 1/2 + 1/3 - ....... (+-)1/n" << endl;
    s = 0;
    for( int i = 1, j = 1;  i <= n;  i++, j = 0 - j)
    {
        s = s + j * (1.0 / i) ;
        if( i == 1)
        {
            cout << i;
        }
        else if( j > 0)
        {
            cout << " + " << "1/" << i;
        }
        else if ( j < 0)
        {
            cout << " - " << "1/" << i;
        }

    }
    cout << " = " << s <<endl << endl;

    return 0;
}
