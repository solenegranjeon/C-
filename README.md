# StringTPNote
---------------------------------------------------------------------
             Implementation of a String Class    
---------------------------------------------------------------------

For the project of C++ in 3BIM, INSA-LYON, 2015-2016
A. Cathignol - S. Granjeon - A. Weber

Class String: String.cpp String.h

-Constructors:
  - Default
  - Copy
  - C-string (Copies the null-terminated character sequence (C-string) pointed by s)

- Destructor

- clear() : Removes all characters from the string as if by executing erase(begin(), end()). The allocated memory will not be released, effectively leaving the capacity of the string unchanged.
- c_str() : Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object. This array includes the same sequence of characters that make up the value of the string object plus an additional terminating null-character ('\0') at the end. The pointer returned points to the internal array currently used by the string object to store the characters that conform its value.
- size() : Return length of string
- operator= (string) : 
- operator+ (char) : 
