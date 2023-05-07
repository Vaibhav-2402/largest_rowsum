#include<iostream>
#include<vector>
using namespace std;

int lar_rowsum(int arr[][3], int n, int m) {
    int temp = 0;
    int maxi = INT16_MIN;

    for(int i = 0; i<3; i++) {
        int sum = 0;
        for(int j = 0; j<3; j++) {
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
            temp = i+1;
        }
    }
    return temp;
}

int main() {

    int arr[3][3];

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cout << arr[i][j];
        }
        cout<<endl;
    }

    int l_num = lar_rowsum(arr, 3, 3);
    cout << "the largest row sum is : " << l_num;

    return 0;
}