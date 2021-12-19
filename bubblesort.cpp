#include <iostream>
#include <string>

using namespace std;
        
int main() {

    //int numbers[] = {12,34,11,5,67,8,35,28,11,99,76,72,1};
    //int numbers[] = {12,14,16,17,18,20,21,28,31,42,54,72,81};
    int numbers[] = {81,71,69,65,55,43,40,28,25,23,19,15,11};
    int tempNum;

    cout << "\nOsorterad lista: ";
    for(int m=0; m<12; m++) {
        cout << numbers[m] << " ";
    }

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++){
            if(numbers[j] > numbers[j+1]) {
                tempNum = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tempNum;
            }

            cout << "\nLista efter omgång nr " << i << ":" << j << " ";

            for(int m=0; m<12; m++) {
                cout << numbers[m] << " ";
            }
        }
    }

    cout << "\nSorterad lista: ";

    for(int m=0; m<12; m++) {
        cout << numbers[m] << " ";
    }

    return 0;
}