#include <iostream>
#include <iomanip>

using namespace std;

int* aDisk[3];
int aTop[3];
int N;

void showTower(int n){
    for(int i = 0; i < 3; ++i){
        cout << (char)(i+'A') << "  :  ";
        for(int j =0; j < n; ++j){
            if(aDisk[i][j] == 0){
                cout << setw(4) << "";
            }else{
                cout << setw(4) << aDisk[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
}

void moveDisk(int n, char A, char B){
    int from = A - 'A';
    int to = B - 'A';
    int fromTop = aTop[from];
    ++aTop[to];
    int toTop = aTop[to];
    aDisk[from][fromTop] = 0;
    --aTop[from];
    aDisk[to][toTop] = n;
    return;
}

int Hanoi(int n, char A, char B, char C){
    if( n ==1){
        cout << setw(3) << n << " : " << A << " -> " << C << endl;
        moveDisk(n, A, C);
        showTower(N);
        return 1;
    }
        int cnt1 = Hanoi(n-1, A,C, B);
        cout << setw(3) << n << " : " << A << " -> " << C << endl;
        moveDisk(n, A, C);
        showTower(N);
        int cnt2 = Hanoi(n-1, B, A, C);
        return cnt1 + 1 + cnt2;
}


int main()
{
    int n ;
    cin >> n;
    N = n;
    for(int i = 0; i < 3; ++i){
        aDisk[i] = new int[N];
        for(int j = 0; j < N; ++j){
            aDisk[i][j] = (i ==0 ? N-j : 0);
        }
        aTop[i] = (i==0?N-1:-1);
    }

    showTower(N);

    int cnt = Hanoi(n, 'A', 'B', 'C');
    cout << " Total moves  :  " << cnt << endl;
    return 0;
}

