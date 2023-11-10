#include <stdio.h>
#include <string.h>


struct Customer {
    char name[50];
    int accnum;
    float balance;
};


void more(struct Customer c[], int n) {
    for (int i = 0; i < n; i++) 
    {
        if (c[i].balance > 50000) 
        {
            printf("Name: %s\n", c[i].name);
        }
    }
}


void add(struct Customer c[], int n) {
    for (int i = 0; i < n; i++) 
    {
        if (c[i].balance > 10000) 
        {
            c[i].balance += 1000;
            printf("New Balance for %s: Rs. %.2f\n", c[i].name, c[i].balance);
        }
    }
}

void withdraw(struct Customer c[], int size, int accnum, float amount) {
    for (int i = 0; i < size; i++) 
    {
        if (c[i].accnum == accnum) 
        {
            if (c[i].balance >= amount) 
            {
                c[i].balance -= amount;
                printf("Rs. %.2f withdrawn from %s's account.\nNew balance: Rs. %.2f\n", amount, c[i].name, c[i].balance);
            } 
            else {
                printf("Insufficient balance to withdraw\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}

int main() {
    struct Customer c[15];
    printf("Enter the record:-\n");
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the name of customer %d: ",i+1);
        getchar();
        gets(c[i].name);
        printf("Enter account number: ");
        scanf("%d",&c[i].accnum);
        printf("Enter balance: ");
        scanf("%f",&c[i].balance);
    }
    
    printf("Customers with balance more than Rs. 50000:\n");
    more(c, 15);
    add(c, 15);

    int a;
    float w;
    printf("Enter account number from which you want to withdraw: ");
    scanf("%d",&a);
    printf("Enter the amount to withdraw: ");
    scanf("%f",&w);
    withdraw(c, 15, a, w);
    return 0;
}