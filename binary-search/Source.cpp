#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int> array, int target);

int main()
{
    cout << binarySearch({ 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 }, 33) << " ";
    
    return 0;
}

int binarySearch(vector<int> array, int target) {
    // Write your code here.
    int leftIdx = 0;
    int rightIdx = array.size() - 1;
    while (leftIdx <= rightIdx)
    {
        int middle = (leftIdx + rightIdx) / 2;

        if (array[middle] == target)return middle;
        if (array[middle] < target) leftIdx = middle + 1;
        else if (array[middle] > target) rightIdx = middle - 1;
    }
    return -1;
}
