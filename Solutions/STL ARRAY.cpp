#include<iostream>
#include<array>
using namespace std;

int main() {

    array<int,7> arr = {1,4,5,2,5,6,7};


    for (int i=0; i < arr.size(); i++){
        cout << arr[i] << "," ;
        
    }



    return 0;
}