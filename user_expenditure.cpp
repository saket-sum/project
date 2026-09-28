#include<iostream>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

int netS(float budget, float net, string note,float extra){
    if(net>budget){
        cout<<"BUDGET WAS "<<budget<<" $ "<<endl<<"SPENDING WAS "<<net<<" $ "<< "HENCE OVERSPENDED"<<endl;
        cout<<"EXTRA SPENDING ON :- "<<note<<", AMOUNT = "<<extra<<endl;
        return 1;
    }
    else if(net<budget){
        cout<<"BUDGET WAS "<<budget<<" $ "<<endl<<"SPENDING WAS "<<net<<" $ "<<"HENCE UNDERSPENDED"<<endl;
        return 1;
    }
    else{
        cout<<"BUDGET WAS "<<budget<<" $ "<<endl<<"SPENDING WAS "<<net<<" $ "<<"HENCE SPENDED ON POINT"<<endl;
        return 1;
    }
    return 1;
}

int main(){
    float food=0, travel=0, bills=0, extra=0, budget=0;
    int ques;
    string note;
    cout<<"ENTER NET FOOD COST : ";
    cin>>food;
    cout<<"ENTER TRAVELLING COST : ";
    cin>>travel;
    cout<<"ENTER BILLS COST : ";
    cin>>bills;
    cout<<"ANY EXTRA SPENDING (1 FOR YES) : ";
    cin>>ques;
    if(ques==1){
        cout<<"WHAT DO U WANNA NAME IT = ";
        cin.ignore();
        getline(cin,note);
        cout<<"ENTER EXTRA COST : ";
        cin>>extra;
    }
    cout<<"ENTER BUDGET : ";
    cin>>budget;
    float net=food+travel+bills+extra;
    cout<<"NET SPENDING FOR TODAY IS = "<<net<<" $"<<endl;
    netS(budget,net,note,extra);
    return 0;
}