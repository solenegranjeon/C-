
#ifndef STRING_H__
#define STRING_H__
// ===========================================================================
//                                  Includes
// ===========================================================================



class String {
	
public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
	String();
	String(const String&);

  // =========================================================================
  //                                Destructor
  // =========================================================================
	~String();

  // =========================================================================
  //                                  Getters
  // =========================================================================

  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

 
  // =========================================================================
  //                              Public Methods
  // =========================================================================
	const int size();
	void clear();
	int capacity();
	bool empty();
	
	
protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
	char* tab_;
	int size_;
	int capacity_;
	static const int max_size_;	

// ===========================================================================
//                            Getters' definitions
// ===========================================================================


// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================

};
#endif // STRING_H__
