
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
		String(const char* str);
		String& operator=(const String&);
		String& operator=(char);
		
		// =========================================================================
		//                                Destructor
		// =========================================================================
		
		~String(); 

		// =========================================================================
		//                                  Getters
		// =========================================================================
		
		size_t size() const;
		size_t length() const;
		size_t max_size() const;
		size_t capacity(); //const?
		const char* c_str();
		// =========================================================================
		//                                  Setters
		// =========================================================================

		void clear();
		void reserve(size_t n);
		void resize (size_t n);
		void resize (size_t n, char c);
		
		// =========================================================================
		//                                 Operators
		// =========================================================================
		
		friend String operator+(const String&, const String& ); 
		friend String operator+(const String& , const char* );
		friend String operator+(const String&, char);
	 
		// =========================================================================
		//                              Public Methods
		// =========================================================================

		bool empty();

	protected :
		// =========================================================================
		//                             Protected Methods
		// =========================================================================

		// =========================================================================
		//                                Attributes
		// =========================================================================
		
		char* tab_; // ptr pointing to a table of Characters
		size_t size_;  // doesn't include \0
		size_t capacity_;  // doesn't include \0
		static const size_t max_size_;  // equals 100 (without \0)	

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
