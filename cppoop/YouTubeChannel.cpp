//
// Created by janusz on 06.11.2021.
//

#include "YouTubeChannel.h"

const std::string &YouTubeChannel::getName() const {
    return name;
}

void YouTubeChannel::setName(const std::string &name) {
    YouTubeChannel::name = name;
}

const std::string &YouTubeChannel::getOwnerName() const {
    return ownerName;
}

void YouTubeChannel::setOwnerName(const std::string &ownerName) {
    YouTubeChannel::ownerName = ownerName;
}

int YouTubeChannel::getSubscribersCount() const {
    return subscribersCount;
}


const std::list<std::string> &YouTubeChannel::getPublishedVideoTitles() const {
    return publishedVideoTitles;
}

void YouTubeChannel::setPublishedVideoTitles(const std::list<std::string> &publishedVideoTitles) {
    YouTubeChannel::publishedVideoTitles = publishedVideoTitles;
}

void YouTubeChannel::objectTest() {

    YouTubeChannel youTubeChannel;
    youTubeChannel.setName("Janusz");
    youTubeChannel.setOwnerName("Janusz");
    youTubeChannel.setPublishedVideoTitles({"C++ for beginer",
                                            "HTML & CSS", "C++ OOP"});

    std::cout << "Name : " << youTubeChannel.getName() << std::endl;

    for(std::string videoTitle: youTubeChannel.getPublishedVideoTitles()) {
        std::cout << "Video title : " << videoTitle << std::endl;
    }

    YouTubeChannel youTubeChannel1("Janusz",
                                   "Janusz",
                                   {"C++ for advanced","Node.js", "C++ 20"});

    std::cout << "Name : " << youTubeChannel1.getName() << std::endl;


}

YouTubeChannel::YouTubeChannel(const std::string &name, const std::string &ownerName,
                               const std::list<std::string> &publishedVideoTitles) :
                               name(name), ownerName(ownerName),
                               publishedVideoTitles(publishedVideoTitles) {}

YouTubeChannel::YouTubeChannel() {}

void YouTubeChannel::subscribe() {
    subscribersCount++;
}

void YouTubeChannel::unsubscribe() {
     if(subscribersCount > 0){
         subscribersCount--;
     }
}

YouTubeChannel::YouTubeChannel(const std::string &name, const std::string &ownerName)
                               : name(name), ownerName(ownerName) {}


CookingYouTubeChannel::CookingYouTubeChannel(const std::string &name, const std::string &ownerName)
                                            : YouTubeChannel(name, ownerName) {}

void CookingYouTubeChannel::practice() {
   std::cout << "practicing cooking. learning new recipes, experimenting with spices ... " << std::endl;
}
