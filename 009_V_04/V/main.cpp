#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "please input a number (0 ~ 26) : " << endl;
    cin >> n;
    for(int  x = 1, y = 1, z = n * 2 - 1; y != n + 1; x++) {
             if (n > 26){
            cout << "your input number over 26" << endl;
            break;
        }

        if( x == z){
            cout << "*" << endl;
            x = 0;
            y++, z--;
        }else if ( x == y){
            cout << "*" ;
        }else{
            cout << " ";
        }
    }
}
