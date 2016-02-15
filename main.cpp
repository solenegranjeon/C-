
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


  String C = String("I'm not crazy, my mother had me tested!");
  printf("The size of C = %d \n",int(C.size()));
<<<<<<< HEAD

	String D = C ;
	D = C ;

=======
  C.reserve(102);
  printf("The capacity of C = %d \n",int(C.capacity()));
  C.reserve(42);
  printf("The capacity of C = %d \n",int(C.capacity()));
>>>>>>> 81890fca14f30d5b18f3c6849b42ccaea03e9030

  return 0;
}
