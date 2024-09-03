#include <iostream>

using std::cout;

void bubSort(int arr[], int N = 10) {

    for (int i = 0; i < N - 1; i++) {

           for (int j = 0; j < N - i - 1; j++) {

                if (arr[j] > arr[j + 1]) {

                    int temp =      arr[j];
                    arr[j] =        arr[j + 1];
                    arr[j + 1] =    temp;

                }
           } 
    }
}



int main(void) {

    int arr[10] = {1, 5, 8, 3, 4, 7, 2, 6, 9, 10};
    
    cout << "Исходный массив:                   ";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " "; 
    }

    cout << '\n';

    bubSort(arr, 10);

    cout << "Массив после сортировки:           ";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << '\n';

    return 0;
}
