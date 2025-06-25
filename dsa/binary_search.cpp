#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int counter = 0;
    int ans = -1;
    while (low <= high) {
        counter++;
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid; break;
            break;
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "loop run " << counter << " time(s)." << endl;
    if (ans != -1) return ans;
    return -1;
}

int main() {
    // vector<int> arr = {1, 3, 5, 7, 9, 12};
    vector<int> arr(3000000);
    iota(arr.begin(), arr.end(), 1);
    int target = 3000000;
    int index = binarySearch(arr, target);
    if (index != -1)
        cout << arr[index] << " is found.\n";
    else
        cout << "not found.\n";
}