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
    char fill;
    char border;
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
        fill='*';
        border='*';

    }

    void setLength(){
        float a;
        a=sqrt(square(p1.getX()-p2.getX())+square(p1.getY()-p2.getY()));
        length=a;
        if (length<1 || length>25){
            length=25;
        }
    }

    float getLength(){
        return length;
    }

    void setWidth(){
        float b;
        b=sqrt(square(p2.getX()-p3.getX())+square(p2.getY()-p3.getY()));
        width=b;
        if (width<1||width>25){
            width=25;
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
            cout<<"\nTHIS IS A SQUARE."<<endl;
        }
        else{
            cout<<"\nTHIS IS A RECTANGLE"<<endl;
        }
    }

    char getFill() {
        return fill;
    }

    void setFill(char a) {
        fill = a;
    }

    char getBorder() {
        return border;
    }

    void setBorder(char b) {
        border = b;
    }

    void display(){
        int c;
        for(int i=1;i<=width;i++){
            c=1;
            while(c<=length){
               if(i==1 || i==width){
                   cout<<getBorder();
               }
               else{
                   if(c==1 || c==length){
                       cout<<getBorder();
                   }
                   else{
                       cout<<getFill();
                   }

               }
               c=c+1;
            }
            cout<<endl;
        }
    }


};
int main() {
    Point a(6,6);
    Point b(1,6);
    Point c(1,1);
    Point d(6,1);

    Rectangle a1(a,b,c,d);
    a1.setLength();
    a1.setWidth();
    float x;
    float y;
    x=a1.getArea();
    y=a1.getPerimeter();
    cout<<"area = "<<x<<endl;
    cout<<"perimeter ="<<y<<endl<<endl;
    a1.check();
    a1.setBorder('@');
    a1.setFill('#');
    a1.display();

    return 0;
}