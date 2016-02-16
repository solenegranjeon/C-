
// ===========================================================================
//                                  Includes
// ===========================================================================

#include <stdlib.h>
#include <stdio.h>
#include "String.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main() {
  
  printf("Hello world !\n");
  
  String A = String();
  
  if(A.empty()){
	  printf("I'm empty \n");
  } else { 
	  printf("I'm not empty \n");
  }
  
  String B = String(A);

  String C1 = String("I'm not crazy, my mother had me tested!"
    "I'm not crazy, my mother had me tested!"
    "I'm not crazy, my mother had me tested!");
  
  C1.resize(25);
  printf("%d,%d",int(C1.size()),int(C1.capacity())); // I've got a 
  // problem , it doesn't print the right capacity !!!! To see...
  
  String C = String("I'm not crazy, my mother had me tested!");
  printf("The size of C = %d \n",int(C.size()));

	String D = C ;
	D = C ;

  C.reserve(102);
  printf("The capacity of C = %d \n",int(C.capacity()));
  
  C.reserve(42);
  printf("The capacity of C = %d \n",int(C.capacity()));
  

  String E = String("Hello ");
  String F = String("World");
  
  E+F;
  
  printf("The size of E = %d \n",int(E.size()));
  printf("The capacity of E = %d \n",int(E.capacity()));
  
  
  return 0;
}
