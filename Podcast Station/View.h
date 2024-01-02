#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
#include <vector>

#include "Podify.h"
// #include "PodcastFactory.h"
#include "Podcast.h"
#include "PodcastPlayer.h"
#include "Episode.h"
// #include "Array.h"
// #include <iostream>

using namespace std;

class View {
		
	public:
		//constructors
		View();
		// ostream& operator<<(ostream&);

		void menu(vector<string>&, int& choice);
		void printAllPodcasts(const Array<Podcast*>& podcasts);
		void podcastMenu( const Array<Podcast*>& podcasts, int& choice);
		void printPodcast(const Podcast*);
		// void episodeMenu(Podcast&, int& choice);
        void promptHost(string& host);
		void promptCategory(string& category);
		void printPlaylist(Array<Episode*>&);
		void playPlaylist(Array<Episode*>&);

		void promptVideo();
		void toggleVideo(bool);


	private:
		PodcastPlayer* player;	
		VideoPlayer vidPlayer;
		AudioPlayer audPlayer;
		
};
#endif