#ifndef SEARCH_H
#define SEARCH_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

#include "Episode.h"
#include "defs.h"


class Search{
    public:
        friend ostream& operator<<(ostream&, const Search&);
        virtual bool matches(const Episode* e) = 0;
        bool operator==(const Search&) const;
    
    protected:
        virtual void print(ostream& ost) const = 0;
};

class H_Search: virtual public Search{
    public:
        H_Search(string h): host(h){}
        virtual bool matches(const Episode*);

    protected:
        string host;
        virtual void print(ostream& os) const{ os<<host<<endl; }
};
 
class C_Search: virtual public Search{
    public:
        C_Search(string c): category(c){}
        virtual bool matches(const Episode*);

    protected: 
        string category;
        virtual void print(ostream& os) const{ os<<category<<endl; }
};

class HorC_Search: virtual public H_Search, virtual public C_Search{
    public:
        HorC_Search(string h, string c): H_Search(h), C_Search(c){}
        virtual bool matches(const Episode*);
    protected:
        virtual void print(ostream& os) const{ os<<category<<" "<<host<<endl; }
       
};



#endif