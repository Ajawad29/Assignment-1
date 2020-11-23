#include <iostream>
#include <string>
using namespace std;
class HugeInteger{
private:
    int num[40];
    string x;
    void init(){
        for(int a=39;a>=0;a--){
            num[a]=0;
        }
    }
public:
    HugeInteger(){
        init();
    }
    HugeInteger(string a){
        setInteger(a);

    }
    void setInteger(string b){

        x=b;
        init();
        int y;
        y=x.length();
        int z=y-1;
        for (int i = 39; i>39-y ;i--){
            num[i]=x[z]-48;
            z=z-1;

        }

    }
    void display(){
        for (int i = 0; i < 40 ; i++) {
            cout<<num[i];

        }
    }
    HugeInteger add(HugeInteger c) {
        HugeInteger d;
        for (int i = 39; i >= 0; i--) {
            d.num[i] = d.num[i] + c.num[i] + num[i];
            if (d.num[i] >= 10) {
                d.num[i] = d.num[i] - 10;
                d.num[i - 1] = d.num[i - 1] + 1;
            }
        }

        return d;
    }

    HugeInteger subt(HugeInteger c){
        HugeInteger d;
        for (int i = 39; i >=0 ; i--) {
            if(num[i]<c.num[i]){
                num[i-1]=num[i-1]-1;
                num[i]=num[i]+10;
            }
            d.num[i]=num[i]-c.num[i];

        }


        return d;
    }




};
int main() {
    HugeInteger a("1510");
    HugeInteger b("99");
    HugeInteger c;
    a.display();
    cout<<endl;
    b.display();
    cout<<endl;
    c.display();
    cout<<endl;
    c=a.add(b);
    c.display();
    cout<<endl;
    c=a.subt(b);
    c.display();



    return 0;
}