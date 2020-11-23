#include <iostream>
#include <string>
using namespace std;
class DateAndTime{
private:
    int hour;
    int minute;
    int second;
    int day;
    int month;
    int year;
    string zone;
    void change1(){
        zone="PM";
    }
    void change2(){
        zone="AM";
    }
public:
    DateAndTime(){
        hour=12;
        minute=00;
        second=00;
        zone="AM";
        day=1;
        month=1;
        year=1990;




    }
    DateAndTime(int a,int b,int c, string d,int e,int f,int g){
        setHour(a);
        setMinute(b);
        setSecond(c);
        zone=d;
        setYear(g);
        setMonth(f);
        setDay(e);



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
        while(b<0 || b>59){
            cout<<"INVALID INPUT RE-ENTER SECOND:";
            cin>>b;
            cout<<endl<<endl;
        }
        second = b;
    }

    void setMinute(int a) {
        int b=a;
        while(b<0 || b>59){
            cout<<"INVALID INPUT RE-ENTER MINUTE:";
            cin>>b;
            cout<<endl<<endl;
        }
        minute = b;
    }

    void setHour(int a) {
        int b=a;
        while(b<1 || b>12){
            cout<<"INVALID INPUT RE-ENTER HOUR:";
            cin>>b;
            cout<<endl<<endl;
        }
        hour = b;
    }
    void printStandard(){
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
                    nextDay();
                }

            }


        }
        if(hour==13){
            hour=1;
        }

    }
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void setYear(int a) {
        int b=a;
        while(b<1990 || b>2100){
            cout<<"INVALID INPUT FOR YEAR RE-ENTER VALUE BETWEEN 1990 to 2100 : ";
            cin>>b;
            cout<<endl<<endl<<endl;
        }

        year = b;
    }

    void setMonth(int a) {
        int b=a;
        while(b<1 || b>12){
            cout<<"INVALID INPUT FOR MONTH RE-ENTER VALUE BETWEEN 1 to 12 : ";
            cin>>b;
            cout<<endl<<endl<<endl;



        }
        month = b;

    }

    void setDay(int a) {
        int b=a;
        if (month==1 || month==3 || month==5 || month==7 || month==8 ||month==10||month==12){
            while (b<1 || b>31){
                cout<<"INVALID INPUT FOR DAY RE-ENTER VALUE BETWEEN 1 to 31 : ";
                cin>>b;
                cout<<endl<<endl<<endl;



            }
        }
        if (month==4 || month==6 || month==9 || month==11){
            while (b<1 || b>30){
                cout<<"INVALID INPUT FOR DAY RE-ENTER VALUE BETWEEN 1 to 30 : ";
                cin>>b;
                cout<<endl<<endl<<endl;



            }
        }
        if (month==2){
            while (b<1 || b>28){
                cout<<"INVALID INPUT FOR DAY RE-ENTER VALUE BETWEEN 1 to 28 : ";
                cin>>b;
                cout<<endl<<endl<<endl;



            }
        }
        day=b;



    }
    void printUniversal(){
        if(day<10){
            cout<<"0"<<day<<"/";
        }
        else{
            cout<<day<<"/";
        }
        if(month<10){
            cout<<"0"<<month<<"/";
        }
        else{
            cout<<month<<"/";
        }
        cout<<year<<"  "<<endl<<endl;
    }

    void nextDay(){
        day=day+1;
        if (month==1 || month==3 || month==5 || month==7 || month==8 ||month==10||month==12){
            if (day==32){
                day=1;
                month=month+1;
                if(month==13){
                    month=1;
                    year=year+1;
                }
            }
        }
        if (month==4 || month==6 || month==9 || month==11){
            if(day==31){
                day=1;
                month=month+1;
            }
        }
        if(month==2){
            if(day==29){
                day=1;
                month=month+1;
            }
        }




    }




};
int main() {
    DateAndTime z(12,00,00,"AM",1,1,2001);
    z.printStandard();
    z.printUniversal();
    for (int i = 0; i < 86400; i++) {
        z.tick();
        z.printStandard();
        z.printUniversal();

    }

    return 0;
}