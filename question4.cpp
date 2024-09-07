#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 4, 6};
    bool subset = true;
    for(int i = 0; i < arr2.size(); i++) {
        bool found = false;
        for(int j = 0; j < arr1.size(); j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            subset = false;
            break;
        }
    }
    if(subset) {
        cout << "The array is a subset" << endl;
    } else {
        cout << "The array is not a subset" << endl;
    }
}
