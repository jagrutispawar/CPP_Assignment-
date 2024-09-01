#include <iostream>
using namespace std;

int main() {
    // Define the quantities and prices
    int Notebooks = 15;
    int Pens = 20;
    double priceNotebook = 2.25;
    double pricePen = 0.75;

    // Calculate the total cost 
    double TotalCost = ( Notebooks * priceNotebook );
    double totalcost = ( Pens * pricePen );
    double totalCost = (Notebooks * priceNotebook) + (Pens * pricePen);

    // Output the total cost
    cout << "The Total cost of the Notebooks is Rs." << TotalCost << endl;
    cout << "The total cost of the Pens is Rs." << totalcost << endl;
    cout << "The total cost of the Pens is Rs. " << totalCost << endl;
    return 0;
}