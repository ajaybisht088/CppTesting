#include<stdio.h>
void main() {
    /**********************************************
    enum week { mon, tue, wed, thu, fri, sat, sun};
    printf("%d", tue);
    /********************************************** 
    enum week { mon, tue, wed, thu, fri, sat, sun};
    //tue = 4;    // gives error as we cannot assign values to enum constants
    enum week day = tue;    // but we can do this.
    printf("%d", day);
    printf(" %d", sizeof day);
    printf(" %d", sizeof(enum week));
    printf(" %d", sizeof tue);
    /************************************************************
    // 2. If we do not explicitly assign values to enum names, 
    // the compiler by default assigns values starting from 0.
    // For example, in the following C program, sunday gets value 0, monday gets 1, and so on.
    enum week { mon, tue, wed, thu, fri, sat, sun};
    for(int i = mon; i<=sun; i++ ){
        printf("%d ", i);
    }
    // Output = > 0 1 2 3 4 5 6 
    /***********************************************************
    // 3. We can assign values to some name in any order. 
    // All unassigned names get value as value of previous name plus one.
    enum week { mon = 1, tue = 2, wed, thu=7, fri=9, sat, sun=16};
    for(int i = mon; i<=sun; i++ ){
        printf("%d ", i);
    }
    // Output = > 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
    /***********************************************************
    // 1. Two enum names can have same value. 
    // For example, in the following C program both ‘Failed’ and ‘Freezed’ have same value 0.
    enum State {Working = 1, Failed = 0, Freezed = 0};
    printf("%d, %d, %d", Working, Failed, Freezed);
    // Output = > 1, 0, 0
    /**********************************************************
    // 5. All enum constants must be unique in their scope.
    // For example, the following program fails in compilation.
    enum State {delhi, mp, up};
    enum city {vaishali, up, indirapuram};
    printf("%d, %d, %d", delhi, vaishali, up);
    // Output = >  error: redeclaration of enumerator 'up'
    /**********************************************************
    // 6. Works fine
    enum State {delhi, mp, up};
    enum city {vaishali, ghazipur, indirapuram};
    printf("%d, %d, %d", delhi, vaishali, up);
    // Output = >  error: redeclaration of enumerator 'up'
    /**********************************************************/ 
    // 7. it holds only integer values.
    enum State {delhi=-1, mp = 'B'};
    printf("%d %c", delhi, mp);
    // Output = >  -1 B
    /**********************************************************/ 
    // 7. it holds cant hold floating values.
    //enum State {delhi=1.23, mp = 'B'};  // error
    //printf("%d %c", delhi, mp);
    /**********************************************************/ 
}