#include <stdio.h>
#include <string.h>
/***********************************************
int main(){
    // char ch[10] = "Hello";   // ok
    // char ch[] = "Hello";      // ok
    char ch[10];      // ok
    fgets(ch, sizeof(ch), stdin);
    printf("%d\n", strlen(ch));
    puts(ch);
    return 0;
}
/***********************************************
int main(){
    char ch[10];      // ok
    // ch = "yellow";  // error
    fgets(ch, sizeof(ch), stdin);   // ok
    printf("%d\n", strlen(ch));
    puts(ch);
    return 0;
}
/***********************************************
int main(){
    char *ch;
    // char *ch = "Hello";      // ok
    // ch = "yellow";  // error
    fgets(ch, 20, stdin);   // ok
    printf("%d\n", strlen(ch));
    puts(ch);
    return 0;
}
/***********************************************
int main(){
    char *ch;
    // char *ch = "Hello";      // ok
    // ch = "yellow";  // error
    // fgets(ch, 20, stdin);   // ok
    scanf("%s", ch);   // ok
    char add[10] = " Bisht";
    strcat(ch, add);
    printf("%d\n", strlen(ch));
    puts(ch);
    return 0;
}
/***************** strcmp(str1, str2) **************************
int main(){
    char *ch;
    // char *ch = "Hello";      // ok
    // ch = "yellow";  // error
    // fgets(ch, 20, stdin);   // ok
    scanf("%s", ch);   // ok
    char cmp[10] = "Ajay";
    printf("%d\n", strcmp(ch, cmp));
    if(strcmp(ch, cmp)==0){
        printf("%d\n", strlen(ch));
        puts(ch);
    }
    return 0;
}
/**************** strncat(str1, str2, length) ****************
int main(){
    // char *ch;
    // char *ch = "Hello";      // ok but not ok
    char ch[] = "Hello";      // ok
    // ch = "yellow";  // error
    // fgets(ch, 20, stdin);   // ok
    // scanf("%s", ch);   // ok
    char *add = " Bisht";
    // char add[10] = " Bisht";
    // strcat(ch, add, 3);      // error
    strncat(ch, add, 3);
    printf("%d\n", strlen(ch));
    puts(ch);           //  Hello Bi
    return 0;
}
/**************** strupr(str1) ****************
int main(){
    char str1[20] = "Hello";      // ok
    char str2[10] = "Bisht";     // ok
    strcpy(str1, strupr(str2)); 
    printf("%d\n", strlen(str1));       // 11
    puts(str1);         // BISHT
    return 0;
}
/**************** strupr(str1) ****************
int main(){
    char str2[20] = "Hello";      // ok
    // char str2[10] = strupr(str1);    // error
    // char str2[10];
    // strcpy(str2, strupr(str1));  // no need of this.
    strupr(str2);       // it modifies the str2 value.
    printf("%d\n", strlen(str2));       // 5
    puts(str2);         // HELLO
    return 0;
}
/**************** strlwr(str1) ****************
int main(){
    char str2[20] = "HeLLo";      // ok
    // char str2[10] = strupr(str1);    // error
    // char str2[10];
    // strcpy(str2, strlwr(str1));  // no need of this.
    strlwr(str2);   // it modifies the str2 original values to lower case.
    printf("%d\n", strlen(str2));       // 5
    puts(str2);         // hello
    return 0;
}
/**************** strrev(str1) ****************
int main(){
    char str2[20] = "Hello";      // ok
    // char str2[10] = strupr(str1);    // error
    // char str2[10];
    strrev(str2);   // it changes str2
    // strcpy(str2, strrev(str1));  // no need of this
    printf("%d\n", strlen(str2));       // 5
    puts(str2);         // olleH
    return 0;
}
/**************** strset(str1, char val) ****************
int main(){
    char str1[20] = "Hello world";      // ok
    // char str2[10] = strupr(str1);    // error
    char str2[20];
    strset(str1, '#');
    // strcpy(str2, strrev(str1));
    printf("%d\n", strlen(str1));       // 11
    puts(str1);         // ###########
    return 0;
}
/**************** strnset(str1, char val, length) ****************
int main(){
    char str1[20] = "Hello world";      // ok
    // char str2[10] = strupr(str1);    // error
    char str2[20];
    strnset(str1, '#', 5);
    // strcpy(str2, strrev(str1));
    printf("%d\n", strlen(str1));       // 11
    puts(str1);         // ##### world
    return 0;
}
/**************** strdup(p1) ****************
int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = strdup(p1);
 
    printf("Duplicated string is : %s", p2);
    return 0;
}
/**************** strtok() ****************/
int main()
{
    char string[50] ="Test,string1,Test,string2:Test:string3";
    char *p;
    printf ("String  \"%s\" is split into tokens:\n",string);
    p = strtok (string,",:");
    // printf("\n%s", p);
    // p = strtok (NULL,",:");
    // printf("\n%s", p);
    // p = strtok (NULL,",:");
    // printf("\n%s", p);
    // p = strtok (NULL,",:");
    // printf("\n%s", p);
    while (p!=NULL)
    {
        printf("\n%s", p);
        p = strtok (NULL,",:");
    }
    return 0;
}