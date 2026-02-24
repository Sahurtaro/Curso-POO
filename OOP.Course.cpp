#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private: 
    string Name; string OwnerName; int SubscribersCount; list <string> PublishedVideoTitles;
public:
    YoutubeChannel(string name, string ownerName){
        Name=name;
        OwnerName=ownerName;
        SubscribersCount=0;
        
    };
    void GetInfo(){
         cout << "Name: " <<Name<<endl;    
    cout << "Owner name: "<<OwnerName<<endl;
    cout << "Susbcribers count: "<<SubscribersCount<<endl;
    cout << "Videos: "<<endl;
    for(string VideoTitle:PublishedVideoTitles){
        cout<<VideoTitle<<endl;
    }
    }
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount>0)
            SubscribersCount--;
        
    }
    void PublishVideo(string name){
        PublishedVideoTitles.push_back(name);
    }
};

int main(){
    YoutubeChannel ytChannel("PeluTV","Santiago H");
    ytChannel.PublishVideo("Ivan el trolazo");
    ytChannel.PublishVideo("Ricardo");
    ytChannel.GetInfo();

   

}