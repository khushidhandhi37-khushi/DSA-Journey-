#include <iostream>
using namespace std;
int main(){
    int arr[5]={4,5,2,8,7};
    int largest=arr[5-2];
    int second_largest=0;
    for (int i=5-1; i>=0; i--){
        if (arr[i]>second_largest && largest> arr[i]){
            second_largest=arr[i];
            cout<<"second largest:"<<second_largest;
            break;
        }
    }
    return 0;
}
