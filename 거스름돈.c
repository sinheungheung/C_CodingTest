#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) 
{
    int sum = 0;
        for (int i = 0; i < price_len; i++)
            sum += price[i];
        if (money - sum >= 0) {
            return money - sum;
        }

    else return -1;
}