#ifndef EPISODE_H
#define EPISODE_H

#include <string>
#include <iostream>

using namespace std;

class Episode{
    friend ostream& operator<<(ostream&, const Episode&);

    public:

        Episode(const string&, const string&, const string&, const string&, const string&, const string&);

        const string& getPodTitle()const;
        const string& getHost()const;
        const string& getEpisodeTitle()const;
        const string& getCategory()const;
        const string& getAudio()const;
        const string& getVideoFile()const;


        // abstract
        virtual void print(ostream&) const; 

    private:
        string podcastTitle;
        string host;
        string episodeTitle;
        string category;
        string audio;
        string videoFile;
};

#endif
