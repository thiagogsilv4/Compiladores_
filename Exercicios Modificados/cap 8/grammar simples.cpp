#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "node.h"
#include "tabid.h"


FILE *yyin;
  int yylineno;
  int yydebug;
#ifdef YYDEBUG
char **yynames=(char**)simpleParserTokenNames;

int yyopen(char *filename) {
      input = antlr3AsciiFileStreamNew((pANTLR3_UINT8)filename);
      if (input == NULL) { perror(filename); return 0; }
      lxr = simpleLexerNew(input);
      if (lxr == NULL) { fprintf(stderr, "No memory (lexer)\n"); return 0; }
      tstrm = antlr3CommonTokenStreamSourceNew(ANTLR3_SIZE_HINT, TOKENSOURCE(lxr));
      if (tstrm == NULL)  { fprintf(stderr, "No memory (tstream)\n"); return 0; }
      psr = simpleParserNew(tstrm);
      if (psr == NULL)  { fprintf(stderr, "No memory (parser)\n"); return 0; }
      return 1;
  }
  
int yyparse() {
    Node *tree;
    tree = psr->start(psr); /* nome da regra principal */
    evaluate(tree);

    psr->free  (psr);           psr = NULL;
    tstrm ->free  (tstrm);      tstrm = NULL;
    lxr->free  (lxr);           lxr = NULL;
    input->close (input);       input = NULL;

    return 0;
  }
}
