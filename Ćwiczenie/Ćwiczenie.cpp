#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

void displayAllProducts(const vector<Product>& productList)
{
    cout << "Lista wszystkich produktów: " << endl;
    for (const auto& product : productList)
    {
        cout << "ID: " << product.getId() << ", Name: " << product.getName() << ", Description: " << product.getDescription() << ", Price: " << product.getPrice() << endl;
    }
}
void addProduct(vector<Product>& productList)
{
    int id;
    string name, description;
    long price;

    cout << "Podaj ID produktu: " << endl;
    cin >> id;
    cin.ignore();
    cout << "Podaj Nazwe produktu: ";
    getline(cin, name);
    cout << "Podaj opis produktu: ";
    getline(cin, description);
    cout << " Podaj cene produktu: ";
    cin >> price;

    Product newProduct(id, name, description, price);
    productList.push_back(newProduct);
    cout << "Produkt został dodany." << endl;
}
void deleteProduct(vector<Product>& productList)
{
    int id;
    cout << "Podaj ID produktu do usunięcia: ";
    cin >> id;

    auto it = find_if(productList.begin(), productList.end(), [id](const Product& p) { return p.getId() == id; });
    if (it != productList.end())
    {
        productList.erase(it);
        cout << "Produkt zostal usuniety." << endl;
    }
    else
    {
        cout << "Nie znaleziono produktu o podanym ID." << endl;
    }
}
void program()
{
    vector<Product> productList;

    string input;
    while (true)
    {
        cout << "Wybierz opcje: " << endl;
        cout << "1. Wyswietl wszystkie produkty" << endl;
        cout << "2. Dodaj produkt" << endl;
        cout << "3.Usun produkt" << endl;
        cout << "Wybierz: ";
        getline(cin, input);

        if (input == "1")
        {
            displayAllProducts(productList);
        }
        else if (input == "2")
        {
            addProduct(productList);
        }
        else if (input == "3")
        {
            deleteProduct(productList);
        }
        else
        {
            cout << "Niepoprawny wybor. Sprobuj ponownie." << endl;
        }
    }
}
int main()
{
    program();   
    return 0;
}

