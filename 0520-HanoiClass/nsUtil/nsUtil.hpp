#ifndef NSUTIL_HPP_INCLUDED
#define NSUTIL_HPP_INCLUDED
#include <iomanip>

using namespace std;

class MyArray1DInt {
private:
    int *_buf;
    int _n;
    int _capacity;
public:
    void showArray(int *ary, int a, int b, int coutPerLine=10, int widthPerNum = 6){
        for(int i = a; i < b; ++i){
            if(i%coutPerLine ==0){
                cout << endl;
            }
            cout<<setw(widthPerNum)<<ary[i];
        }
        cout<<endl<<endl;
    }

    void push(int v){
        if(_n == _capacity){
            _capacity *= 2;
            int *tmp = new int[_capacity];
            for(int i = 0; i<_n; ++i){
                tmp[i] = _buf[i];
            }
            delete [] _buf;
            _buf = tmp;
        }
        _buf[_n] = v;
        ++_n;
    }

    void pop(){
        if(_n == 0)return;
        --_n;
    }

    int top(){
        if(_n == 0){
            cout << "array hasn't element" << endl;
            return -999;
        }
        return _buf[_n-1];
    }

    void show(){
        cout << "capacity : " << _capacity << endl;
        cout << "size : " << _n << endl;
        showArray(_buf, 0, _n);
    }

    int size(){
        return _n;
    }

    int& operator[](int k){
        if(k<0 || k>=_n){
            cout << "Pillar : " << k << "overflow" << endl;
            return _buf[0];
        }
        return _buf[k];
    }
};

#endif // NSUTIL_HPP_INCLUDED
