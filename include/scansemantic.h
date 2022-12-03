#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {

	marca,//MARK = 0,
	funcion,//FUNCTION,
	variable,//VAR,
	parametro_formal,//FORM

} tipoEntrada;

typedef enum {

	entero,//NOT_ASIG = 0,
	real,//ENTERO,
	caracter,//CARACTER,
	booleano,//BOOLEANO,
	lista,
	desconocido,
    na,

} dtipo;

typedef struct {

	tipoEntrada entrada;//in;
	char *nombre;//*lex;
	dtipo tipoDato;//type;
	unsigned int nParam;
	unsigned int nDim;

	// Tamaño de la dimensión 1
	int tamDimen1;//tDim1;

	// Tamaño de la dimensión 2
	int tamDimen2;//tDim2;

} entradaTS;

typedef struct {

	int attr;
	char *nombre;
	dtipo tipoDato;
	unsigned int nDim;
	// Tamaño de la dimensión 1
	int tamDimen1;
    // Tamaño de la dimensión 2
	int tamDimen2;

} atributos;

#define YYSTYPE atributos

#define MAX_IN 500

extern long int TOPE;//LIMIT;

extern entradaTS ts[MAX_IN];

// Línea del fichero que se está analizando
extern int line;

// Se indica si se están utilizando las variables (0) o si se están declarando
// (1), (2) llamada desde expresión
extern int decvariable;

// Indica el comienzo de un subprograma o función con 0 si es un bloque y 1 si
// es la cabecera del subprograma
extern int subProg;

// Indica si se están declarando parámetros formales en una función
extern int decParam;

extern int decFunction;

// Variable global que almacena el tipo en las declaraciones
extern dtipo globalType;

// Cuenta el número de parámetros de una función
extern int nParam;

// Índice de la tabla de símbolos de la función que se está utilizando
extern int currentFunction;
extern int aux;

// Devuelve si el atributo es array o no
int isList(atributos e);

// Devuelve si los dos posibles arrays que recibe tienen el mismo tamaño
int equalSize(atributos e1, atributos e2);

// Guarda el tipo de la variable
int setType(atributos value);

///////////////////////////////////////////////////////////////////////////////
// Tabla de Símbolos
//

// Inserta una entrada en la tabla de símbolos
int tsAddIn(entradaTS in);

// Elimina una entrada de la tabla de símbolos
int tsDelIn();

// Elimina las entradas de la tabla de símbolos hasta la marca de tope
void tsCleanIn();

// Busca una entrada según el identificador
int tsSearchId(atributos e);

// Busca una entrada según el nombre
int tsSearchName(atributos e);

// Añade un identificador
void tsAddId(atributos e);

// Añade una marca de tope
void tsAddMark();

// Añade una entrada de subprograma
void tsAddSubprog(atributos e);

// Añade una entrada de parametro formal
void tsAddParam(atributos e);

// Actualiza el número de parámetros de la función
void tsUpdateNparam(atributos e);

//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Analizador Semántico
//

// Devuelve la entrada que sea función más cercana
int tsGetNextFunction();

// Comprueba si el tipo de la expresión coincide con lo que devuelve la función
void tsCheckReturn(atributos expr, atributos* res);

// Devuelve el identificar
void tsGetId(atributos id, atributos* res);

// Realiza la comprobación de la operación !, &, ~
void tsOpUnary(atributos op, atributos o, atributos* res);

// Realiza la comprobación de la operación +, -
void tsOpSign(atributos op, atributos o, atributos* res);

// Realiza la comprobación de la operación +, - binaria
void tsOpSignBin(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la operación *, /
void tsOpMul(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la operación &&
void tsOpAnd(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la operación ||
void tsOpOr(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la operación XOR
void tsOpXOr(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la operación ==, !=
void tsOpEqual(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la operación <, >, <=, >=, <>
void tsOpRel(atributos o1, atributos op, atributos o2, atributos* res);

// Realiza la comprobación de la llamada a una función
void tsFunctionCall(atributos id, atributos* res);

// Realiza la comprobación de cada parámetro de una función
void tsCheckParam(atributos param, int checkParam);

//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Visualización
//

// Muestra una entrada de la tabla de símbolos
void printIn(int row);

// Muestra el tipo de la entrada
void printInType(tipoEntrada tipo);

// Muestra el tipo del dato recibido
void printDataType(dtipo type);

// Muestra la tabla de símbolos
void printTS();

// Muestra un atributo recibido
void printAttr(atributos e, char *t);