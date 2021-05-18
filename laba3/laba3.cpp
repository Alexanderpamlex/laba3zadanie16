#include <iostream>
using namespace std;
void Avg(int* const arr, const int size, int& average)
{

    for (int i = 0; i < size; i++)
    {
        average += arr[i];
    }
    average /= size;
}
void sort(int* arr, const int size, int& average)
{

    for (int i = 1; i < size; i++)
    {
        if (arr[i] % 2 == 0) { arr[i] = average; }
    }

}
int main()
{
    srand(time(NULL));
    int size = 5;
    int* arr = new int[size];
    int average = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 11;
    }
    cout << "Before////////////////////////////////////////////////" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) { cout << "\t"; } cout << arr[i] << endl;

    }

    Avg(arr, size, average);
    sort(arr, size, average);
    cout << "After/////////////////////////////////////////////////" << endl;
    cout << "Average = " << average << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == average) { cout << "\t"; } cout << arr[i] << endl;

    }
    delete[] arr;


}
