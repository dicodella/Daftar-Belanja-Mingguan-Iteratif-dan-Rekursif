#include "SHOPPINGLIST.h"

//Prosedur untuk membuat list kategori
void createList(listCategory &LC){
    first(LC) = NULL;
};

//Function untuk membuat elemen kategori
adrCategory createNewCategory (infoCategory P){
    adrCategory C = new elmCategoty;
    info(C) = P;
    next(C) = NULL;
    child(C) = NULL;
    return C;
};

//Function untuk membuat elemen item
adrItem createNewItem(infoItem P){
    adrItem I = new elmItem;
    info(I) = P;
    next(I) = NULL;
    return I;
};

//Function untuk menambahkan kategori ke list
void insertCategory(listCategory &LC, adrCategory P){
    if(first(LC) == NULL){
        first(LC) = P;
    }else{
        adrCategory Q = first(LC);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
};

//Function untuk menambahkan item ke kategori
void insertItemtoCategory(adrCategory C, adrItem P){
    if(child(C) == NULL){
        child(C) = P;
    }else{
        adrItem Q = child(C);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
};

//Function untuk menampilkan semua kategori dan itemnya
void showAllCategories(listCategory LC){
    adrCategory C = first(LC);
    if(C == NULL){
        cout << "Daftar kategori kosong";
        return;
    }

    while(C != NULL){
        cout << "Kategori: " << info(C).catName << "\n";
        adrItem I = child(C);
        while(I != NULL){
            cout << "- " << info(I).itemName << "\n";
            I = next(I);
        }
        C = next(C);
    }
};

//Function iteratif untuk menghitung total item
int countAllItemsIterative(listCategory LC){
    int total = 0;
    adrCategory C = first(LC);
    while(C != NULL){
        adrItem I = child(C);
        while(I != NULL){
            total++;
            I = next(I);
        }
        C = next(C);
    }
    return total;
};

//Function rekursif untuk menghitung total item
int countAllItemsRecursive(adrCategory C) {
    if (C == nullptr) return 0; // Basis rekursi
    adrItem I = child(C);
    int count = 0;
    while (I != nullptr) { // Hitung semua item di kategori ini
        count++;
        I = next(I);
    }
    return count + countAllItemsRecursive(next(C)); // Rekurens
}

int countAllItemsRecursive2(listCategory LC){
    return countAllItemsRecursive(first(LC));
}
