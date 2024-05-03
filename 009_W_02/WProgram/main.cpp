#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "please input a number (0 ~ 26) : ";
    cin >> n;
    int p1 = 1, p2 = n * 2 - 1, p3 = n * 2 - 1, p4 = n * 4 - 3;
    for (int i = 1; p1 <= n; i++){
        if (n > 26){
            cout << "your input number over 26" << endl;
            break;
        }
        if(i == p1){
            cout << "*";
        }else if (i == p2) {
            cout << "*";
        }else if (i == p3){
            cout << "*";
                    if( p1 == p2 && p3 == p4) break;
        }else if( i == p4){
            cout << "*" << endl;
            p1++, p2--, p3++, p4--;
            i = 0;
        }else{
            cout << " " ;
        }



//        cout << p1 << ", "<< p2 << ", " << p3 << ", " << p4 << ", " << endl;
    }
    return 0;
}
