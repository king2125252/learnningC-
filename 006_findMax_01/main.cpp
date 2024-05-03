#include <iostream>

using namespace std;

int main()
{
    // 3 计 т程 竚
   int a, b, c;
   cout << "叫块3俱计 : ";
   cin >> a >> b >> c;

   if( a > b && a > c){ //represent a 程
       cout << " a 程  : " << a << endl;
   }else if ( b > a && b >c){// b 程
       cout << " b 程  : " << b << endl;
   }else if( c > a && c > b){ // c 程
       cout << " c 程  : " << c << endl;
   }else {
        cout << " 3计妓!!!" << c << endl;
   }

   cout << "( a , b , c )  : ( " << a << ", " << b << ", " << c << " )" << endl;


    return 0;
}
