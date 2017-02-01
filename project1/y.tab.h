/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    LBRACKET = 260,
    RBRACKET = 261,
    LPAREN = 262,
    RPAREN = 263,
    GREATER = 264,
    LESS = 265,
    GREATEREQ = 266,
    LESSEQ = 267,
    EQUAL = 268,
    ADD = 269,
    SUB = 270,
    MUL = 271,
    DIV = 272,
    HD = 273,
    TL = 274,
    REF = 275,
    BANG = 276,
    NOT = 277,
    AND = 278,
    OR = 279,
    COMMA = 280,
    CONS = 281,
    IDENT = 282
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define LBRACKET 260
#define RBRACKET 261
#define LPAREN 262
#define RPAREN 263
#define GREATER 264
#define LESS 265
#define GREATEREQ 266
#define LESSEQ 267
#define EQUAL 268
#define ADD 269
#define SUB 270
#define MUL 271
#define DIV 272
#define HD 273
#define TL 274
#define REF 275
#define BANG 276
#define NOT 277
#define AND 278
#define OR 279
#define COMMA 280
#define CONS 281
#define IDENT 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
