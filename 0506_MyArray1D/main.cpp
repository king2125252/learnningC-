#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
//#include "../nuu/nuu.h"

using namespace std;

class MyArray1DInt{
private:
    int *_buf;
    int _n;
    int _capacity;
public:
    MyArray1DInt(){
        _capacity = 10;
        _buf = new int[_capacity];
        _n = 0;
    }

    MyArray1DInt(int *ary, int n){
        _capacity = 2 * n;
        _buf = new int[_capacity];
        _n = n;
        for(int i = 0; i<n; ++i){
            _buf[i] = ary[i];
        }
    }

    MyArray1DInt(int n, int a = 1, int b = 99){
        _capacity = n * 2;
        _buf = new int[_capacity];
        _n = n;
        for(int i = 0; i < n; ++i){
            int x = randBetween(a, b);
            int pos = find(x, 0, i);
            if(pos >= 0){
                --i;
                continue;
            }
            _buf[i] = x;
        }
    }
    ~MyArray1DInt(){
        cout << "destructor..." << endl;
        delete[]_buf;
    }
    int find(int key, int a, int b){
        int pos = -1;
        if( a<0 || b>_n) return -1;
        for(int j = a; j < b; ++j){
            if(_buf[j] == key){
                pos = j;
                break;
            }
        }
        return pos;
    }
    void show(){
        cout << "capacity:" << _capacity << endl;
        cout << "size:" << _n << endl;
        showArray(_buf, 0, _n);
    }

    void showArray(int *ary, int a, int b, int coutPerLine=10, int widthPerNum = 6)
    {
        for(int i = a; i < b; ++i)
        {
            if(i%coutPerLine ==0)
            {
                cout << endl;
            }
            cout<<setw(widthPerNum)<<ary[i];
        }
        cout<<endl<<endl;
    }

    int randBetween(int a, int b)
    {
        return rand()%(b-a+1);
    }

protected:
};

int main()
{
    srand((unsigned)time(NULL));
    int ary0[12];
    for(int i = 0; i < 12; ++i){
        ary0[i] = i + 1;
    }
    MyArray1DInt ary1, ary2(10, 20, 60), ary3(ary0, 12);
    ary1.show();
    ary2.show();
    ary3.show();
    return 0;
}
