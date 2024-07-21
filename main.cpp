#include <iostream>
using namespace std;
// Pseudocode PLD Chapter 6 #2a & 2b, pg. 267
// Start
// Declarations
// num SIZE = 12
// num numbers[SIZE]
// num value = 0
// num counter = 0
// num total = 0
// num average = 0
// num diffFromAvg = 0
// num SENTINEL = -1
//
// output "Please enter a positive number: "
// input value
// while ((counter < SIZE) AND (value <> SENTINEL) )
// total = total + value
// numbers[counter] = value
// counter = counter + 1
// if (counter <> SIZE)
// output "Please enter a positive number: "
// input value
// endif
// endwhile
//
// if (counter > 0) then
// average = total/counter
// for i = 0 to counter - 1
// diffFromAvg = numbers[i] - average
// output "Number[",i,"]: ",numbers[i]," Difference from Average
//    is ",diffFromAvg
// endfor
// else
// output "Processing incomplete. No values in the array."
// endif
// Stop
int main() {

    const int SIZE = 12;
    int numbers[SIZE];
    int value = 0;
    //had to change counter to count because my IDE would not run the code otherwise
    int count = 0;
    int total = 0;
    int average = 0;
    int diffFromAvg = 0;
    const int SENTINEL = -1;

    cout << "Please enter a positive integer: " << endl;
    cin >> value;

    while (count < SIZE && value != SENTINEL) {
        total = total + value;
        numbers[count] = value;
        count = count + 1;
        if (count != SIZE) {
            cout << "Please enter a positive number: " << endl;
            cin >> value;
        }
    }

    if (count > 0){
        average = total/count;
        for (int i = 0; i < count; ++i){
            diffFromAvg = numbers[i] - average;
            cout << "Number [" << i << "]: " << numbers[i] << "diffeence from average is: " << diffFromAvg << endl;
        }
    } else{
        cout << "Processing incomplete. No values in the array." << endl;
    }

    return 0;
}
