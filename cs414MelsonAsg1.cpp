// Haley Melson
// CS414 Asg 1

#include <iostream>
#include <cstdlib>

void FillWithRandomNumbers(int data[], int size) {
    for (int i = 0; i < size; ++i) {
        data[i] = std::rand() % 100000;
    }
}

void SortTheArray(int data[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int sorting = 0; sorting < size - i - 1; ++sorting) {
            if (data[sorting] > data[sorting + 1]) {
                int arraySort = data[sorting];
                data[sorting] = data[sorting + 1];
                data[sorting + 1] = arraySort;
                sorting = 1;
            }
        }
    }      
}

int main() {
    const int randomNumbersSize = 2;
    int data[randomNumbersSize];
    std::srand(std::time(nullptr));

    FillWithRandomNumbers(data, randomNumbersSize);
    std::cout << "Random Numbers: ";
    for (int i = 0; i < randomNumbersSize; ++i) {
        std::cout << data[i] << std::endl;
    }
    std::cout << std::endl;
    
    SortTheArray(data,randomNumbersSize);
    std::cout << "Random Numbers Sorted: ";
    for (int i = 0; i < randomNumbersSize; ++i) {
        std::cout << data[i] << std::endl;
    }

    return 0;
}
