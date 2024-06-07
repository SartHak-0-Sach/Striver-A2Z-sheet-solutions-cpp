/*
    Time Complexity : O(n ^ 2)
    Space Complexity : O(1)
    where n is size of the input array
*/

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			// If jth element is greater than 'j + 1' th element
			// swap them
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "The sorted array is: ";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
