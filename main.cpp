#include <iostream>
#include<string>
using namespace std;
class TicTacToe{
private:
    int x[3][3];
    void init(){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j <3 ; j++) {
                x[i][j]=0;
            }

        }
    }
public:
    TicTacToe(){
        init();
    }
    void turnPlayer1(int a,int b){
        int y=a;
        int z=b;
        int d=0;
        while(x[y][z]!=0){
            cout<<"INVALID ENTERED COLUMN AND ROW .ALREADY FILLED OR INVALID COORDINATES"<<endl;
            cout<<"ENTER ROW:";
            cin>>y;
            cout<<endl<<"ENTER COLUMN:";
            cin>>z;
            cout<<endl<<endl;

        }
        x[y][z]=1;
        if (x[0][0]==1 && x[0][1]==1 && x[0][2]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[1][0]==1 && x[1][1]==1 && x[1][2]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[2][0]==1 && x[2][1]==1 && x[2][2]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[0][0]==1 && x[1][0]==1 && x[2][0]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[0][1]==1 && x[1][1]==1 && x[2][1]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[0][2]==1 && x[1][2]==1 && x[2][2]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[0][0]==1 && x[1][1]==1 && x[2][2]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        if (x[0][2]==1 && x[1][1]==1 && x[2][0]==1){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 1"<<endl;
            display();
            init();
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if(x[i][j]!=0){
                    d=d+1;
                }

            }

        }
        if (d==9){
            cout<<endl;
            cout<<endl;
            cout<<"ITS A DRAW";
            display();
            init();
        }



    }
    void turnplayer2(int a,int b){
        int y=a;
        int z=b;
        int d=0;
        while(x[y][z]!=0){
            cout<<"INVALID ENTERED COLUMN AND ROW .ALREADY FILLED OR INVALID COORDINATES"<<endl;
            cout<<"ENTER ROW:";
            cin>>y;
            cout<<endl<<"ENTER COLUMN:";
            cin>>z;
            cout<<endl<<endl;

        }
        x[y][z]=2;
        if (x[0][0]==2 && x[0][1]==2 && x[0][2]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[1][0]==2 && x[1][1]==2 && x[1][2]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[2][0]==2 && x[2][1]==2 && x[2][2]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[0][0]==2 && x[1][0]==2 && x[2][0]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[0][1]==2 && x[1][1]==2 && x[2][1]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[0][2]==2 && x[1][2]==2 && x[2][2]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[0][0]==2 && x[1][1]==2 && x[2][2]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        if (x[0][2]==2 && x[1][1]==2 && x[2][0]==2){
            cout<<"GAME OVER "<<endl;
            cout<<"WINNER IS PLAYER 2"<<endl;
            display();
            init();
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if(x[i][j]!=0){
                    d=d+1;
                }

            }

        }
        if (d==9){
            cout<<endl;
            cout<<endl;
            cout<<"ITS A DRAW"<<endl<<endl;
            display();
            init();
        }

    }
    void display(){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout<<x[i][j]<<"\t";

            }
            cout<<endl;

        }
        cout<<endl<<endl;
    }

};
int main() {
    TicTacToe game1;
    game1.display();
    game1.turnplayer2(1,1);
    game1.display();
    game1.turnPlayer1(0,0);
    game1.display();
    game1.turnplayer2(0,2);
    game1.display();
    game1.turnPlayer1(0,1);
    game1.display();
    game1.turnplayer2(1,0);
    game1.display();
    game1.turnPlayer1(1,2);
    game1.display();
    game1.turnplayer2(2,1);
    game1.display();
    game1.turnPlayer1(2,0);
    game1.display();
    game1.turnplayer2(2,2);
    cout<<endl<<endl;
    game1.display();
    game1.turnplayer2(1,1);
    game1.display();
    game1.turnPlayer1(0,0);
    game1.display();
    game1.turnplayer2(0,2);
    game1.display();
    game1.turnPlayer1(0,1);
    game1.display();
    game1.turnplayer2(2,0);
    cout<<endl<<endl<<endl;
    game1.display();
    game1.turnPlayer1(1,2);
    game1.display();
    game1.turnplayer2(0,0);
    game1.display();
    game1.turnPlayer1(0,2);
    game1.display();
    game1.turnplayer2(0,1);
    game1.display();
    game1.turnPlayer1(2,2);

    return 0;
}