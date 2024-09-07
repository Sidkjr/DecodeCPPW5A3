#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int count = 0;
    int elem = 0;
    int last = n - 1;
    int first = elem + 1;
    int x;
    cout << "Enter the target value: ";
    cin >> x;

    cout << "Enter the array elements: ";

    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        arr.push_back(q);
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n - 2; i++) {
        while(first < last) {
            if(arr[i] + arr[first] + arr[last] == x) {
                count++;
                last--;
                continue;
            }
            else if(arr[i] + arr[first] + arr[last] < x) {
                first++;
                continue;
            }
            else {
                last--;
                continue;
            }

        }
        elem = i + 1;
        first = elem + 1;
        last = n - 1;
    }

    cout << "The total no. of triplets giving target are/is: " << count << "\n";
}