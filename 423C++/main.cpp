#include <iostream>
#include <cmath>
using namespace std;

class Point2D
{
private:
    double x, y;
    static int totalPoints;
public:
    /**
    這是預設建構子
    函數，沒有回傳值
    名稱，跟類別名一樣
    做物件資料的初始值
    */
    Point2D():x(1), y(2)
    {
        cout << "call default constructor " << endl;
        ++totalPoints;
//        x = 0;
//        y = 0;
    }
    /**
    這是拷貝建構子
    只有一個參數
    參數型別就是自己的型別
    */
    Point2D(const Point2D& p)
    {
        cout << "call copy constructor " << endl;
        x = p.x;
        y = p.y;
    }
    /**這是一般建構子*/
    Point2D(double px, double py)
    {
        cout << "call normal constructor " << endl;
        x = px;
        y = py;
    }
    /** 解構子 */
    ~Point2D(){
        --totalPoints;
        cout << "destroy----------------------------------------------------------------------------------------" << endl;
    }
    double distance(const Point2D& p)
    {
        return sqrt(( x - p.x ) * ( x - p.x ) + (y-p.y) * ( y - p.y)) ;
    }

    void show()
    {
        cout << "x : " << x << " , y: " << y << endl;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    void setX(double px)
    {
        if(px < 0 ) return;
        x = px;
    }

    void setY(double py)
    {
        if(py < 0 ) return;
        y = py;
    }

    void setXY(double px, double py)
    {
        if(py < 0 || px < 0) return;
        x = px;
        y = py;
    }

    static int getTotalPoints(){
        return totalPoints;
    }

    //邏輯運算子 == , != , < <= , > , >=
    Point2D operator=(Point2D& pt)
    {
        x = pt.x;
        y = pt.y;
        return *this;
    }

    bool operator==(const Point2D& pt)
    {
        return x==pt.x && y == pt.y;
    }

    bool operator!=(const Point2D& pt)
    {
        return !(operator==(pt));
    }

    bool operator<(const Point2D& pt)
    {
        return (x<pt.x && y<pt.y) || ((x==pt.x) && (y < pt.y)) || ((y==pt.y) && (x < pt.x));
    }

    bool operator<=(const Point2D& pt)
    {
        return (operator<(pt) || (operator==(pt)));
    }

    bool operator>(const Point2D& pt)
    {
        return !(operator<=(pt));
    }

    bool operator>=(const Point2D& pt)
    {
        return !(operator<(pt));
    }

};

    int Point2D::totalPoints = 0;

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
    cout << "totalPoints : " << Point2D::getTotalPoints() << endl;
    cout << "before" << endl;
    p1 = p3;
    cout << "p1 = p3" << endl;
    cout << "after" << endl;
    p1.show();

    p3.setX(100);
    p3.setY(20);
    cout << "p3 x = 20, y = 20" << endl;
    p3.show();
    p1.show();

    Point2D points[10];
    for(int i = 0; i < 10; i++)
    {
        cout << i+1 <<" : ";
        points[i].show();
    }

     cout << "totalPoints : " << Point2D::getTotalPoints() << endl;
    points[0].setXY(10, 20);
    points[1].setXY(10, 30);
    points[2].setXY(20, 30);
    points[3].setXY(10, 20);

    if(points[0] == points[3])
    {
        cout<< "points[0] == points[3]" << endl;
    }
    if(points[1] != points[3])
    {
        cout<< "points[1] != points[3]" << endl;
    }

    if(points[2] > points[3])
    {
        cout<< "points[2] > points[3]" << endl;
    }

    if(points[0] >= points[3])
    {
        cout<< "points[0] >= points[3]" << endl;
    }

    if(points[1] < points[2])
    {
        cout<< "points[1] < points[2]" << endl;
    }

    if(points[0] <= points[2])
    {
        cout<< "points[0] <= points[2]" << endl;
    }





    return 0;
}
