#ifndef NUU_H_INCLUDED
#define NUU_H_INCLUDED

#include <iostream>
#include <iomanip>

using namespace std;

void showArray(int *ary, int a, int b, int coutPerLine=10, int widthPerNum = 6){
    for(int i = a; i < b; ++i){
        if(i%coutPerLine ==0){
            cout << endl;
        }
        cout<<setw(widthPerNum)<<ary[i];
    }
    cout<<endl<<endl;
}

int randBetween(int a, int b){
    return rand()%(b-a+1);
}

#endif // NUU_H_INCLUDED
