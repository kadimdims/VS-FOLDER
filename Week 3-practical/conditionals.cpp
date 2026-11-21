#include<iostream>
using namespace std;
int main(){

    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;

    cout<<"Enter age:";
    cin>>age;
    cout<<"Do you have a ticket? (1 for Yes, 0 for No):";
    cin>>hasTicket;
    cout<<"Are you a member? (1 for Yes, 0 for No):";
    cin>>isMember;
    cout<<"Are you banned? (1 for Yes, 0 for No):";
    cin>>isBanned;

    //Eligible if age>=18 AND has ticket AND NOT banned
    //or: is a member AND NOT banned

    bool canEnter = (age >= 18 && hasTicket && !isBanned) || (isMember && !isBanned);
    if(canEnter){
        cout<<"You can enter the event."<<endl;
    } else {
        cout<<"Sorry, you cannot enter the event."<<endl;
    }

    return 0;
}