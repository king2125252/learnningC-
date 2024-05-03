#include <iostream>

using namespace std;

int main()
{
    /*
        3 數交換
        3! = abc acb bac bca cab cba
    */
    int a, b, c;
    cout << "請輸入3個整數 : ";
    cin >> a >> b >> c;
cout << "( a , b , c ) 值為 : ( " << a << ", " << b << ", " << c << " )\n" << endl;
cout << "以下為 小到大排序 a b c 不變" << endl;
    if( a < b){
        if( b < c){ // a < b < c    abc
            cout << " ( " <<  a << ", " << b << ", " << c << " ) " << endl;
        }else{ // a < b;  b >= c  b最大
            if( a < c){ // a < c <b     acb
                    cout << " ( " <<  a << ", " << c << ", "  << b << " ) " << endl;
            }else{ // c <= a < b    cab
                cout << " ( " <<  c << ", " << a << ", "  << b << " ) " << endl;
            }
        }
    }else{ // a >= b
        if( a < c){// b > a > c bac
            cout << " ( " <<  b << ", " << a << ", "  << c << " ) " << endl;
        }else{ // a >=c  a>=b a最大
            if(b > c){ //   c<b<a cba
                cout << " ( " <<  c << ", " << b << ", "  << a << " ) " << endl;
            }else{ //b < c < a  bca
                cout << " ( " <<  b << ", " << c << ", "  << a << " ) " << endl;
            }
        }
    }

    cout << " a b c 值不變!\n" << endl;
    cout << "( a , b , c ) 值為 : ( " << a << ", " << b << ", " << c << " )" << endl;
    return 0;
}
