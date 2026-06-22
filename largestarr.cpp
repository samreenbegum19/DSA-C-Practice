#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,25,8,40,15};
    int largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"largest number is:"<< largest;
    return 0;
}