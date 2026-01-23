#include<iostream>
#include<vector>
using namespace std;

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

bool printSpiral(int arr[][3], int n) {
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        // 1️⃣ Left → Right
        for (int i = left; i <= right; i++) {
            if (arr[top][i] == 0)
                return true;
        }
        top++;

        // 2️⃣ Top → Bottom
        for (int i = top; i <= bottom; i++) {
            if (arr[i][right] == 0)
                return true;
        }
        right--;

        // 3️⃣ Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                if (arr[bottom][i] == 0)
                    return true;
            }
            bottom--;
        }

        // 4️⃣ Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                if (arr[i][left] == 0)
                    return true;
            }
            left++;
        }
    }
    return false; // 0 not found
}


        // vector<vector<int>> ans(n, vector<int>(n));

        // int top = 0, bottom = n - 1;
        // int left = 0, right = n - 1;

        // int num = 1; // numbers from 1 to n*n

        // while (top <= bottom && left <= right) {

        //     // Left → Right
        //     for (int i = left; i <= right; i++)
        //         ans[top][i] = num++;
        //     top++;

        //     // Top → Bottom
        //     for (int i = top; i <= bottom; i++)
        //         ans[i][right] = num++;
        //     right--;

        //     // Right → Left
        //     if (top <= bottom) {
        //         for (int i = right; i >= left; i--)
        //             ans[bottom][i] = num++;
        //         bottom--;
        //     }

        //     // Bottom → Top
        //     if (left <= right) {
        //         for (int i = bottom; i >= top; i--)
        //             ans[i][left] = num++;
        //         left++;
        //     }
        // }

        // return ans;

int main(){
    int arr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
    if (printSpiral(arr, 3))
        cout << "0 found in spiral traversal";
    else
        cout << "0 not found";
    return 0;
}