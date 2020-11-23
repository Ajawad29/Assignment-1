#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point(){
        x=1;
        y=1;
    }
    Point(int a,int b){
        x=a;
        y=b;
    }

    int getX() {
        return x;
    }

    int getY() const {
        return y;
    }

    void setY(int b) {
        y = b;
    }

    void setX(int a) {
        x = a;
    }


};
class Rectangle{
private:
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    float length;
    float width;
    float square(int a){
        float x;
        x=a*a;
        return x;
    }
public:
    Rectangle(Point a,Point b,Point c,Point d){
        p1=a;
        p2=b;
        p3=c;
        p4=d;
        length=0;
        width=0;

    }

    void setLength(){
        float a;
        a=sqrt(square(p1.getX()-p2.getX())+square(p1.getY()-p2.getY()));
        length=a;
        if (length<1 || length>19){
            length=1;
        }
    }

    float getLength(){
        return length;
    }

    void setWidth(){
        float b;
        b=sqrt(square(p2.getX()-p3.getX())+square(p2.getY()-p3.getY()));
        width=b;
        if (width<1||width>19){
            width=1;
        }

    }
    float getWidth(){
        return width;
    }
    float getArea(){
        float area;
        area=length*width;
        return area;
    }
    float getPerimeter(){
        float perimeter=2*(length+width);
        return perimeter;
    }
    void check(){
        if(length==width){
            cout<<"\nTHIS IS A SQUARE.";
        }
        else{
            cout<<"\nTHIS IS A RECTANGLE";
        }
    }


};
int main() {
    Point a(10,10);
    Point b(1,10);
    Point c(1,1);
    Point d(10,1);

    Rectangle a1(a,b,c,d);
    a1.setLength();
    a1.setWidth();
    float x;
    float y;
    x=a1.getArea();
    y=a1.getPerimeter();
    cout<<"area = "<<x<<endl;
    cout<<"perimeter ="<<y;
    a1.check();

    return 0;
}