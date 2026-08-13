#include <iostream>
using namespace std;
int main(){
    int arr[10],pos=0,num;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to be checked:";
    cin>>num;
    for(int i=0;i<10;i++){
        if(num==arr[i]){
            pos=1;
            cout<<"Location:"<<i<<endl;
            break;
        }
    }
    if(pos==0){
cout<<"Number not found";
    }

}