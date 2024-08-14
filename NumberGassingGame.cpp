// Create a Number Gassing Game :

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    
    cout<<"\n\t\t______________Welcome to the number gassing game________________\n"<<endl;
    cout<<"\n\t\t---->you will have to guess a number 1 to 100.";
    cout<<"\n\t\t---->Lets starts playing and best of luck."<<endl;

    srand(time(0));
    int randNumber = ( rand() %100)+1;

    cout<<"\n You will have total 5 chances to guess the correct number \n";
    int chanceLeft =5;
    int playerInput;

    for (int i=1;i<=5 ;i++){

        cout<<"\n Enter the number :";
        cin>>playerInput;

        if (playerInput == randNumber){
            cout<<"\n congrats!!. you have succesfully guessed the right number\n";
            cout<<"\nThanks for playing , have a nice day";
            break;
        }
        else {
             if ( playerInput > randNumber){
                cout<<"\n Insert a smaller number . Try again"<<endl;
             }
             else{
                cout<<"\n [ Insert a large number .Try again] "<<endl;
             }
        }
        chanceLeft--;
        cout<<"\n( chances Left to guess the Random Number :" <<chanceLeft<<")"<<endl ;

        if (chanceLeft == 0){
            cout<<"\n sorry your chance has been finished to guess the random number \n"<<endl;
            cout<<" The random Number was :"<<randNumber<<endl;
            cout<<"Thanks for playing have a nice day.";

        }
    }
    cout<<"\n";
    return 0;
}
