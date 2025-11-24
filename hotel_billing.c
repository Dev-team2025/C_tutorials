#include <stdio.h>
int main() {
    int choice, qty;
    float total = 0, tax, grandTotal;

    printf("Welcome to Hotel\n");
    printf("Menu:\n");
    printf("1. Idli        - Rs. 30\n");
    printf("2. Dosa        - Rs. 50\n");
    printf("3. Fried Rice  - Rs. 120\n");
    printf("4. Paneer Curry- Rs. 150\n");
    printf("5. Exit\n");

while(1) {
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        if (choice == 5) break; 
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1: total += 30 * qty; break;
            case 2: total += 50 * qty; break;
            case 3: total += 120 * qty; break;
            case 4: total += 150 * qty; break;
            default: printf("Invalid choice!\n"); }  
        }

    tax = total * 0.05;          
    grandTotal = total + tax;

    printf("Final Bill");
    printf("Subtotal   : Rs. %.2f\n", total);
    printf("GST (5%%)  : Rs. %.2f\n", tax);
    printf("Grand Total: Rs. %.2f\n", grandTotal);
    printf("Thank you! Visit again.");
   return 0; }
