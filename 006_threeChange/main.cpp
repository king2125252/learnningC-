#include <iostream>

using namespace std;

int main()
{
    /*
        3 �ƥ洫
        3! = abc acb bac bca cab cba
    */
    int a, b, c;
    cout << "�п�J3�Ӿ�� : ";
    cin >> a >> b >> c;
cout << "( a , b , c ) �Ȭ� : ( " << a << ", " << b << ", " << c << " )\n" << endl;
cout << "�H�U�� �p��j�Ƨ� a b c ����" << endl;
    if( a < b){
        if( b < c){ // a < b < c    abc
            cout << " ( " <<  a << ", " << b << ", " << c << " ) " << endl;
        }else{ // a < b;  b >= c  b�̤j
            if( a < c){ // a < c <b     acb
                    cout << " ( " <<  a << ", " << c << ", "  << b << " ) " << endl;
            }else{ // c <= a < b    cab
                cout << " ( " <<  c << ", " << a << ", "  << b << " ) " << endl;
            }
        }
    }else{ // a >= b
        if( a < c){// b > a > c bac
            cout << " ( " <<  b << ", " << a << ", "  << c << " ) " << endl;
        }else{ // a >=c  a>=b a�̤j
            if(b > c){ //   c<b<a cba
                cout << " ( " <<  c << ", " << b << ", "  << a << " ) " << endl;
            }else{ //b < c < a  bca
                cout << " ( " <<  b << ", " << c << ", "  << a << " ) " << endl;
            }
        }
    }

    cout << " a b c �Ȥ���!\n" << endl;
    cout << "( a , b , c ) �Ȭ� : ( " << a << ", " << b << ", " << c << " )" << endl;
    return 0;
}
