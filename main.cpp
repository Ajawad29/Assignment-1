#include <iostream>
#include<string>
using namespace std;
class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(){
        day=1;
        month=1;
        year=1990;
    }
    Date(int a, int b, int c){
        setYear(c);
        setMonth(b);
        setDay(a);

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
    void display(){
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
    Date d1(1,2,2000);
    Date d2(1,12,2000);
    Date d3(1,6,2000);
    for (int i = 1; i <=31 ; i++) {
        d1.nextDay();
        d2.nextDay();
        d3.nextDay();

    }
    d1.display();
    d2.display();
    d3.display();

    return 0;
}