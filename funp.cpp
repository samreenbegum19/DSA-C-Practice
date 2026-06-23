#include<bits/stdc++.h>
using namespace std;
void printName( string name){//void function doesnt return anything it simoly does our work.
    cout<<"hey"<<name<<endl;
}
int main()
{
    string name1,name2;
    cin>>name1;
    cout<<"enter the first name:";
    printName(name1);

    cin>>name2;
    cout<<"enter the second name:";
    printName(name2);

    return 0;
}