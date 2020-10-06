#ifndef PARSE_TABLE_H
#define PARSE_TABLE_H
#include "scanner.h"
#define RULES_COUNT 55
#define TERMINAL_COUNT 36
#define NONETERMINAL_COUNT 24
#define START_VARIABLE "S"
#define MAX_RHS_LEN 5
const struct _TOKEN Lhs[RULES_COUNT]= 
{
	{NON_TERMINAL, "S"},
	{NON_TERMINAL, "S'"},
	{NON_TERMINAL, "S'"},
	{NON_TERMINAL, "C"},
	{NON_TERMINAL, "E0"},
	{NON_TERMINAL, "E0'"},
	{NON_TERMINAL, "E0'"},
	{NON_TERMINAL, "E1"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E2"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E3"},
	{NON_TERMINAL, "E3'"},
	{NON_TERMINAL, "E3'"},
	{NON_TERMINAL, "E4"},
	{NON_TERMINAL, "E4'"},
	{NON_TERMINAL, "E4'"},
	{NON_TERMINAL, "E5"},
	{NON_TERMINAL, "E5'"},
	{NON_TERMINAL, "E5'"},
	{NON_TERMINAL, "E6"},
	{NON_TERMINAL, "E6'"},
	{NON_TERMINAL, "E6'"},
	{NON_TERMINAL, "E7"},
	{NON_TERMINAL, "E7'"},
	{NON_TERMINAL, "E7'"},
	{NON_TERMINAL, "E8"},
	{NON_TERMINAL, "E8'"},
	{NON_TERMINAL, "E8'"},
	{NON_TERMINAL, "E9"},
	{NON_TERMINAL, "E9'"},
	{NON_TERMINAL, "E9'"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E10"}
};
const struct _TOKEN Rhs[RULES_COUNT][MAX_RHS_LEN]= 
{
	{{NON_TERMINAL, "C"},{SPECIAL_TOKEN, ";"},{NON_TERMINAL, "S'"}},
	{{NON_TERMINAL, "C"},{SPECIAL_TOKEN, ";"},{NON_TERMINAL, "S'"}},
	{{EPSILON, "eps"}},
	{{ID, "_id"},{SPECIAL_TOKEN, "="},{NON_TERMINAL, "E0"}},
	{{NON_TERMINAL, "E1"},{NON_TERMINAL, "E0'"}},
	{{SPECIAL_TOKEN, "|"},{NON_TERMINAL, "E1"},{SEMANTIC_RULE, "@OR"},{NON_TERMINAL, "E0'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E2"},{NON_TERMINAL, "E1'"}},
	{{SPECIAL_TOKEN, "^"},{NON_TERMINAL, "E2"},{SEMANTIC_RULE, "@XOR"},{NON_TERMINAL, "E1'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E3"},{NON_TERMINAL, "E2'"}},
	{{SPECIAL_TOKEN, "&"},{NON_TERMINAL, "E3"},{SEMANTIC_RULE, "@AND"},{NON_TERMINAL, "E2'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E4"},{NON_TERMINAL, "E3'"}},
	{{SPECIAL_TOKEN, ">>"},{NON_TERMINAL, "E4"},{SEMANTIC_RULE, "@ASR"},{NON_TERMINAL, "E3'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E5"},{NON_TERMINAL, "E4'"}},
	{{SPECIAL_TOKEN, "<<"},{NON_TERMINAL, "E5"},{SEMANTIC_RULE, "@ASL"},{NON_TERMINAL, "E4'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E6"},{NON_TERMINAL, "E5'"}},
	{{SPECIAL_TOKEN, "+"},{NON_TERMINAL, "E6"},{SEMANTIC_RULE, "@ADD"},{NON_TERMINAL, "E5'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E7"},{NON_TERMINAL, "E6'"}},
	{{SPECIAL_TOKEN, "-"},{NON_TERMINAL, "E7"},{SEMANTIC_RULE, "@SUB"},{NON_TERMINAL, "E6'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E8"},{NON_TERMINAL, "E7'"}},
	{{SPECIAL_TOKEN, "*"},{NON_TERMINAL, "E8"},{SEMANTIC_RULE, "@MUL"},{NON_TERMINAL, "E7'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E9"},{NON_TERMINAL, "E8'"}},
	{{SPECIAL_TOKEN, "/"},{NON_TERMINAL, "E9"},{SEMANTIC_RULE, "@DIV"},{NON_TERMINAL, "E8'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E10"},{NON_TERMINAL, "E9'"}},
	{{KEYWORD, "%"},{NON_TERMINAL, "E10"},{SEMANTIC_RULE, "@MOD"},{NON_TERMINAL, "E9'"}},
	{{EPSILON, "eps"}},
	{{KEYWORD, "poi"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@POI"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "db"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DB"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dd"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DD"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dw"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DW"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dq"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@DQ"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "str"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@STR"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "wstr"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@WSTR"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "sizeof"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@SIZEOF"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "not"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@NOT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "neg"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@NEG"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "hi"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@HI"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "low"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SEMANTIC_RULE, "@LOW"},{SPECIAL_TOKEN, ")"}},
	{{SPECIAL_TOKEN, "("},{NON_TERMINAL, "E0"},{SPECIAL_TOKEN, ")"}},
	{{SEMANTIC_RULE, "@PUSH"},{REGISTER, "_register"}},
	{{SEMANTIC_RULE, "@PUSH"},{HEX, "_hex"}},
	{{SEMANTIC_RULE, "@PUSH"},{DECIMAL, "_decimal"}},
	{{SEMANTIC_RULE, "@PUSH"},{FLOAT, "_float"}},
	{{SEMANTIC_RULE, "@PUSH"},{OCTAL, "_octal"}},
	{{SEMANTIC_RULE, "@PUSH"},{BINARY, "_binary"}},
	{{SEMANTIC_RULE, "@PUSH"},{KEYWORD, "func"}},
	{{SEMANTIC_RULE, "@PUSH"},{PSEUDO_REGISTER, "_pseudo_register"}}
};
const unsigned int RhsSize[RULES_COUNT]= 
{
3,
3,
1,
3,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
3,
2,
2,
2,
2,
2,
2,
2,
2
};
const char* NoneTerminalMap[NONETERMINAL_COUNT]= 
{
"E3'",
"E4'",
"E2",
"E6'",
"E1",
"E10",
"E9'",
"E3",
"E7",
"S",
"E8",
"S'",
"E9",
"E8'",
"E5",
"E7'",
"E6",
"E0'",
"C",
"E5'",
"E2'",
"E4",
"E0",
"E1'"
};
const char* TerminalMap[TERMINAL_COUNT]= 
{
"-",
"_float",
"_register",
";",
"%",
"sizeof",
"func",
"dq",
"$",
"_octal",
"&",
"not",
"neg",
"^",
"_hex",
"poi",
"dw",
"wstr",
"*",
"+",
"/",
"_binary",
")",
"<<",
"hi",
"db",
"|",
"_decimal",
"dd",
"str",
"_pseudo_register",
"_id",
"low",
"(",
">>",
"="
};
const int ParseTable[NONETERMINAL_COUNT][TERMINAL_COUNT]= 
{
	{-1		,-1		,-1		,15		,-1		,-1		,-1		,-1		,-1		,-1		,15		,-1		,-1		,15		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,15		,-1		,-1		,-1		,15		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,14		,-1	},
	{-1		,-1		,-1		,18		,-1		,-1		,-1		,-1		,-1		,-1		,18		,-1		,-1		,18		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,18		,17		,-1		,-1		,18		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,18		,-1	},
	{-1		,10		,10		,-1		,-1		,10		,10		,10		,-1		,10		,-1		,10		,10		,-1		,10		,10		,10		,10		,-1		,-1		,-1		,10		,-1		,-1		,10		,10		,-1		,10		,10		,10		,10		,-1		,10		,10		,-1		,-1	},
	{23		,-1		,-1		,24		,-1		,-1		,-1		,-1		,-1		,-1		,24		,-1		,-1		,24		,-1		,-1		,-1		,-1		,-1		,24		,-1		,-1		,24		,24		,-1		,-1		,24		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,24		,-1	},
	{-1		,7		,7		,-1		,-1		,7		,7		,7		,-1		,7		,-1		,7		,7		,-1		,7		,7		,7		,7		,-1		,-1		,-1		,7		,-1		,-1		,7		,7		,-1		,7		,7		,7		,7		,-1		,7		,7		,-1		,-1	},
	{-1		,50		,47		,-1		,-1		,41		,53		,38		,-1		,51		,-1		,42		,43		,-1		,48		,34		,37		,40		,-1		,-1		,-1		,52		,-1		,-1		,44		,35		,-1		,49		,36		,39		,54		,-1		,45		,46		,-1		,-1	},
	{33		,-1		,-1		,33		,32		,-1		,-1		,-1		,-1		,-1		,33		,-1		,-1		,33		,-1		,-1		,-1		,-1		,33		,33		,33		,-1		,33		,33		,-1		,-1		,33		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,33		,-1	},
	{-1		,13		,13		,-1		,-1		,13		,13		,13		,-1		,13		,-1		,13		,13		,-1		,13		,13		,13		,13		,-1		,-1		,-1		,13		,-1		,-1		,13		,13		,-1		,13		,13		,13		,13		,-1		,13		,13		,-1		,-1	},
	{-1		,25		,25		,-1		,-1		,25		,25		,25		,-1		,25		,-1		,25		,25		,-1		,25		,25		,25		,25		,-1		,-1		,-1		,25		,-1		,-1		,25		,25		,-1		,25		,25		,25		,25		,-1		,25		,25		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,0		,-1		,-1		,-1		,-1	},
	{-1		,28		,28		,-1		,-1		,28		,28		,28		,-1		,28		,-1		,28		,28		,-1		,28		,28		,28		,28		,-1		,-1		,-1		,28		,-1		,-1		,28		,28		,-1		,28		,28		,28		,28		,-1		,28		,28		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,2		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,1		,-1		,-1		,-1		,-1	},
	{-1		,31		,31		,-1		,-1		,31		,31		,31		,-1		,31		,-1		,31		,31		,-1		,31		,31		,31		,31		,-1		,-1		,-1		,31		,-1		,-1		,31		,31		,-1		,31		,31		,31		,31		,-1		,31		,31		,-1		,-1	},
	{30		,-1		,-1		,30		,-1		,-1		,-1		,-1		,-1		,-1		,30		,-1		,-1		,30		,-1		,-1		,-1		,-1		,30		,30		,29		,-1		,30		,30		,-1		,-1		,30		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,30		,-1	},
	{-1		,19		,19		,-1		,-1		,19		,19		,19		,-1		,19		,-1		,19		,19		,-1		,19		,19		,19		,19		,-1		,-1		,-1		,19		,-1		,-1		,19		,19		,-1		,19		,19		,19		,19		,-1		,19		,19		,-1		,-1	},
	{27		,-1		,-1		,27		,-1		,-1		,-1		,-1		,-1		,-1		,27		,-1		,-1		,27		,-1		,-1		,-1		,-1		,26		,27		,-1		,-1		,27		,27		,-1		,-1		,27		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,27		,-1	},
	{-1		,22		,22		,-1		,-1		,22		,22		,22		,-1		,22		,-1		,22		,22		,-1		,22		,22		,22		,22		,-1		,-1		,-1		,22		,-1		,-1		,22		,22		,-1		,22		,22		,22		,22		,-1		,22		,22		,-1		,-1	},
	{-1		,-1		,-1		,6		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,6		,-1		,-1		,-1		,5		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,3		,-1		,-1		,-1		,-1	},
	{-1		,-1		,-1		,21		,-1		,-1		,-1		,-1		,-1		,-1		,21		,-1		,-1		,21		,-1		,-1		,-1		,-1		,-1		,20		,-1		,-1		,21		,21		,-1		,-1		,21		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,21		,-1	},
	{-1		,-1		,-1		,12		,-1		,-1		,-1		,-1		,-1		,-1		,11		,-1		,-1		,12		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,12		,-1		,-1		,-1		,12		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1	},
	{-1		,16		,16		,-1		,-1		,16		,16		,16		,-1		,16		,-1		,16		,16		,-1		,16		,16		,16		,16		,-1		,-1		,-1		,16		,-1		,-1		,16		,16		,-1		,16		,16		,16		,16		,-1		,16		,16		,-1		,-1	},
	{-1		,4		,4		,-1		,-1		,4		,4		,4		,-1		,4		,-1		,4		,4		,-1		,4		,4		,4		,4		,-1		,-1		,-1		,4		,-1		,-1		,4		,4		,-1		,4		,4		,4		,4		,-1		,4		,4		,-1		,-1	},
	{-1		,-1		,-1		,9		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,8		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,9		,-1		,-1		,-1		,9		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1		,-1	}
};
#endif
