#ifndef SHOPPINGLIST_H_INCLUDED
#define SHOPPINGLIST_H_INCLUDED
#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define child(P) P->child
#define info(P) P->info

struct Item{
    string itemName;
};

struct Category{
    string catName;
};

typedef struct Item infoItem;
typedef struct Category infoCategory;
typedef struct elmItem *adrItem;
typedef struct elmCategoty *adrCategory;

struct elmItem{
    infoItem info;
    adrItem next;
};

struct elmCategoty{
    infoCategory info;
    adrCategory next;
    adrItem child;
};

struct listCategory{
    adrCategory first;
};

void createList(listCategory &LC);
adrCategory createNewCategory (infoCategory P);
adrItem createNewItem(infoItem P);
void insertCategory(listCategory &LC, adrCategory P);
void insertItemtoCategory(adrCategory C, adrItem P);
void showAllCategories(listCategory LC);
int countAllItemsIterative(listCategory LC);
int countAllItemsRecursive(adrCategory C);
int countAllItemsRecursive2(listCategory LC);
#endif // SHOPPINGLIST_H_INCLUDED
