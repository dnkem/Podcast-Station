#ifndef PODIFY_H
#define PODIFY_H

#include "Podcast.h"
#include "Array.h"
#include "Search.h"

#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>

class Podify{
    public:

		// ostream& operator<<(ostream&);

        ~Podify();

        void addPodcast(Podcast*);
        void addEpisode(Episode*, string title);
        const Array<Podcast*>& getPodcasts();
        Podcast* getPodcast(int);
        Podcast* getPodcast(string);
        void getEpisodes(Search&, Array<Episode*>&);
        // void print(ostream&);
        

    private:
        Array<Podcast*> pods;
};

#endif