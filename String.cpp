
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include "String.h"

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

const int String::max_size_=100;
// ===========================================================================
//                                Constructors
// ===========================================================================
String::String() {

	tab_=nullptr;
	size_=0;
	capacity_=0;
	
}

String::String(const String& str){
	
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

int String::size(){
	return size_;
}

bool String::empty(){
	if(size_==0){
		return true;
	} 
	else {
		return false;
	}
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
