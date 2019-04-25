/*【问题描述】已知图形类Shape是一个表示图形的抽象类，
Area( )为求图形面积的函数，Perimeter( )为求图形周长的函数
，Print()为 输出图形的基本信息。
分别设计图形类(Shape)、点类(Point)和圆类(Circle)，要求根据如下已知代码，实现相关类。*/
#include <iostream>
#include <stdio.h>
#define PI 3.1415926f

using namespace std;

class Shape
{
public:
    virtual ~Shape(){}
    virtual void Print()=0;
    virtual float Area()=0;
    virtual float Perimeter()=0;
};

class Point:public Shape
{
public:
    Point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    int x,y;
    virtual ~Point(){}
    virtual void Print()
    {

        cout<<"x="<<x<<","<<"y="<<y;

    }
    virtual float Area()
    {

        return 0;

    }
    virtual float Perimeter()
    {

        return 0;

    }
};


class Circle:public Point
{
public:
    int r;

    Circle(int x1,int y1,int r1):Point(x1,y1)
    {

        r=r1;

    }
    virtual ~Circle(){}

    virtual void Print()
    {

        cout<<"x="<<x<<","<<"y="<<y<<","<<"r="<<r;

    }
    virtual float Area()
    {

        return (PI*r*r);

    }
    virtual float Perimeter()
    {

        return (2*PI*r);

    }
};

void fun(Shape& ref)

{
    ref.Print();

    cout<<endl;

    cout<<"Area="<<ref.Area()<<endl;

    cout<<"Perimeter="<<ref.Perimeter()<<endl;
}



int main()

{
    int x,y,r;
    cin>>x>>y>>r;
    Point p(x,y);
    Circle c(x,y,r);
    fun(p);
    fun(c);
    return 1;

}

