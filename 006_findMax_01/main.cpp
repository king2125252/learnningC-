#include <iostream>

using namespace std;

int main()
{
    // 3 �� ��̤j�� �åB�C�L�X��m
   int a, b, c;
   cout << "�п�J3�Ӿ�� : ";
   cin >> a >> b >> c;

   if( a > b && a > c){ //represent a �̤j
       cout << " a �̤j �Ȭ� : " << a << endl;
   }else if ( b > a && b >c){// b �̤j
       cout << " b �̤j �Ȭ� : " << b << endl;
   }else if( c > a && c > b){ // c �̤j
       cout << " c �̤j �Ȭ� : " << c << endl;
   }else {
        cout << " 3�ӼƤ@�ˤj!!!" << c << endl;
   }

   cout << "( a , b , c ) �Ȭ� : ( " << a << ", " << b << ", " << c << " )" << endl;


    return 0;
}
