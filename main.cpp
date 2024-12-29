#include <iostream>
#include "SHOPPINGLIST.h"
using namespace std;

int main() {
    listCategory LC;
    createList(LC);

    // Contoh penggunaan
    insertCategory(LC, createNewCategory({"Makanan"}));
    insertCategory(LC, createNewCategory({"Alat mandi"}));

    adrCategory foodCategory = first(LC);
    insertItemtoCategory(foodCategory, createNewItem({"Garam"}));
    insertItemtoCategory(foodCategory, createNewItem({"Kangkung"}));
    insertItemtoCategory(foodCategory, createNewItem({"Bayam"}));
    insertItemtoCategory(foodCategory, createNewItem({"Kerupuk"}));
    insertItemtoCategory(foodCategory, createNewItem({"Tomat"}));
    insertItemtoCategory(foodCategory, createNewItem({"Ayam"}));
    insertItemtoCategory(foodCategory, createNewItem({"Mie"}));
    insertItemtoCategory(foodCategory, createNewItem({"Bawang"}));
    insertItemtoCategory(foodCategory, createNewItem({"Bebek"}));
    insertItemtoCategory(foodCategory, createNewItem({"Jahe"}));

    adrCategory showerCategory = next(foodCategory);
    insertItemtoCategory(showerCategory, createNewItem({"Gayung"}));
    insertItemtoCategory(showerCategory, createNewItem({"Sikat gigi"}));
    insertItemtoCategory(showerCategory, createNewItem({"Sabun"}));
    insertItemtoCategory(showerCategory, createNewItem({"Shampoo"}));
    insertItemtoCategory(showerCategory, createNewItem({"Pasta gigi"}));
    insertItemtoCategory(showerCategory, createNewItem({"Face wash"}));
    insertItemtoCategory(showerCategory, createNewItem({"Conditioner"}));
    insertItemtoCategory(showerCategory, createNewItem({"Lulur"}));
    insertItemtoCategory(showerCategory, createNewItem({"Listerine"}));
    insertItemtoCategory(showerCategory, createNewItem({"Sabun anak"}));

    showAllCategories(LC);
    cout << "\nTotal item (iterative): " << countAllItemsIterative(LC) << "\n";

    return 0;
}
