#include <iostream>
#include <iomanip>
using namespace std;

int sumAry(int* ary, int a, int b){

    if(a == b ){
        return ary[a];
    }

    int m = (b - a + 1)/2;
    cout << endl;
        cout << a << endl;
     cout << b << endl;
      cout << m << endl;
    int ans1 = sumAry(ary, a, a + m - 1);
    int ans2 = sumAry(ary, a+m, b);
    return ans1 + ans2;
}




int main()
{
    const int length = 2;
    int ary[length];

    for(int i = 0; i < length; i++)
    {
        int x = rand();
        x = x % 101;
        ary[i] = x;
        if(i % 10 == 0)
        {
            cout << endl;
        }
        cout << setw(6) << ary[i];
    }

    int ans = sumAry(ary, 0, length-1);
    cout << "ans = " << ans;
}
