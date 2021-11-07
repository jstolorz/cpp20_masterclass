//
// Created by janusz on 06.11.2021.
//

#ifndef CPP20_MASTERCLASS_YOUTUBECHANNEL_H
#define CPP20_MASTERCLASS_YOUTUBECHANNEL_H

#include <iostream>
#include <list>

class YouTubeChannel {

   std::string name;
   std::string ownerName;
   int subscribersCount;
   std::list<std::string> publishedVideoTitles;

public:

    YouTubeChannel();

    YouTubeChannel(const std::string &name, const std::string &ownerName);

    YouTubeChannel(const std::string &name, const std::string &ownerName,
                   const std::list<std::string> &publishedVideoTitles);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getOwnerName() const;

    void setOwnerName(const std::string &ownerName);

    int getSubscribersCount() const;

    const std::list<std::string> &getPublishedVideoTitles() const;

    void setPublishedVideoTitles(const std::list<std::string> &publishedVideoTitles);

    void subscribe();

    void unsubscribe();



    static void objectTest();


};

class CookingYouTubeChannel : public YouTubeChannel{
public:
    CookingYouTubeChannel(const std::string &name, const std::string &ownerName);

    void practice();
};


#endif //CPP20_MASTERCLASS_YOUTUBECHANNEL_H
