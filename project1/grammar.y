%{
#include <stdio.h>
#include <string.h>
 
void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}
 
int yywrap()
{
        return 1;
} 
  
main()
{
        yyparse();
} 

%}

%token INT
%token FLOAT
%token LBRACKET
%token RBRACKET
%token LPAREN
%token RPAREN
%token GREATER
%token LESS
%token GREATEREQ
%token LESSEQ
%token EQUAL
%token ADD
%token SUB
%token MUL
%token DIV
%token HD
%token TL
%token REF
%token BANG
%token NOT
%token AND
%token OR
%token COMMA
%token CONS
%token IDENT


%%

Program: Expr | Program Program;
Expr:
      INT
    | FLOAT
    | IDENT
    | LBRACKET RBRACKET 
    | LBRACKET Expr RBRACKET
    | LPAREN Expr RPAREN
    | SUB Expr
    | HD Expr
    | TL Expr
    | REF Expr
    | BANG Expr
    | NOT Expr
    | Expr CONS Expr
    | Expr MUL Expr
    | Expr DIV Expr
    | Expr ADD Expr
    | Expr SUB Expr
    | Expr LESS Expr
    | Expr GREATER Expr
    | Expr EQUAL Expr
    | Expr LESSEQ Expr
    | Expr GREATEREQ Expr
    | Expr AND Expr
    | Expr OR Expr
    | Expr COMMA Expr;

