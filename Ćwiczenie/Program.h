#pragma once
#include <vector>
#include "Product.h"
using namespace std;

class Program
{
public:
	void start();

private:
	vector<Product> productList = {};
	void deleteProduct();
	void displayProducts();
	void addProduct();
};