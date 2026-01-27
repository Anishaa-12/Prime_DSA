#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        if(i==1){
            for(int j=1;j<=2*m-1;j++){
                cout<<"*"<<"\t";
            }
        }
        else{
            //left star
        for(int j=1;j<=m-i+1;j++){
            cout<<"*"<<"\t";
        }
        //spaces
        for(int j=1;j<=2*i-3;j++){
            cout<<"\t";
        }
        //right star
        for(int j=1;j<=m-i+1;j++){
            cout<<"*\t";
        }
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        if(i==1){
            for(int j=1;j<=2*m-1;j++){
                cout<<"*\t";
            }
        }
        else{
            //left star
        for(int j=1;j<=m-i+1;j++){
            cout<<"*\t";
        }
        //spaces
        for(int j=1;j<=2*i-3;j++){
            cout<<"\t";
        }
        //right star
        for(int j=1;j<=m-i+1;j++){
            cout<<"*\t";
        }
        }
        cout<<endl;
    }
   
    return 0;
}