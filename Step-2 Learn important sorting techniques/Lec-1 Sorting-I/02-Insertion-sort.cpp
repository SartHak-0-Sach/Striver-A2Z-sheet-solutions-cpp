/*
    Time Complexity: O( N ^ 2 )
    Space Complexity: O( N )

    Where 'N' is the size of the array 'arr'.
*/

#include <iostream>
#include <vector>
using namespace std;

void insertionSortHelper(vector<int> &arr, int i, int n)
{

	// Base Case: i == n.
	if (i == n) {
		return;
	}

	int j = i;

	while (j > 0 && arr[j - 1] > arr[j]) {

		// Swap 'arr[j]' and 'arr[j-1]', and decrement 'j'.
		swap(arr[j], arr[j - 1]);
		j--;
	}

	// Call recursive function for the next element.
	insertionSortHelper(arr, i + 1, n);
}
void insertionSort(vector<int> &arr, int n)
{

	// Call recursive function.
	insertionSortHelper(arr, 0, n);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of elements in the array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array"<<endl;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "The sorted array is: ";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}