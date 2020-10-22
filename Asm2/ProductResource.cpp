#include "ProductResource.h"

ProductResource::ProductResource()
{
    if (product_src.empty())
    {
        add_avaiable_src();
    }
}

vector<Product> ProductResource::get_src() const
{
    return product_src;
}

void ProductResource::add_avaiable_src()
{
    Product pr[5] = 
    {
        {"Asus ROG", "Laptop", 19000000},
        {"Acer Nitro", "Laptop", 17500000},
        {"Intel NUCC", "PC", 15400000},
        {"MSI MRK911", "Mainboard", 3640000},
        {"Asus K800", "Mainboard", 4120000}
    };

    for (int i = 0; i < 5; i++)
    {
        product_src.push_back(pr[i]);
    }
}
