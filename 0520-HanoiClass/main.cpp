#include <iostream>
#include <iomanip>
#include "nsUtil\nsUtil.hpp"

using namespace std;

const char towerA = 'A';
MyArray1DInt stick[3];

void showTowerV(){
    int maxT = max(stick[0].size()-1, max(stick[1].size()-1, stick[2].size()-1));
    cout << endl;
    for(int j = maxT; j >= 0; --j){
        for(int i = 0;i < 3; ++i){
            cout << setw(3) << "";
            if(j>=stick[i].size()){
                cout << setw(4) << "";
            }else{
                cout << setw(4) << stick[i][j];
            }
            cout << setw(3) << "";
        }
        cout << endl;
    }
    cout << "__";
    cout << "___" << "_" << (char)(towerA+0) << "____ ";
    cout << "___" << "_" << (char)(towerA+1) << "____ ";
    cout << "___" << "_" << (char)(towerA+2) << "____ ";
    cout << endl << endl;
}

void moveDisk(char A, char B){
    int from = A - towerA;
    int to = B - towerA;

    int diskNo = stick[from].top();
    stick[from].pop();
    stick[to].push(diskNo);

    showTowerV();
    return;
}


int Hanoi(int n, char A, char B, char C){
    if(n == 1){
        cout << setw(3) << n << " : " << A << " -> " << C << endl;
        moveDisk(A, C);
        return 1;
    }

    int cnt1 = Hanoi(n-1, A, C, B);
    cout << setw(3) << n << " : " << A << " -> " << C << endl;
    moveDisk(A, C);

    int cnt2 = Hanoi(n-1, B, A, C);
    return cnt1 + 1 + cnt2;
}




int main()
{
    int N;
    cout << "Disk Num? ";
    cin >> N;

    for(int i = N; i>= 1; --i){
        stick[0].push(i);
    }

    showTowerV();

    int cnt = Hanoi(N, towerA, (char)(towerA+1), (char)(towerA+2));
    cout << "Total move : " << cnt << endl;
    return 0;
}
