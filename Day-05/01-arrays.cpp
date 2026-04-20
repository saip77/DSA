#include<bits/stdc++.h>
using namespace std;

int main(){

    //Declaration & Initialization
    int arr[5] = {1,2,3,4,5};

    //Printing 
    cout<<"Elements of array: ";
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //Basic Operations: Linear Search
    int x=3;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            cout<<"Element found at index: "<<i<<endl;
        }
    }
    cout<< "Element not found"<<endl;

    //Basic Operation: Find Maximum
    int max = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Maximum element: "<<max<<endl;

    //Basic Operation: Find Minimum
    int minElement = INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<minElement){
            minElement = arr[i];
        }
    }
    cout<<"Minimum element: "<<minElement<<endl;
    
    //Find sum of all elements
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all elements: "<<sum<<endl;

    //Check if array is sorted
    bool isSorted = true;
    for(int i=0; i<5; i++){
        if(arr[i]>arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

    //Reverse an array
    int i=0;
    int j=4;
    while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Reversed array: ";
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}