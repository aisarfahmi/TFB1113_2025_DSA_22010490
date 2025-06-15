/*
ID = 22010490
Name = Aisar Fahmi bin Zamri
Lab = 1
*/

#include <iostream>
#include <string>

using namespace std;
struct Student{
int id;
string name;
int phone;
string email;

};

int main(){
    Student students[3];
    
    for(int i=0;i<3;i++){
        cout<<"Enter ID for Student:";
        cin>> students[i].id;
        cout<<"Enter Student Name:";
        cin>> students[i].name;
        cout<<"Enter Student Phone Number:";
        cin>> students[i].phone;
        cout<<"Enter Student Email:";
        cin>> students[i].email;
    }
    for (int i=0;i<3;i++){
        
        cout <<"************************"<<endl;
        cout <<"Id:"<<students[i].id<<endl;
        cout <<"name:"<<students[i].name<<endl;
        cout <<"contact:"<<students[i].phone<<endl;
        cout <<"email:"<<students[i].email<<endl;
        cout <<"************************"<<endl;
        
        
        
    }
        
    return 0;
}
