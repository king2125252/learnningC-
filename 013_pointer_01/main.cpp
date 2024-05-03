#include <iostream>

using namespace std;

int main()

{

    int i=10 , j=20;

    double d=3.14;

    int& i2=i;

    cout << "address of i:" <<&i <<endl;

    cout <<"address of i2:"<<&i2<<endl;

    int* ptr = &i;

    *ptr = *ptr+1;

    cout <<"i:"<<i<<endl;

    double* ptr2 =&d;

    *ptr = *ptr+1;

    cout << "ptr:" <<ptr <<endl;

    cout<<"&i:"<<&i<<endl;

    cout<<"i:"<<i<<endl;

    cout<<"*ptr:"<<*ptr<<endl;

    int ary[ 5 ] = { 1 , 3, 5 , 7 , 9};

    ptr = ary;

    cout<<ptr[1]<<endl;

    return 0;

}
