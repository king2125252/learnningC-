#include <iostream>

using namespace std;

int main()
{
    //(1,5)(2,4)(2,6)(3,3)(3,7)(4,2)(4,8)(5,1)(5,9)
    int n ;
    cin >>n;
    for(int x = 1,y = n, z = n; x < n * 2; x++ ){

        if(y == z && x == y){
            cout << "*" << endl;
            y--,z++,x=0;
            continue;
        }else if( x == y){
            cout << "*";
            continue;
        }else if(x == z){
            cout << "*" << endl;
             y--,z++,x=0;
             continue;
        }
        cout << " ";
    }
    return 0;
}
