
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include "String.h"

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

const size_t String::max_size_=100;
// ===========================================================================
//                                Constructors
// ===========================================================================
String::String() {

	size_ = 0;
	capacity_ = 0;
	tab_ = new char[capacity_];
	tab_[0] = '\0';
}

String::String(const String& str){
	
	size_ = str.size_ ;
	capacity_ = str.capacity_;
	tab_ = new char[capacity_];
	for(size_t i = 0; i<size_; i++){
		tab_[i] = str.tab_[i];
	}
	
}	


String& String::operator=(const String& str){
}

String::String(const char* str){
  
	size_ = str.size_ ;
	capacity_ = str.capacity_;
	tab_ = new char[capacity_];
	for(int i = 0; i<size_; i++){
		tab_[i] = str.tab_[i];
	}
	
}	


// ===========================================================================
//                                 Destructor
// ===========================================================================
String::~String() {
	delete [] tab_;
	tab_ = nullptr;
	printf("Protocol order 62 executed : String no longer operational \n");
}

// ===========================================================================
//                               Public Methods
// ===========================================================================

int String::capacity(){
	return capacity_;
}

const int String::size(){
	return size_;
}

void String::clear(){
	size_ = 0;
	tab_[0] = '\0';
	
}

const char* String::c_str(){
	return tab_;
}

bool String::empty(){
	if(size_==0){
		return true;
	} 
	else {
		return false;
	}
}

void String::reserve(int n){
	if(n>capacity_){
		
	}
	
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              External Methods
// ===========================================================================
