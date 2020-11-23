#include <iostream>
#include <string>
using namespace std;
class Rectangle{
private:
    float length;
    float width;
public:
    Rectangle(){
        length=1.0;
        width=1.0;
    }
    Rectangle(float a,float b){
        setLength(a);
        setWidth(b);
    }

    void setLength(float x){
        float a=x;
        while(a<1 || a>19){
            cout<<"invalid value entered please enter value for length betweeen 1 and 19 : ";
            cin>>a;
            cout<<endl<<endl;
        }
        length=a;
    }

    float getLength(){
        return length;
    }

    void setWidth(float y){
        float b=y;
        while(b<1 || b>19){
            cout<<"invalid value entered please enter value for width betweeen 1 and 19 : ";
            cin>>b;
            cout<<endl<<endl;
        }
        width=b;

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


};
int main() {
    Rectangle a1(25,2);
    float x;
    float y;
    x=a1.getArea();
    y=a1.getPerimeter();
    cout<<"area = "<<x<<endl;
    cout<<"perimeter ="<<y;
    return 0;
}