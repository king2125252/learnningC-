#include <iostream>
#include <cmath>

#include<graphics.h>
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
    Point2D():x(1), y(2){
        cout << "call default constructor " << endl;
//        x = 0;
//        y = 0;
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

    Point2D operator=(Point2D& pt){
        x = pt.x;
        y = pt.y;
        return *this;
    }

    void drawLine(const Point2D& p){
        line(x, y, p.x, p.y);
    }

    void drawCircle(double r){
        circle(x, y, r);
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
    p1.setY(20);
    p2.setY(10);
    p3.setX(30);
    p1.show();
    p2.show();
    p3.show();

    p1 = p3;
    cout << "p1 = p3" << endl;
    p1.show();

    p3.setX(100);
    p3.setY(20);
    cout << "p3 x = 20, y = 20" << endl;
    p3.show();
    p1.show();

    int gd=DETECT, gm;
    char title[] = "2D Graphics";
    initgraph(&gd, &gm, title);

    p1.drawLine(p2);
    p2.drawLine(p3);
    p1.drawCircle(5);
    p2.drawCircle(5);
    p3.drawCircle(5);

    getch();
    closegraph();
    return 0;
}
