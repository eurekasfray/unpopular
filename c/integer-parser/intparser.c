// name: integer parser
// date: 2012.10.24
// notes: intparser.md

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// prototypes
bool isInteger(char string[]);
bool isDigit(char);
bool isAlpha(char);
bool isSymbol(char);

// globals
int state;
int error;
int error_type;

// machine states
#define S_START 1
#define S_MAIN  2
#define S_END   3

// errors
#define NOT_INTEGER 1

int main()
{
    int i;
    char integer[256];
    printf("Enter an integer: ");
    scanf("%s",integer);
    i = isInteger(integer);
    if(i) {
        printf("\n%s is an integer",integer);
    } else {
        printf("\n%s is not an integer",integer);
    }
    return 0;
}

// integer parser (using an fsm)
bool isInteger(char string[])
{
    int c;
    int i;
    int j;
    int k=0;
    j = strlen(string);
    error = false;
    state = S_START;
    while (state != S_END) {
        c = string[k];
        switch(state) {
            case S_START:
                if (isDigit(c)) {
                    state = S_MAIN;
                    k++;
                } else {
                    state = S_END;
                    error = true;
                    error_type = NOT_INTEGER;
                }
                break;
            case S_MAIN:
                if (isDigit(c)) {
                    k++;
                    break;
                } if (c == '\0') {
                    state = S_END; // it's the end of the fsm execution
                    error = false;
                } else {
                    state = S_END;
                    error = true;
                    error_type = NOT_INTEGER;
                }
                break;
            case S_END:
                // do nothing
                break;
        }
    }

    if (error) {
        return false;
    } else {
        return true;
    }
}

// determine if character is a digit
bool isDigit(char c)
{
    switch(c) {
        case '0': return true;
        case '1': return true;
        case '2': return true;
        case '3': return true;
        case '4': return true;
        case '5': return true;
        case '6': return true;
        case '7': return true;
        case '8': return true;
        case '9': return true;
    }
    return false;
}
