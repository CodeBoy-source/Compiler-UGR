/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INI_VAR = 258,                 /* INI_VAR  */
    FIN_VAR = 259,                 /* FIN_VAR  */
    PRINCIPAL = 260,               /* PRINCIPAL  */
    INI_BLOQUE = 261,              /* INI_BLOQUE  */
    FIN_BLOQUE = 262,              /* FIN_BLOQUE  */
    BOOLEANO = 263,                /* BOOLEANO  */
    CONSTANTE_NUM = 264,           /* CONSTANTE_NUM  */
    CONSTANTE_CAR = 265,           /* CONSTANTE_CAR  */
    CONSTANTE_FLOAT = 266,         /* CONSTANTE_FLOAT  */
    TIPO_DATO = 267,               /* TIPO_DATO  */
    SIGSIG = 268,                  /* SIGSIG  */
    CADENA = 269,                  /* CADENA  */
    LISTA = 270,                   /* LISTA  */
    MIENTRAS = 271,                /* MIENTRAS  */
    SI = 272,                      /* SI  */
    SINO = 273,                    /* SINO  */
    ENTRADA = 274,                 /* ENTRADA  */
    IMPRIMIR = 275,                /* IMPRIMIR  */
    DEVOLVER = 276,                /* DEVOLVER  */
    DIRECCION = 277,               /* DIRECCION  */
    IDENT = 278,                   /* IDENT  */
    OP_BINARIO = 279,              /* OP_BINARIO  */
    OP_UNARIO = 280,               /* OP_UNARIO  */
    OP_TERNARIO = 281,             /* OP_TERNARIO  */
    PARENTESIS_ABRE = 282,         /* PARENTESIS_ABRE  */
    PARENTESIS_CIERRA = 283,       /* PARENTESIS_CIERRA  */
    CORCHETE_ABRE = 284,           /* CORCHETE_ABRE  */
    CORCHETE_CIERRA = 285,         /* CORCHETE_CIERRA  */
    COMA = 286,                    /* COMA  */
    PYC = 287                      /* PYC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
