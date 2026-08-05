#include<iostream>
using namespace std;

int main(){

    int s_age,r_age,a_age;

    cout<< "enter shyam's age: ";
    cin>>s_age;
    cout<< "enter ram's age: ";
    cin>>r_age;
    cout<< "enter ajay's age: ";
    cin>>a_age;

    if((s_age < r_age) and s_age < a_age){
        cout<<"shyam's age is least";
    }
    else if(r_age < s_age and r_age < a_age){
        cout<< "Ram's age is least";
    }
    else{
        cout<< "Ajay's age is least";
    }
    
}