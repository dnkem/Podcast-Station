#include "Search.h"
// #include <iostream>

bool Search::operator==(const Search& s) const{
   return (*this == s);
}

bool H_Search::matches(const Episode* e){
   return (e->getHost() == this->host);
}

bool C_Search::matches(const Episode* e){
   return (e->getCategory() == this->category);
}

bool HorC_Search::matches(const Episode* e){
   return (C_Search::matches(e) || H_Search::matches(e));
}

ostream& operator<<(ostream& os, const Search& s){
    s.print(os);
    return os;
}