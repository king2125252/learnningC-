#include <iostream>

using namespace std;

void mySwap1(int x, int y);
void mySwap2(int& x, int& y);


int main()
{
    int i = 10;
    int j = 20;

    cout << "mySwap before (i , j ) : (  " << i << ", " << j << " ) " << endl;
    mySwap1(i, j);
    cout << "mySwap after (i , j ) : (  " << i << ", " << j << " ) " << endl;

    cout << endl<<endl;


    cout << "mySwap2 before (i , j ) : (  " << i << ", " << j << " ) " << endl;
    mySwap2(i, j);
    cout << "mySwap2 after (i , j ) : (  " << i << ", " << j << " ) " << endl;
    return 0;
}

void mySwap1(int x , int y ){
    cout << "<<<<<<<<in mySwap1 before (x , y ) : (  " << x << ", " << y << " ) " << endl;
    int t = x;
    x = y;
    y  = t;
    cout << "<<<<<<<<in  mySwap1 after (x , y) : (  " << x << ", " << y << " ) " << endl;
    return;
}

void mySwap2(int& x , int& y ){
    // alias :別名
    //int& = i 與 i address相同
    cout << "<<<<<<<<in  mySwap2 before (x , y) : (  " << x << ", " << y << " ) " << endl;
    int t = x;
    x = y;
    y  = t;
    cout << "<<<<<<<<in  mySwap2 after (x , y) : (  " << x << ", " << y << " ) " << endl;
    return;
}
