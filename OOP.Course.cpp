#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private: 
    string Name; int SubscribersCount; list <string> PublishedVideoTitles;
protected:
     string OwnerName;
     int ContentQuality;
public:
    YoutubeChannel(string name, string ownerName){
        Name=name;
        OwnerName=ownerName;
        SubscribersCount=0;
        ContentQuality=0;
        
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
    void CheckAnalytics(){
        if(ContentQuality<5){
            cout << Name << " has a bad content quality" << endl;
        } else {
             cout << Name << " has a good content quality" << endl;
        }
    };
};

class CookingYoutubeChannel:public YoutubeChannel{
   public: CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){}
   void Practice(){
    cout<<OwnerName<<"is practicing"<<endl;
    ContentQuality++;
   }
};
class SingingYoutubeChannel:public YoutubeChannel{
   public: SingingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){}
   void Practice(){
    cout << OwnerName << " is singing" << endl;
    ContentQuality++;
   }
};

int main(){
    CookingYoutubeChannel cookingytChannel("canal","SantiagoH");
    cookingytChannel.Practice();
    YoutubeChannel ytChannel("PeluTV","Santiago H");
    ytChannel.PublishVideo("Ivan el trolazo");
    ytChannel.PublishVideo("Ricardo");
    ytChannel.GetInfo();
    SingingYoutubeChannel singingytChannel("cantar","Gab");
    singingytChannel.Practice();

    YoutubeChannel * yt1 = &cookingytChannel;
    YoutubeChannel * yt2 = &singingytChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

}