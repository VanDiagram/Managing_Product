#include "../src/market.h"

int main()
{
    int choice;
    cout << '\t' << '\t' << "----Welcome to our product management program----" << '\n';

    do
    {
        cout << "1, Add product" << endl;
        cout << "2, Sort product by name" << endl;
        cout << "3, Showcase the product" << endl;
        cout << "4, Exit the program" << '\n'
             << '\n';

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            AddProduct();
            break;
        case 2:
            SortProduct();
            break;
        case 3:
            ShowProducts();
            break;
        case 4:
            std::cout << "Program exit";
            break;

        default:
            std::cout << "Please enter option from 1 to 4";
            break;
        }
    } while (choice != 4);
}
