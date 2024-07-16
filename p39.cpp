#include <iostream>
using namespace std;
//it returns only pairs of 2 equal to sum

void findPairsWithSum(int arr[], int n, int target_sum) {
    cout << "Pairs with sum " << target_sum << ": ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
            }
        }
    }
    cout << endl;
}

int main() {
    int n, target_sum;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target_sum;

    findPairsWithSum(arr, n, target_sum);

    return 0;
}
