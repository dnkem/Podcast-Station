#ifndef PODCAST_H
#define PODCAST_H

#include "Array.h"
#include "Episode.h"



class Podcast{
    public:
		friend ostream& operator<<(ostream&, Podcast&);

        Podcast(string t, string h) : title(t), host(h){}
        ~Podcast();

        bool equals(const string& t);
        Episode* get(const int index);
        int getSize();
        void add(Episode*);      

        virtual void print(ostream& os) const;
        virtual void printWithEpisodes(ostream& os) const;

    private:
        Array<Episode*> eps;
        string title;
        string host;

};


#endif