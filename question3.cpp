#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {9, 4, 9, 6, 7, 4};
    int n = arr.size();

    vector<int> count(n, 0); // Frequency vector initialized to 0

    // Count the frequency of each element
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    // Find the first element with frequency 1
    for(int i = 0; i < n; i++) {
        if(count[i] == 1) {
            cout << "The first non-repeating element is: " << arr[i] << endl;
            break;
        }
    }
}
