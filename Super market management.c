#include <stdio.h>

#include <stdlib.h>

#include <string.h>



// Define product structure

struct Product {

    char name[50];

    float price;

    int quantity;

};



// Function to display product details

void displayProduct(struct Product product) {

    printf("Name: %s\n", product.name);

    printf("Price: $%.2f\n", product.price);

    printf("Quantity: %d\n", product.quantity);

    printf("\n");

}



// Function to add a new product

void addProduct(struct Product *inventory, int *count) {

    printf("Enter product name: ");

    scanf("%s", inventory[*count].name);



    printf("Enter price: ");

    scanf("%f", &inventory[*count].price);



    printf("Enter quantity: ");

    scanf("%d", &inventory[*count].quantity);



    (*count)++;

}



// Function to display all products in the inventory

void displayInventory(struct Product *inventory, int count) {

    printf("Inventory:\n");

    for (int i = 0; i < count; i++) {

        displayProduct(inventory[i]);

    }

}



int main() {

    struct Product inventory[100];  // Assuming a maximum of 100 products

    int count = 0;  // Number of products in the inventory



    int choice;

    do {

        printf("1. Add Product\n");

        printf("2. Display Inventory\n");

        printf("3. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);



        switch (choice) {

            case 1:

                addProduct(inventory, &count);

                break;

            case 2:

                displayInventory(inventory, count);

                break;

            case 3:

                printf("Exiting program. Goodbye!\n");

                break;

            default:

                printf("Invalid choice. Please try again.\n");

        }

    } while (choice != 3);



    return 0;

}

