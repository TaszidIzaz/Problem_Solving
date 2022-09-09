#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int n;
    cin >> n;

    for (int i =0; i<n; i++){
        int no;
        cin >> no ;

        v.push_back(no);
        cout << "Capacity" << v.capacity() << " Size " << v.size() << endl;
         
    }

    return 0;
}