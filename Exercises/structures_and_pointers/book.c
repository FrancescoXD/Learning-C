// Exe. 59
#include <stdio.h>

/*int main() {
    int pint, sint;
    int *ppint, *psint;
    
    pint = 1;
    sint = 2;
    ppint = &pint;
    psint = &sint;

    printf("%d %d\n", pint, sint);
    printf("%d %d\n", &pint, &sint);
    printf("%d %d\n", ppint, psint);
    printf("%d %d\n", *ppint, *psint);
}

// Exe. 60
void changePrice(float *price);

int main() {
    float price = 30;
    float *pprice = &price;
    changePrice(pprice);
    printf("%f\n", price);

    return 0;
}

void changePrice(float *price) {
    float add = *price / 100 * 3;
    printf("%f\n", add);
    *price = *price + add;
}

// Exe. 61
#define SIZE 10

int main() {
    int numbers[SIZE];
    int *pnumbers = numbers;

    for (size_t i = 0; i < SIZE; ++i) {
        scanf("%d", &numbers[i]);
    }

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%d\n", *pnumbers+i);
    }
}*/

//Exe. 62
struct Product {
    int order_id;
    int product_id;
    int amount;
    float price;
};

int main() {
    struct Product product;
    struct Product *p_product;

    p_product = &product;
    p_product->order_id = 1;
    p_product->product_id = 1982;
    p_product->amount = 10;
    p_product->price = 9.99;

    printf("%d %.2f\n", p_product->product_id, p_product->price);
}