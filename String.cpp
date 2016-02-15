
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
	tab_ = new char[capacity_ + 1];
	tab_[0] = '\0';
}

String::String(const String& str){
	
	size_ = str.size_ ;
	capacity_ = str.capacity_;
	tab_ = new char[capacity_ + 1];
	for(size_t i = 0; i<size_; i++){
		tab_[i] = str.tab_[i];
	}
	
}	

// Replaces the contents with a copy of str. 
// If *this and str are the same object, this function has no effect.
String& String::operator=(const String& str){
	
	bool equal = true;
	if(this->size_ != str.size_ or this->capacity_ != str.capacity_){
		equal = false;
	}
	else{
		int i = 0;
		while(str.tab_[i]!= '\0'){
			if(str.tab_[i]!=this->tab_[i]){
				equal = false;
			}
			i++;
		}
	}
	
	if(equal==false){
		size_ = str.size_;
		capacity_ = str.capacity_;
		tab_ = new char[capacity_ + 1];
		for(size_t i = 0; i<size_; i++){
			tab_[i] = str.tab_[i];
		}
	}
	else{
		printf("The two strings are already equal.\n");
	}
}

String::String(const char* str){
  
  size_t sizeCount = 0;
  for (size_t i = 0 ; str[i] != '\0' ; i++){
    sizeCount ++;
  }
  
  if (sizeCount <= max_size_){
    size_ = sizeCount ;
    capacity_ = sizeCount ;
    tab_ = new char[capacity_ + 1];
    for(size_t i = 0; i<=size_; i++){
      tab_[i] = str[i];
    }	
  }
  
  else {
    printf("The string you want to put is too long for me, I can't "
      "handle it. So I created a new string with values by default.\n");
    size_ = 0;
    capacity_ = 0;
    tab_ = new char[capacity_+1];
    tab_[0] = '\0';
  }
}	


// ===========================================================================
//                                 Destructor
// ===========================================================================
String::~String() {
	delete [] tab_;
	tab_ = nullptr;
	printf("Protocol order 62 executed : String no longer operational. \n");
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

size_t String::max_size() const{
	return max_size_;
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
			for(size_t i = 0; i<size_ + 1; i++){
				data[i] = tab_[i];
			}
			delete [] tab_;
			tab_ = new char[n];
			capacity_=n;
			for(size_t i = 0; i<size_ + 1; i++){
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
