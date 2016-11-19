//==============================================================================
// Name:            Identifier Parser
// Author:          eurekasfray
// Date created:    2013-05-11
//==============================================================================

//==============================================================================
// Include:
//==============================================================================

#include <stdio.h>

//==============================================================================
// Identifier parser states
//==============================================================================

#define S_INIT   0
#define S_TAIL   1
#define S_ERROR  2
#define S_END    3

//==============================================================================
// Defs
//==============================================================================

#define TRUE     1
#define FALSE    0
#define FOREVER  1
#define TAB      "    "   // 4 spaces

//==============================================================================
// Syntax error types
//==============================================================================

#define ILLEGAL_INIT_CHAR     -1
#define ILLEGAL_TAIL_CHAR     -2

//==============================================================================
// Prototypes
//==============================================================================

int isIdentifier(char *s);
int isDigit(char);
int isAlpha(char);
int isSymbol(char);
int isEndOfToken(char);
void PutError(int);

//==============================================================================
// Main
//==============================================================================

int main()
{
    char * buffer[255];
    int result;
    
    printf("Identifier parser  build 20130511\n");
    printf("Type in an identifier: \n");
    printf("\n");
    
    for(;;) {
        printf(">>> ");
        scanf("%s",buffer);
        
        result = isIdentifier(buffer);
        if (result == TRUE) {
            printf("%sParse successful: Legal identifier\n", TAB, buffer);
        }
        else {
            printf("%s", TAB);
            PutError(result);
        }
        printf("\n");
    }
    
    return 0;
}

//==============================================================================
// Identifier parser
//==============================================================================

int isIdentifier(char s[])
{
    int state;
    int error;
    int c;
    int i;
    
    i = 0;
    state = S_INIT;
    while (1)
    {
        c = s[i];  // get character
        
        switch (state)
        {
            case S_INIT:
                if (isAlpha(c) || isSymbol(c)) {                    
                    state = S_TAIL;
                                        
                    i++; // look ahead 
                    if (isEndOfToken(c)) {
                        // (identifier bnf syntax states that an identifier can be an init character only)
                        state = S_END;
                    }
                    i--; // step back
                }
                else {
                    error = ILLEGAL_INIT_CHAR;
                    state = S_ERROR;
                }
                break;
                
            case S_TAIL:
                if (isAlpha(c) || isDigit(c) || isSymbol(c)) {
                    state = S_TAIL;
                }
                else if (isEndOfToken(c)) {
                    state = S_END;
                }
                else {
                    error = ILLEGAL_TAIL_CHAR;
                    state = S_ERROR;
                }
                break;
                
            case S_ERROR:
                return error;
                break;
                
            case S_END:
                return TRUE;
                break;
        }
        
        i++; // goto next character
    }   
}

//==============================================================================
// Put Error
//==============================================================================

void PutError(n)
{
    printf("Syntax Error: ");
    
    switch(n)
    {
        case ILLEGAL_INIT_CHAR:
            printf("Identifier cannot begin with an illegal character!\n");
            break;
            
        case ILLEGAL_TAIL_CHAR:
            printf("Illegal character in identifier!\n");
            break;
    }
}

//==============================================================================
// Is digit
//==============================================================================

int isDigit(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    
    return 0;
}

//==============================================================================
// Is alpha
//==============================================================================

int isAlpha(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    else if (c >= 'a' && c <= 'z') {
        return 1;
    }
    
    return 0;
}

//==============================================================================
// Is identifier symbol
//==============================================================================

int isSymbol(char c)
{
    switch(c)
    {
        case '_':
            return 1;
            break;
        
        default:
            return 0;
            break;
    }
}

//==============================================================================
// Is end of token
//==============================================================================

int isEndOfToken(char c)
{
    if (c == '\0') {
        return 1;
    }
    
    return 0;
}
