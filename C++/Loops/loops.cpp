WHILE LOOP

#include<iostream>
using namespace std;
int main(){
    int teacups; 


    cout<<"enter the number of tea cups to serve";
    cin>> teacups;
    while(teacups > 0){
cout<<"servining cup of tea \n"<<teacups<<"reamaning"<<endl;
teacups--;
    }
    cout<<"all tea cups are served"<<endl;
    return 0;
}}