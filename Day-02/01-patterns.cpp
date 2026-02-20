// Star patterns

#include<iostream>
using namespace std;

void printSquare(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
} 

void printIncreasing(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void printDecreasing(int n){
    for(int i=1; i<=n; i++){
        for(int j=n ; j>=i; j--){
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void printRightSideTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"   ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void printHillPattern(int n){
    for(int i=1; i<=n; i++){
       for(int j=n; j>=i; j--){
            cout<<"   ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*  ";
        }
        for(int j=2; j<=i; j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}

void printPlus(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==(n/2)+1 || j==(n/2)+1){
                cout<<"*  ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}

void printDiagonal(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1)
            {
                cout<<"*  ";
            }
            else{
                cout<<"   ";

            }
                
        }
        cout<<endl;
    }
}

void printHourGlass(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1 || j==1 || j==n)
            {
                cout<<"*  ";
            }
            else{
                cout<<"   ";

            }
        }
        cout<<endl;
    }
}
int main(){
    printSquare(5);
    cout<<endl;
    printIncreasing(5);
    cout<<endl;
    printDecreasing(5);
    cout<<endl;
    printRightSideTriangle(5);
    cout<<endl;
    printHillPattern(5);
    cout<<endl;
    printPlus(5);
    cout<<endl;
    printDiagonal(5);
    cout<<endl;
    printHourGlass(5);
    return 0;
}