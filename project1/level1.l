%{
#include <stdio.h>
#include "y.tab.h"
%}

%%

-?[0-9]+                                return INT;
-?([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)     return FLOAT;
\[                                      return LBRACKET;
\]                                      return RBRACKET;
\(                                      return LPAREN;
\)                                      return RPAREN;
\<                                      return GREATER;
\>                                      return LESS;
\<=                                     return GREATEREQ;
\>=                                     return LESSEQ;
=                                       return EQUAL;
\+                                      return ADD;
-                                       return SUB;
\*                                      return MUL;
\/                                      return DIV;
hd                                      return HD;
tl                                      return TL;
ref                                     return REF;
!                                       return BANG;
not                                     return NOT;
and                                     return AND;
or                                      return OR;
,                                       return COMMA;
::                                      return CONS;
[_a-zA-Z][a-zA-Z0-9_]*                  return IDENT;
\n;                      
\s+;
%%
