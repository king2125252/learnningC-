#include <iostream>
#include <cmath>

using namespace std;

class Point2D{
private:
    double x, y;
public:
    /**
    這是預設建構子
    函數，沒有回傳值
    名稱，跟類別名一樣
    做物件資料的初始值
    */
    Point2D(){
        cout << "call default constructor " << endl;
        x = 0;
        y = 0;
    }
     /**
     這是拷貝建構子
     只有一個參數
     參數型別就是自己的型別
    */
    Point2D(const Point2D& p){
        cout << "call copy constructor " << endl;
        x = p.x;
        y = p.y;
    }
    /**這是一般建構子*/
    Point2D(double px, double py){
        cout << "call normal constructor " << endl;
        x = px;
        y = py;
    }

    double distance(const Point2D& p){
        return sqrt(( x - p.x ) * ( x - p.x ) + (y-p.y) * ( y - p.y)) ;
    }

    void show(){
        cout << "x : " << x << " , y: " << y << endl;
    }

    double getX(){
        return x;
    }

     double getY(){
        return y;
    }

    void setX(double px){
        if(px < 0 ) return;
        x = px;
    }

     void setY(double py){
        if(py < 0 ) return;
        y = py;
    }

};


int main()
{
    Point2D p1, p2(p1), p3(3, 5);
    p1.show();
    p2.show();
    p3.show();
    cout << "p1.distance(p3) : " << p1.distance(p3) << endl;
    cout << "p3.distance(p2) : " << p3.distance(p2) << endl<< endl;
    cout << "below is change x, y " << endl;
    p1.setY(-200);
    p2.setY(10);
    p3.setX(999);
    p1.show();
    p2.show();
    p3.show();

    return 0;
}
