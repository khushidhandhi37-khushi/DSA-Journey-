#include <iostream>
using namespace std;
int main(){
    int arr[]={6,3,2,2,99};
    int largest=arr[0];
    for(int i=0; i<6; i++){
        if(arr[i]>largest){
            cout<<"largest number:"<<arr[i];
        }
    }
    return 0;
}
