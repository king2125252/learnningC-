#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout << "please input a number : ";
    cin >> n;
    double result;
    for(int i = 1, j = 1; i <= n; i+=2,j = 0 - j){
                result += j * 1.0/i;
    }
    cout << result*4 << endl;
    return 0;
}
