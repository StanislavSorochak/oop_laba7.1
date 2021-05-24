#include <iostream>
#include <array> //one of the standatr template library
#include <time.h>

using namespace std;

void Create(array<int, 100>& arr, int n);
void Print(array<int, 100>& arr, int n);
void SortByÂescending(array<int, 100>& arr, int n);

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter a size of array: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);

    cout << "Sort by descending: ";
    SortByÂescending(arr, n);
    Print(arr, n);

    return 0;
}

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
void Print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void SortByÂescending(array<int, 100>& arr, int n) //çà ñïàäàííÿì
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}