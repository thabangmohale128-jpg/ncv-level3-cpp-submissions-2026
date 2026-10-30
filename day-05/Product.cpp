#include <iostream>
#include <string>
#include <iomanip> // Needed for formatting price decimals (R849.99)
#include <limits>  // Needed to safely clear the input buffer

using namespace std;

class Product
{
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    Product();

    void setProductCode(string code);
    void setProductName(string name);
    void setPrice(double pr);
    void setQuantityInStock(int qty);

    string getProductCode();
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

Product::Product()
{
    productCode = "None";
    productName = "Unknown Product";
    price = 0.0;
    quantityInStock = 0;
}
void Product::setProductCode(string code)
{
    if (!code.empty()) productCode = code;
    else productCode = "None";
}
void Product::setProductName(string name)
{
    if (!name.empty()) productName = name;
    else productName = "Unknown Product";
}
void Product::setPrice(double pr)
{
    if (pr >= 0.0) price = pr;
    else price = 0.0;
}
void Product::setQuantityInStock(int qty)
{
    if (qty >= 0) quantityInStock = qty;
    else quantityInStock = 0;
}
string Product::getProductCode() { return productCode; }
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }

// GetProductData -  via setters (uses reference &)
void GetProductData(Product &p)
{
    string tempCode, tempName;
    double tempPrice;
    int tempQty;

    cout << "Enter Product Code: ";
    getline(cin, tempCode);
    p.setProductCode(tempCode);

    cout << "Enter Product Name: ";
    getline(cin, tempName);
    p.setProductName(tempName);

    cout << "Enter Price: R";
    cin >> tempPrice;
    p.setPrice(tempPrice);

    cout << "Enter Quantity in Stock: ";
    cin >> tempQty;
    p.setQuantityInStock(tempQty);

    // Clear residual characters from the buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;
}

// DisplayProduct - Displays all product data via getters
void DisplayProduct(Product p)
{
    cout << "Product Code: " << p.getProductCode() << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << p.getPrice() << endl;
    cout << "Quantity in Stock: " << p.getQuantityInStock() << endl;
    cout << "-----------------------------------\n";
}

// prodCompare - Checks if both product names start with the same character
void prodCompare(Product p1, Product p2)
{
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    // Guard clause to ensure names aren't empty strings before reading index
    if (name1.empty() || name2.empty())
    {
        cout << "Comparison failed: One or both product names are invalid.\n";
        return;
    }

    // Grab first character (converted to lowercase to ensure a case-insensitive match)
    char firstChar1 = tolower(name1[0]);
    char firstChar2 = tolower(name2[0]);

    cout << "=== CHECK NAME MATCH ===\n";
    if (firstChar1 == firstChar2)
    {
        cout << "Success: Both product names ('" << name1 << "' and '" << name2
             << "') start with the same character '" << name1[0] << "'.\n";
    }
    else
    {
        cout << "Notice: The product names do not start with the same character.\n";
    }
    cout << "-----------------------------------\n";
}
// MAIN FUNCTION EXECUTE
int main()
{
    // Force decimal formatting for currency displays
    cout << fixed << setprecision(2);

    // Instantiate product objects
    Product product1;
    Product product2;

    // Capture product data using the non-member function
    cout << "=== ENTER DETAILS FOR PRODUCT 1 ===\n";
    GetProductData(product1);

    cout << "=== ENTER DETAILS FOR PRODUCT 2 ===\n";
    GetProductData(product2);

    // Print output interface using the non-member function
    cout << "-----------------------------------\n";
    cout << "         REGISTERED PRODUCTS       \n";
    cout << "-----------------------------------\n";
    DisplayProduct(product1);
    DisplayProduct(product2);

    // Run the comparison logic function
    prodCompare(product1, product2);

    return 0;
}
