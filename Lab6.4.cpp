#include <iostream>
#include <string>

using namespace std;

template <typename T>
T Max(const T arr[], const int size);

template <typename T>
void Print(const T arr[], const int size);

int main()
{
    int arr[] = { 1, 2, 5, 7, -2, -55, 5, 8, 88, -536 };
    Print(arr, size(arr));
    cout << "Max = " << Max(arr, size(arr)) << endl << endl;;

    double arrSecond[] = { 1.1, 2.5, 5.7, 7.6, -27.7, -55.45, 5.3, 8.45, 89.78, -536.46 };
    Print(arrSecond, size(arrSecond));
    cout << "Max = " << Max(arrSecond, size(arrSecond)) << endl << endl;

    long arrThird[] = { 14533, 23453, 53543, 74534536, -6423124, 37453, 435463,
                        3453453,4534534, 743364334 };
    Print(arrThird, size(arrThird));
    cout << "Max = " << Max(arrThird, size(arrThird)) << endl << endl;

    short arrFour[] = { 145, 23, 543, 436, -14, 53, 4463,
                        53,434, 34 };
    Print(arrFour, size(arrFour));
    cout << "Max = " << Max(arrFour, size(arrFour)) << endl << endl;

    return 0;
}

template <typename T>
T Max(const T arr[], const int size)
{
    T maxValue = arr[0];

    for (int i = 0; i < size; i++)
        if (arr[i] > maxValue)
            maxValue = arr[i];

    return maxValue;
}
template <typename T>
void Print(const T arr[], const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";
    cout << endl;
}