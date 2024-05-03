#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "please input a number (2 ~ 26) : " << endl;
    cin >> n;
        if (n > 26 || n < 2)
        {
            cout << "please input number in range(2 ~ 26)" << endl;
            return 0;
        }
    // this is V
    cout << "this is V" << endl;
    for(int  x = 1, y = 1, z = n * 2 - 1; y != n + 1; x++)
    {
        if( x == z)
        {
            cout << "*" << endl;
            x = 0;
            y++, z--;
        }
        else if ( x == y)
        {
            cout << "*" ;
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;

    // this is W
    cout << "this is W" << endl;
    int p1 = 1,
	p2 = n * 2 - 1,
	p3 = n * 2 - 1,
	p4 = n * 4 - 3;
    for (int i = 1; p1 <= n; i++)
    {
        if(i == p1)
        {
            cout << "*";
        }
        else if (i == p2)
        {
            cout << "*";
        }
        else if (i == p3)
        {
            cout << "*";
            if( p1 == p2 && p3 == p4) break;
        }
        else if( i == p4)
        {
            cout << "*" << endl;
            p1++, p2--, p3++, p4--;
            i = 0;
        }
        else
        {
            cout << " " ;
        }
    }

    cout << endl;

    //this is M
    cout << "this is M" << endl;
    p1 = n,
    p2 = n,
    p3 = n * 3 - 2,
    p4 = n * 3 - 2;
    for (int i = 1; p1 >0; i++)
    {
        if(i == p1)
        {
            cout << "*";
        }
        else if (i == p2)
        {
            cout << "*";
        }
        else if( i == p4)
        {
            cout << "*" << endl;
            p1--, p2++, p3--,p4++;
            i = 0;
        }
        else if (i == p3)
        {
            cout << "*";
        }
        else
        {
            cout << " " ;
        }
    }
}
