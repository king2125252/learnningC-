#include <iostream>
#include <iomanip>

using namespace std;

int* aDisk[3];
int aTop[3];
int N;
const char towerA = 'A';

void showTower(){
    for(int i = 0; i < 3; ++i){
        cout << (char)(i + towerA) << "  :  ";
        for(int j =0; j < N; ++j){
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

void showTowerV(){
    int maxT = max(aTop[0], max(aTop[1], aTop[2]));
    cout << endl;
    for(int j = maxT; j >= 0; --j){
        for(int i = 0; i < 3; ++i){
            cout << setw(3) << "";
            if(aDisk[i][j] ==0){
                cout << setw(4) << "";
            }else{
                cout << setw(4) << aDisk[i][j];
            }
            cout << setw(3) << "";
        }
        cout << endl;
    }
    cout << "__";
    cout << "___" << "_" << (char)(towerA+0) << "___  ";
    cout << "___" << "_" << (char)(towerA+1) << "___  ";
    cout << "___" << "_" << (char)(towerA+2) << "___  ";
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
        showTowerV();
        return 1;
    }
        int cnt1 = Hanoi(n-1, A,C, B);
        cout << setw(3) << n << " : " << A << " -> " << C << endl;
        moveDisk(n, A, C);
        showTowerV();
        int cnt2 = Hanoi(n-1, B, A, C);
        return cnt1 + 1 + cnt2;
}


int main()
{
    cout << "DISK NUM ? : ";
    cin >> N;
    for(int i = 0; i < 3; ++i){
        aDisk[i] = new int[N];
        for(int j = 0; j < N; ++j){
            aDisk[i][j] = (i ==0 ? N-j : 0);
        }
        aTop[i] = (i==0?N-1:-1);
    }

    showTowerV();

    int cnt = Hanoi(N, 'A', 'B', 'C');
    cout << " Total moves  :  " << cnt << endl;
    return 0;
}

