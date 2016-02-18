# StringTPNote
---------------------------------------------------------------------
             Implementation of a String Class    
---------------------------------------------------------------------

Usefull links:

- http://en.cppreference.com/mwiki/index.php?title=Special%3ASearch&search=string
- http://www.cplusplus.com/reference/string/string/operator+/
- http://www.parsons.eu/teaching/bim2015/tp/

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
- length() : Return length of string
- max_size() : Return the maximum size that will be accepted when the string is created.
- operator= (string str) : Replaces the contents with a copy of str. If *this and str are the same object, this function has no effect.
- operator= (char) : Replaces the contents with a single character. Require a change in capacity and size. If *this and char are the same object, this function has no effect.
- operator+ (char) : Concatenates String and the new character (lhs is the string and rhs is the new character). Returns a newly constructed string object.

- operator+ (char*) : Concatenates a String and (a pointer to) characters (slhs is the string and srhs is the pointer). Returns a newly constructed string object.

To do: 
- capacity, empty, reserve, =(char*), +(string)

Done:
- Constr copie, c_str, size, clear, =(string),  +(char)
- Constr c-str, length, max_size, resize, =(char), +(char*)
- Destructor,
