#ifndef MARKET_H
#define MARKET_H

#include "src/system.h"
#define MAX_PRODUCTS 100

void AddProduct();
void SortProduct();
void FindProduct();
void ShowProducts();

struct Product
{
    char name[MAX_PRODUCTS];
    double price;
};

Product products[MAX_PRODUCTS];
int ProductCount = 0;

void AddProduct()
{
    if (ProductCount < MAX_PRODUCTS)
    {
        Product product;

        // Give name to product
        std::cout << "Enter product name: ";
        std::cin.ignore();
        std::cin.getline(product.name, MAX_PRODUCTS);

        // Give price to product
        std::cout << "Enter product price: ";
        std::cin >> product.price;
        products[ProductCount] = product;

        // Making space
        std::cout << '\n';
    }
    else
    {
        std::cout << "Max product reached, cannot add more";
    }
}

void SortProduct()
{
    for (int i = 1; i < ProductCount; i++)
    {
        Product key = products[i];
        int j = i - 1;
        while (j >= 0 && strcmp(products[j].name, key.name) > 0)
        {
            products[j + 1] = products[j];
            j = j - 1;
        }
        products[j + 1] = key;
    }
    //* This sort using the bubble sort
    // for (int i = 0; i < n - i - 1; i++)
    // {
    //     bool swapped = false;
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (product[j + 1] < product[j])
    //         {
    //             swap(product[j + 1], product[j]);
    //             swapped = true;
    //         }
    //     }
    // }
}

void ShowProducts()
{
    std::cout << "List of products after sorting:\n";
    for (int i = 0; i < ProductCount; ++i)
    {
        std::cout << "Index: [" << i << "] - Name: [" << products[i].name << "] - Price: [" << products[i].price << "]\n";
    }
}

#endif