
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

//======================================================================
//                Testing the Constructor c-string
//                And testing the resize method
//======================================================================

  String C1 = String("I'm not crazy, my mother had me tested!"
    "I'm not crazy, my mother had me tested!"
    "I'm not crazy, my mother had me tested!");
  
  C1.resize(105);
  printf("Resizing to 105 : \n size C1 = %d, capacity C1 = %d"
  "\n",int(C1.size()),int(C1.capacity()));
  
  C1.resize(40);
  printf("Resizing to 40 : \n size C1 = %d, capacity C1 = %d"
  "\n",int(C1.size()),int(C1.capacity()));

  C1.resize(25);
  printf("Resizing to 25 : \n size C1 = %d, capacity C1 = %d"
  "\n\n",int(C1.size()),int(C1.capacity()));
  
  String C = String("I'm not crazy, my mother had me tested!");
  printf("The size of C = %d \n",int(C.size()));

	String D = C ;
	D = C ;

  C.reserve(102);
  printf("The capacity of C = %d \n",int(C.capacity()));
  
  C.reserve(42);
  printf("The capacity of C = %d \n",int(C.capacity()));
  

  String E = String("Hello ");
  
  printf("The size of E = %d \n",int(E.size()));
  printf("The capacity of E = %d \n",int(E.capacity()));
  
  String F = String("World");
  
  //~ E+F;
  
  printf("The size of E = %d \n",int(E.size()));
  printf("The capacity of E = %d \n",int(E.capacity()));
  
  
  return 0;
}
