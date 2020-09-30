#ifndef PARSE_TABLE_H
#define PARSE_TABLE_H
#define RULES_COUNT 45
#define TERMINALS_COUNT 22
#define VARIABLES_COUNT 29
#define START_VARIABLE "S"
#define MAX_RHS_LEN 5
const char* Lhs[RULES_COUNT]= 
{
"S",
"S'",
"S'",
"C",
"E0",
"E0'",
"E0'",
"E1",
"E1'",
"E1'",
"E2",
"E2'",
"E2'",
"E3",
"E3'",
"E3'",
"E4",
"E4'",
"E4'",
"E5",
"E5'",
"E5'",
"E6",
"E6'",
"E6'",
"E7",
"E7'",
"E7'",
"E8",
"E8'",
"E8'",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9",
"E9"
};
char* Rhs[RULES_COUNT][MAX_RHS_LEN]= 
{
{"C",";","S'"},
{"C",";","S"},
{"eps"},
{"id","=","E0",";"},
{"E1","E0'"},
{"|","E1","@OR","E0'"},
{"eps"},
{"E2","E1'"},
{"^","E2","@XOR","E1'"},
{"eps"},
{"E3","E2'"},
{"&","E3","@AND","E2'"},
{"eps"},
{"E4","E3'"},
{">>","E4","@ASR","E3'"},
{"eps"},
{"E5","E4'"},
{"<<","E5","@ASL","E4'"},
{"eps"},
{"E6","E5'"},
{"+","E6","@ADD","E5'"},
{"eps"},
{"E7","E6'"},
{"-","E7","@SUB","E6'"},
{"eps"},
{"E8","E7'"},
{"*","E8","@MUL","E7'"},
{"eps"},
{"E9","E8'"},
{"/","E9","@DIV","E8'"},
{"eps"},
{"poi","(","Expr","@POI",")"},
{"db","(","Expr","@DB",")"},
{"dd","(","Expr","@DD",")"},
{"dw","(","Expr","@DW",")"},
{"dq","(","Expr","@DQ",")"},
{"str","(","Expr","@STR",")"},
{"wstr","(","Expr","@WSTR",")"},
{"sizeof","(","Expr","@SIZEOF",")"},
{"not","(","Expr","@NOT",")"},
{"neg","(","Expr","@NEGs",")"},
{"@PUSH","reg"},
{"@PUSH","num"},
{"@PUSH","func"},
{"@PUSH","meta"}
};
const char* VariableMap[VARIABLES_COUNT]= 
{
"reg",
"not",
"meta",
"id",
"dw",
"(",
"sizeof",
"=",
"str",
"&",
"eps",
"num",
"wstr",
"/",
"+",
"-",
"dq",
">>",
"dd",
"|",
"^",
"*",
"<<",
"neg",
"func",
"db",
")",
";",
"poi"
};
const char* TerminalMap[TERMINALS_COUNT]= 
{
"E8'",
"E5",
"E7",
"E3",
"C",
"E1'",
"E4",
"E6'",
"E1",
"E6",
"S",
"E0'",
"S'",
"E9",
"E2'",
"E5'",
"E0",
"E2",
"E3'",
"E4'",
"E8",
"E7'"
};
#endif
