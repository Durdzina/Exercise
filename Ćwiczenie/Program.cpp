#include <iostream>
#include <string>
#include "Program.h"
using namespace std;

void Program::start()
{
    int input;
    while (true)
    {
        cout << "Wybierz opcje: " << endl;
        cout << "1. Wyswietl wszystkie produkty" << endl;
        cout << "2. Dodaj produkt" << endl;
        cout << "3. Usun produkt" << endl;
        cout << "Wybierz: ";
        cin >> input;

        switch (input)
        {
        case 1:
            displayProducts();
            break;
        case 2:
            addProduct();
            break;
        case 3:
            deleteProduct();
            break;
        default:
            cout << "Niepoprawny wybor. Sprobuj ponownie." << endl;
            break;
        }
    }
}
void Program::displayProducts()
{
    cout << "Lista wszystkich produktow: " << endl;
    for (int i=0; i<productList.size();i++)
    {
        cout << productList[i].toString();
    }
}
    void Program::addProduct()
{
    string name, description;
    long price;

    cout << "Podaj Nazwe produktu: ";
    cin >> name;
    cout << "Podaj opis produktu: ";
    cin >> description;
    cout << "Podaj cene produktu: ";
    cin >> price;

    Product newProduct(productList.size(), name, description, price);
    productList.push_back(newProduct);
    cout << "Produkt zostal dodany." << endl;
}
void Program::deleteProduct()
{
    int id;
    cout << "Podaj ID produktu do usuniêcia: ";
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
