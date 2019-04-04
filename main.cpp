#include<iostream>
using namespace std;
string nicknameplayer1,nicknameplayer2;
int main()
{
    int ch;
    cout<<"                 Wellcome to GALAXI INVADERS "<<endl;
    cout<<endl;
    cout<<"                        MAIN MENU"<<endl;
    cout<<endl;
    cout<<"               1) 1 player"<<endl;
    cout<<"               2) 2 player"<<endl;
    cout<<"               3) QUIT GAME"<<endl;
    cout<<"             choose (1-3)";cin>>ch;
    if(ch<0 || ch>3)main();
    if(ch==3)return 0;
    cout<<"            -Write your nickname player1 : ";cin>>nicknameplayer1;
    if(ch==2)cout<<"            -Write your nickname player2 : ";cin>>nicknameplayer2;


}
