#ifndef PODCASTPLAYER_H
#define PODCASTPLAYER_H

#include "Episode.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class PodcastPlayer{
    public: 
        virtual void play(const Episode& m, ostream& ost) = 0;
        // virtual void look() = 0;
};

class AudioPlayer: virtual public PodcastPlayer{
    public:
        virtual void play(const Episode& m, ostream& ost);
        // virtual void look();
};
class VideoPlayer: virtual public PodcastPlayer{
    public:
        virtual void play(const Episode& m, ostream& ost);
        // virtual void look();
};

#endif

