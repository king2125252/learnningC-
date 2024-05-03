#include <iostream>
#include <iomanip>

using namespace std;

void Hanoi(int n, char a, char b, char c){
    if( n ==1){
        cout << setw(3) << n << " : " << a << " -> " << c << endl;
        return;
    }
    Hanoi(n-1, a, c, b);
        cout << setw(3) << n << " : " << a << " -> " << c << endl;
        Hanoi(n-1, b, a, c);
}


int main()
{
    int n ;
    cin >> n;
    Hanoi(n, 'a', 'b', 'c');
    return 0;
}
//
//1 : a -> b
//2 : a -> c
//1 : b -> c
