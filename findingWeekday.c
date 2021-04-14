#include <stdio.h>

void usingSwitchCase(int day) {
    switch (day)
    {
    case 1: printf("Sunday"); break;
    case 2: printf("Monday"); break;
    case 3: printf("Tuesday"); break;
    case 4: printf("Wednesday"); break;
    case 5: printf("Thursday"); break;
    case 6: printf("Friday"); break;
    case 7: printf("Saturday"); break;
    default: printf("Not a weekday"); break;
    }
}

void usingIfElse(int day) {
    if(day == 1) { printf("Sunday"); return; }
    else if(day == 1) { printf("Sunday"); return; }
    else if(day == 2) { printf("Monday"); return; }
    else if(day == 3) { printf("Tuesday"); return; }
    else if(day == 4) { printf("Wednesday"); return; }
    else if(day == 5) { printf("Thursday"); return; }
    else if(day == 6) { printf("Friday"); return; }
    else if(day == 7) { printf("Saturday"); return; }
}

int main()
{
    int day;
    printf("Enter day : ");
    scanf("%d", &day);
    printf("\nUsing switch case weekday = ");
    usingSwitchCase(day);
    printf("\nUsing if else weekday = ");
    usingIfElse(day);
    return 0;
}