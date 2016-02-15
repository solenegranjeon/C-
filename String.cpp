
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
  
  size_t sizeCount = 0;
  for (size_t i = 0 ; str[i] != '\0' ; i++){
    sizeCount ++;
  }
  
	size_ = sizeCount ;
	capacity_ = sizeCount ;
	tab_ = new char[capacity_];
	for(size_t i = 0; i<size_; i++){
		tab_[i] = str[i];
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

size_t String::capacity(){
	return capacity_;
}

size_t String::size() const{
	return size_;
}

size_t String::length() const{
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

void String::reserve(size_t n){
	if(n>capacity_){
		if(n>max_size_){
			printf("Vous ne pouvez pas réserver plus de %d caractères \n",(int)(max_size_));
		} else {
			char* data= new char[n];
			for(size_t i = 0; i<size_; i++){
				data[i] = tab_[i];
			}
			delete [] tab_;
			tab_ = new char[n];
			capacity_=n;
			for(size_t i = 0; i<size_; i++){
				tab_[i] = data[i];
			}
			delete [] data;
		}
	}	
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              External Methods
// ===========================================================================
