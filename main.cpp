#include <iostream>

int main() {

    std::cout << "Specify the number of rows: " << std::endl;
    short numRows;
    std::cin >> numRows;

    std::cout << "Specify the number of columns: " << std::endl;
    short numColumns;
    std::cin >> numColumns;

    short arr[numRows][numColumns];

    short completionArr(short &arr);
    {
        srand(time(nullptr));
        for (short i = 0; i < numRows; i++) {
            for (short j = 0; j < numColumns; j++) {
                arr[i][j] = rand() % 40 + 10;
            }
        }
    }
    void printArr(short &arr);
    {
        for (short i = 0; i < numRows; i++) {
            for (short j = 0; j < numColumns; j++) {
                std::cout << arr[i][j];
            }
            std::cout << std::endl;
        }
    }
    completionArr(short &arr);
    printArr(short &arr);




    std::cout << "Finish" << std::endl;
    return 0;
}
