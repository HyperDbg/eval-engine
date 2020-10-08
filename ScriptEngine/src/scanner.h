#ifndef SCANNER_H
#define SCANNER_H
#include <stdio.h>

//#define SCRIPTENGINE_EXPORTS
#define TOKEN_VALUE_MAX_LEN 100
#define TOKEN_LIST_INIT_SIZE 16
typedef enum TOKEN_TYPE
{
    ID,
    DECIMAL,
    FLOAT,
    HEX,
    OCTAL,
    BINARY,
    SPECIAL_TOKEN,
    KEYWORD,
    WHITE_SPACE,
    COMMENT,
    REGISTER,
    PSEUDO_REGISTER,

    NON_TERMINAL,
    SEMANTIC_RULE,
    END_OF_STACK,
    EPSILON,
    UNKNOWN
} TOKEN_TYPE;

struct _TOKEN
{
    TOKEN_TYPE Type;
    char *Value;
};

typedef struct _TOKEN *TOKEN;

typedef struct _TOKEN_LIST
{
    TOKEN *Head;
    unsigned int Pointer;
    unsigned int Size;
} * TOKEN_LIST;

TOKEN NewToken(void);
TOKEN_LIST NewTokenList(void);
void PrintTokenList(TOKEN_LIST TokenList);
void PrintToken(TOKEN Token);
TOKEN_LIST Push(TOKEN_LIST TokenList, TOKEN Token);
TOKEN Pop(TOKEN_LIST TokenList);
TOKEN Top(TOKEN_LIST TokenList);
void Append(TOKEN Token, char c);
TOKEN GetToken(char *c, char* str);
TOKEN Scan(char* str, char* c);
char IsHex(char c);
char IsDecimal(char c);
char IsLetter(char c);
char IsBinary(char c);
char IsOctal(char c);

char sgetc(char* str);

#endif