#include "Episode.h"

Episode::Episode(const string& podT, const string& h, const string& epT, const string& cat, const string& a, const string& vid) 
: podcastTitle(podT), host(h), episodeTitle(epT), category(cat), audio(a), videoFile(vid) 
{
    // cout<<"Episode CREATED "<<endl;
}

const string& Episode::getPodTitle() const{
    return podcastTitle;
} 
const string& Episode::getHost() const{
    return host;
}
const string& Episode::getEpisodeTitle()const{
    return episodeTitle;
}
const string& Episode::getCategory()const{
    return category;
}
const string& Episode::getAudio()const{
    return audio;
}
const string& Episode::getVideoFile() const{
    return videoFile;
}

ostream& operator<<(ostream& ost, const Episode& e){
    e.print(ost);
    return ost;
}

void Episode::print(ostream& ost) const{
    ost << "Ep Title:   " << getEpisodeTitle()<<endl;
    ost << "Audio:      " << getAudio() << endl;
    ost << "Category:   "<< getCategory() << endl;
    ost << "Host:       "<< getHost() << endl;
    ost << "Pod Title:  " << getPodTitle() << endl;
    ost << "Vid:        " << getVideoFile();
}
