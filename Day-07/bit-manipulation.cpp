#include<iostream>
using namespace std;
bool getBit(int num, int index){
    return (num&(1<<index));   
}
int setBit(int num, int index){
    return num | (1<<index);
}
int clearBit(int num, int index){
    return num & ~(1<<index);
}
int main(){
    int n;
    int i;
    cout<<"Enter the number and position to be checked\n";
    cin>>n>>i;
    if(getBit(n,i)){
        cout<<"Bit is set\n";
    }
    else{
        cout<<"Bit is not set\n";
    }
    cout<<"Enter the number and position to be set\n";
    cin>>n>>i;
    n=setBit(n,i);
    cout<<"New number is "<<n<<endl;
    cout<<"Enter the number and position to be cleared\n";
    cin>>n>>i;
    n=clearBit(n,i);
    cout<<"New number is "<<n<<endl;

    return 0;
}