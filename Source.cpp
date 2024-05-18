#include <iostream>
using namespace std;

void shiftZeroes(int* numbers, int size){
    for (int i = 0; i < size; i++)
    {
        if(numbers[i] == 0){
            int j = i + 1;
            for (; numbers[j] == 0; j++)
                ;
            if(j >= size)
                break;
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }
}

int main(){

    int numbers[] = {5, 0, 6, 0, 0, 7, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    shiftZeroes(numbers, size);

    cout << "Array after shifting 0's: ";
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}