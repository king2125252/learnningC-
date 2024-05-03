#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "please input a number (0 ~ 26) : ";
    cin >> n;
    int p1 = n, p2 = n, p3 = n * 3 - 2, p4 = n * 3 - 2;
    for (int i = 1; p1 >0; i++){
        if (n > 26){
            cout << "your input number over 26" << endl;
            break;
        }
        if(i == p1){
            cout << "*";
        }else if (i == p2) {
            cout << "*";
        }else if( i == p4){
            cout << "*" << endl;
             p1--, p2++, p3--,p4++;
            i = 0;
            if( p4 == 18) break;
        }else if (i == p3){
            cout << "*";
        }else{
            cout << " " ;
        }



        //cout << p1 << ", "<< p2 << ", " << p3 << ", " << p4 << ", " << i << endl;
    }
    return 0;
}
