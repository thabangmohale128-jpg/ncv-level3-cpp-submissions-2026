#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Product
{
private:
    // Data members matching requirements
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor initializing to sensible defaults
    Product();

    // Public setter method with validation
    void setProduct(string name, double pr, int qty);

    // Getters to view values in main
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

// Implement default constructor
Product::Product()
{
    productName = "";
    price = 0.0;
    quantityInStock = 0;
}

// Implement setter method with verification checks
void Product::setProduct(string name, double pr, int qty)
{
    // Validate: name cannot be empty
    if (!name.empty()) {
        productName = name;
    } else {
        productName = "Unknown Product";
    }

    // Validate: price must not be negative
    if (pr >= 0.0) {
        price = pr;
    } else {
        price = 0.0;
    }

    // Validate: quantity must not be negative
    if (qty >= 0) {
        quantityInStock = qty;
    } else {
        quantityInStock = 0;
    }
}

// Getters
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }

int main()
{
    string inputName;
    double inputPrice;
    int inputQty;

    // Create an instance of Product (Default constructor initializes fields)
    Product prod;

    cout << "--- SPAZA SHOP  ---\n\n";

    // Gather values from user
    cout << "Enter product name: ";
    getline(cin, inputName);

    cout << "Enter product price: ";
    cin >> inputPrice;

    cout << "Enter quantity in stock: ";
    cin >> inputQty;

    // Pass data through setter logic for validation
    prod.setProduct(inputName, inputPrice, inputQty);

    // Display validated data output
    cout << "\n--- Saved Product Record ---\n";
    cout << "Product Name : " << prod.getProductName() << endl;
    cout << "Price        : R" << prod.getPrice() << endl;
    cout << "Stock Qty    : " << prod.getQuantityInStock() << endl;

    return 0;
}
