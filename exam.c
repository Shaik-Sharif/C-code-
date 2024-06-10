#include <stdio.h>

int calculateSum(int prices[], int quantities[], int numItems) {
   int sum = 0;
   for (int i = 0; i < numItems; i++) {
       sum += prices[i] * quantities[i];
   }
   return sum;
}

float calculateDiscount(int total) {
   if (total < 1000) {
       return 0.05 * total;
   } else if (total >= 1000 && total < 5000) {
       return 0.1 * total;
   } else {
       return 0.15 * total;
   }
}

void printInvoice(int prices[], int quantities[], int numItems, int total, float discount, float grandTotal) {
   printf("\nItem Price Quantity Subtotal\n");
   for (int i = 0; i < numItems; i++) {
       printf("Item %d %d %d %d\n", i + 1, prices[i], quantities[i], prices[i] * quantities[i]);
   }
   printf("-------------------------------------------------\n");
   printf("TOTAL %d\n", total);
   printf("Discount %.0f%% -%.2f\n", discount * 100, discount);
   printf("---------------------------------\n");
   printf("GRAND TOTAL %.2f\n", grandTotal);
}

int main() {
   int numItems;
   printf("Enter the number of items: ");
   scanf("%d", &numItems);

   int prices[numItems], quantities[numItems];
   for (int i = 0; i < numItems; i++) {
       printf("Enter price for item %d: ", i + 1);
       scanf("%d", &prices[i]);
       printf("Enter quantity for item %d: ", i + 1);
       scanf("%d", &quantities[i]);
   }

   int total = calculateSum(prices, quantities, numItems);
   float discount = calculateDiscount(total);
   float grandTotal = total - discount;

   printInvoice(prices, quantities, numItems, total, discount, grandTotal);

   return 0;
}