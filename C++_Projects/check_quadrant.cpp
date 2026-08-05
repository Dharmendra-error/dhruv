#include<iostream>
using namespace std;

int main(){
    int x,y;

    cout<< "give x value: ";
    cin>>x;
    cout<<"give y value: ";
    cin>>y;

    if(x>0 and y>0){
        cout << "first quadrant";
    }
    else if(x<0 and y>0){
        cout<<" second quadrant";
    }
    else if(x<0 and y<0){
        cout<<"third quadrant";
    }
    else if(x>0 and y<0){
        cout<<"forth quadrant";
    }
    else{
        cout<< "Invalid input for checking the quadrants";
    }

}
