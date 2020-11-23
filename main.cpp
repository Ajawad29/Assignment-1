#include <iostream>
#include <string>
using namespace std;
class Time{
private:
    int hour;
    int minute;
    int second;
    string zone;
    void change1(){
        zone="PM";
    }
    void change2(){
        zone="AM";
    }
public:
    Time(){
        hour=12;
        minute=00;
        second=00;
        zone="AM";



    }
    Time(int a,int b,int c, string d){
        setHour(a);
        setMinute(b);
        setSecond(c);
        zone=d;


    }

    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    string getZone() {
        return zone;
    }

    void setZone(string a) {
        zone = a;
    }

    void setSecond(int a) {
        int b=a;
        second = b;
    }

    void setMinute(int a) {
        int b=a;
        minute = b;
    }

    void setHour(int a) {
        int b=a;
        hour = b;
    }
    void display(){
        if (hour<10){
            cout<<"0"<<hour<<":";
        }
        else{
            cout<<hour<<":";
        }
        if(minute<10){
            cout<<"0"<<minute<<":";
        }
        else{
            cout<<minute<<":";
        }
        if (second<10){
            cout<<"0"<<second<<"  ";
        }
        else{
            cout<<second<<"  ";
        }
        cout<<zone<<endl<<endl;
    }
    void tick(){
        second=second+1;
        if(second==60){
            second=0;
            minute=minute+1;
        }
        if(minute==60){
            minute=0;
            hour=hour+1;
            if(hour==12){
                if(zone=="AM"){
                    change1();
                }
                else{
                    change2();
                }

            }


        }
        if(hour==13){
            hour=1;
        }

    }

};
int main() {
    Time t1(12,0,0,"AM");
    t1.display();
    for(int i=1;i<=60;i++){
        t1.tick();
    }
    t1.display();
    for(int i=1;i<=3600;i++){
        t1.tick();
    }
    t1.display();
    for(int i=1;i<=43200;i++){
        t1.tick();
    }
    t1.display();
    for (int j = 1; j <=43200 ; j++) {
        t1.tick();

    }
    t1.display();

    return 0;
}