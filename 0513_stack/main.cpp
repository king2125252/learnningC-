#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "nsUtil\nsUtil.hpp";
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
            int pos = findPos(x, 0, i);
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

    int findPos(int key, int a, int b){
        int pos = -1;
        if( a<0 || b>_n ) return -1;
        for(int j = a; j < b; ++j){
            if(_buf[j] == key){
                pos = j;
                break;
            }
        }
        return pos;
    }

    int findMaxPos(int a, int b){
        int theMaxPos = a;
        for(int i = a + 1; i<=b; i++){
            if(_buf[i] > _buf[theMaxPos]){
                theMaxPos = i;
            }
        }
        return theMaxPos;
    }

    int findMinPos(int a, int b){
        int theMinPos = a;
        for(int i = a + 1; i<=b; i++){
            if(_buf[i] < _buf[theMinPos]){
                theMinPos = i;
            }
        }
        return theMinPos;
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

    void sortSelection(){
        for(int run =0; run<_n-1; run++){
            for(int i = run+1; i<_n; i++){
                if(_buf[i]<_buf[run]){
                    swap(_buf[i], _buf[run]);
                }
            }
        }
    }

    void shuffle(int from, int to){
        for(int run = from; run<to; ++run){
            int x = rand()%(_n - run) + run;
            swap(_buf[run], _buf[x]);
        }
    }

    void sortBubble(){
        bool hasChange = true;
        for (;hasChange;){
            hasChange = false;
            for (int i = 0; i < _n - 1; i++){
                if (_buf[i] > _buf[i + 1]){
                    swap(_buf[i] , _buf[i + 1]);
                    hasChange = true;
                }
            }
        }
    }

    int size(){
        return _n;
    }



    void push(int v)
    {
        if(_n == _capacity){
            //擴充容量
            int *tmp = new int[_capacity * 2];
            for(int i = 0; i < _n; ++i){
                tmp[i] = _buf[i];
            }
            delete [] _buf;
            _buf = tmp;
        }
        _buf[_n] = v;
        ++_n;

    }



    void pop()
    {
        if(_n == 0) return;
        --_n;
    }

    int top()
    {
        if(_n == 0){
            cout << "陣列中沒有元素" << endl;
            return -999;
        }
        return _buf[_n-1];
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

    cout << "=========================================" << endl;

    ary2.sortSelection();
    ary2.show();

    ary2.shuffle(0, ary2.size() - 1);
    ary2.show();

    ary2.sortBubble();
    ary2.show();

    cout << "=========================================" << endl;
    ary1.push(33);
    ary1.push(17);
    ary1.push(6);
    ary1.show();

    ary1.pop();
    ary1.show();

    cout << "ary1.top : " << ary1.top() << endl;
    return 0;
}
