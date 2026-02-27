#include <iostream>
using namespace std;


template <typename T>
void swapItems(T& firstValue, T& secondValue)
{
    T temporary = firstValue;
    firstValue = secondValue;
    secondValue = temporary;
}


template <typename T>
int findSmallestIndex(const T arr[], int startPos, int totalSize)
{
    T smallestValue = arr[startPos];
    int smallestIndex = startPos;

    for (int i = startPos + 1; i < totalSize; i++)
    {
        if (arr[i] < smallestValue)
        {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }

    return smallestIndex;
}


template <typename T>
void selectionSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smallestPos = findSmallestIndex(arr, i, size);
        swapItems(arr[i], arr[smallestPos]);
    }
}


template <typename T>
void displayArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    
    int numbers[] = {5, 2, 9, 1, 3};
    int numbersSize = 5;

    selectionSort(numbers, numbersSize);
    cout << "Sorted integers: ";
    displayArray(numbers, numbersSize);

    
    double decimals[] = {3.5, 1.2, 4.8, 2.1};
    int decimalsSize = 4;

    selectionSort(decimals, decimalsSize);
    cout << "Sorted doubles: ";
    displayArray(decimals, decimalsSize);

    char letters[] = {'z', 'a', 'k', 'b'};
    int lettersSize = 4;

    selectionSort(letters, lettersSize);
    cout << "Sorted characters: ";
    displayArray(letters, lettersSize);

    return 0;
}