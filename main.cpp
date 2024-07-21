//Start
// Declarations
// num SIZE = 5
// num COFFEEPRICE = 2.00
// string products[SIZE]="Whipped cream", "Cinnamon", "Chocolate
//sauce", "Amaretto", ""Irish whiskey"
// num prices[SIZE]=0.89, 0.25, 0.59, 1.50, 1.75
// num totalPrice = 0
// num choice = 0
// num SENTINEL = -1
//
// while (choice <> SENTINEL))
// output "Please select an item from the Product menu by selecting
//the item number (1 - 5) or -1 to terminate: "
// output "Product Price ($)"
// output "======= ========="
// output "1. Whipped cream 0.89"
// output "2. Cinnamon 0.25"
// output "3. Chocolate sauce 0.59"
// output "4. Amaretto 1.50"
// output "5. Irish whiskey 1.75"
// output "Please enter a positive number: "
// input choice
// if (choice <> -1) then
// if ((choice >= 1) and (choice <= 5)) then
// totalPrice = totalPrice + prices[choice-1]
// output "Item number ", choice,": ", products[choice-1], " has
//been added"
// else
// output "Item number ",choice, " is not valid", "Sorry we do
//not carry that item"
// endif
// endif
// endwhile
// totalPrice = totalPrice + COFFEEPRICE
// output "Total price of order is ",totalPrice
// output "Thanks for purchasing from Jumpin Jive Coffee Shop"
// Stop
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SIZE = 5;
    const double COFFEEPRICE = 2.00;
    string products[SIZE] = {"Whipped cream", "Cinnamon", "Chocolate sauce", "Amaretto", "Irish whiskey"};
    double prices[SIZE] = {0.89, 0.25, 0.59, 1.50, 1.75};
    double totalPrice = 0;
    int choice = 0;
    const int SENTINEL = -1;

    while (choice != SENTINEL){
        cout << "Please select an item from the Product menu by selecting the item number (1 - 5) or -1 to terminate: " << endl;
        cout << "Product Price ($)" << endl;
        cout << "======= =========" << endl;
        cout << "1. Whipped cream 0.89" << endl;
        cout << "2. Cinnamon 0.25" << endl;
        cout << "3. Chocolate sauce 0.59" << endl;
        cout << "4. Amaretto 1.50" << endl;
        cout << "5. Irish whiskey 1.75" << endl;
        cout << "Please enter a positive number: " << endl;
        cin >> choice;
        if (choice != -1){
            if ((choice >= 1) && (choice <= 5)){
                totalPrice = totalPrice + prices[choice-1];
                cout << "Item number " << choice << ": " << products[choice-1] << " has been added" << endl;
            } else {
                cout << "Item number " << choice << " is not valid. Sorry we do not carry that item." << endl;
            }
        }
    }

    totalPrice = totalPrice + COFFEEPRICE;
    cout << "Total price of order is " << totalPrice << endl;
    cout << "Thanks for purchasing from Jumpin Jive Coffee Shop" << endl;

    return 0;
}
