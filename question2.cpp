#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> res(1, 1);
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for(int i = 2; i <= num; i++){
        int sum = 0;
        for(int j = 0; j < res.size(); j++){
            int tmp = res[j] * i + sum;
            res[j] = tmp % 10;
            sum = tmp / 10;
        }
        while(sum != 0){
            res.push_back(sum % 10);
            sum /= 10;
        }
    }
    for(int i = res.size() - 1; i >= 0; i--) 
        cout << res[i];
    cout << endl;
}