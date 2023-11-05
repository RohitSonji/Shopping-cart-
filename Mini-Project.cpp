#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class shop{
    private:
    float bill=0.0;
    vector<int> pqnt;
    vector<int> prodlist;
    vector<string> pname;
    public:
    void menu();
    void add();
    void remove();
    void checkout();
    void search(string s);


};
void shop::search(string s){
    for(string x:pname){
        if(x==s){
            cout<<"\n PRODUCT IS PRESENT.: "<<endl;
            cout<<"\n "<<x<<endl;
            break;
        }


    }




}
void shop::remove(){
    char a;
    while(true){
        string s;
        cout<<"\n GIVE NAME WANT TO DELETE FROM CART ONE AT A TIME"<<endl;
        cin>>s;
        if (s=="COOKIES"){
            pname.erase(pname.begin());
            prodlist.erase(prodlist.begin());
        }
        else if(s=="DISHWASH"){
             pname.erase(pname.begin()+1);
            prodlist.erase(prodlist.begin()+1);
   
   
        }
        else if(s=="BRUSH"){
             pname.erase(pname.begin()+2);
             prodlist.erase(prodlist.begin()+2);
        }
        else if(s=="FACEWASH"){
             pname.erase(pname.begin()+3);
             prodlist.erase(prodlist.begin()+3);
        }
        else if(s=="CURTAIN"){
             pname.erase(pname.begin()+4);
             prodlist.erase(prodlist.begin()+4);
        }
        else if(s=="MASSALA"){
             pname.erase(pname.begin()+5);
             prodlist.erase(prodlist.begin()+5);
        }
        else{
            cout<<"\nITEM NOT IS STORE"<<endl;
        }
        cout<<"\n  BACK TO MENU::."<<endl;
        cin>>a;
        if(a=='y' || a=='Y'){
            bill=0.0;
            break;
        }
}
}
void shop::checkout(){
    cout<<"\n-----------------------"<<endl;
    double gst;
    for(int i=0;i<prodlist.size();i++){
        bill+=prodlist[i];
    }
    cout<<"\n TOTAL BILL ::"<<bill<<endl;
    gst=0.18*bill;
    bill+=gst;
    cout<<"\n GST 18% :: "<<bill<<endl;
    cout<<"\n DISCOUNT OFFER FOR ABOVE 600 BILL"<<endl;
    if(bill>600){
        int d=85.00;
        bill=bill-d;
        cout<<"\n TOTAL BILL PAY::"<<bill<<endl;
    }
    else{
        cout<<"\n SORRY NO DISCOUNT .::"<<endl;
    }


}
void shop::add(){
    char a;
    int b;
    while(true){
        printf("\n ENTER SERIAL NO OF THAT PRODUCT TO ADD.:: ");
        cin>>b;
        switch (b){
            int q1;
            case 1:
            cout<<"\n ENTER QUANTITY"<<endl;
            cin>>q1;
            pqnt.push_back(q1);
            prodlist.push_back(180.00*q1);
            pname.push_back("COOKIES");
            break;
            case 2:
            int q2;
            cout<<"\n ENTER QUANTITY"<<endl;
            cin>>q2;
            pqnt.push_back(q2);
            prodlist.push_back(70.00*q2);
            pname.push_back("DISHWASH");
            break;
            case 3:
            int q3;
            cout<<"\n ENTER QUANTITY"<<endl;
            cin>>q3;
            pqnt.push_back(q3);
            prodlist.push_back(12.00*q3);
            pname.push_back("BRUSH");
            break;
            case 4:
            int q4;
            cout<<"\n ENTER QUANTITY"<<endl;
            cin>>q4;
            pqnt.push_back(q4);
            prodlist.push_back(109.00*q4);
            pname.push_back("FACEWASH");
            break;
            case 5:
            int q5;
            cout<<"\n ENTER QUANTITY"<<endl;
            cin>>q5;
            pqnt.push_back(q5);
            prodlist.push_back(80.00*q5);
            pname.push_back("CURTAIN");
            break;
            case 6:
            int q6;
            cout<<"\n ENTER QUANTITY"<<endl;
            cin>>q6;
            pqnt.push_back(q6);
            prodlist.push_back(90.00*q6);
            pname.push_back("MASSALA");
            break;
            default:
            break;
        }
        cout<<"\n ADD MORE::."<<endl;
        cin>>a;
        if(a=='y' || a=='Y'){
            continue;
        }
        else{
            break;
        }
        }
}
void shop::menu(){
    cout<<"\n SRNO   ITEMCODE   ITEMS   PRICE"<<endl;
    cout<<"\n"<<endl;
    cout<<"\n 1   101  COOKIES     180.00"<<endl;
    cout<<"\n 2   102  DISHWASH     70.00"<<endl;
    cout<<"\n 3   103  BRUSH        12.30"<<endl;
    cout<<"\n 4   104  FACEWASH    109.00"<<endl;
    cout<<"\n 5   105  CURTAIN(1m)  80.00"<<endl;
    cout<<"\n 6   106  MASSALA      90.00"<<endl;
   
}
int main(){
    shop s;
    int ch;
    while(true){
        char ch1;
        cout<<"\n 1.MENU "<<endl;
        cout<<"\n 2.ADD "<<endl;
        cout<<"\n 3.REMOVE "<<endl;
        cout<<"\n 4.CHECHKOUT "<<endl;
        cout<<"\n 5 SEARCH "<<endl;
        cin>>ch;
        switch (ch){
            case 1:
            s.menu();
            break;
            case 3:
            char rem;
            cout<<"\n WANT TO REMOVE FROM CART Y/N"<<endl;
            cin>>rem;
            if(rem=='Y' || rem=='y'){
                s.remove();
                break;


            }
            case 2:
            s.add();
            break;
            case 4:
            s.checkout();
            break;
            case 5:
            char m1[20];
            cout<<"\n ENTER NAME OF PRODUCT.:: "<<endl;
            cin>>m1;
            s.search(m1);
            break;
            default:
            break;
           
        }
        cout<<"\n  --> WANT TO CONTINE.:: Y/N "<<endl;
        cin>>ch1;
        if(ch1=='y' || ch1=='Y'){
            continue;
           
            }
            else{
                break;
            }
    }




}
