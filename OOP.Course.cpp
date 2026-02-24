#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public: 
    string Name; string OwnerName; int SubscribersCount; list <string> PublishedVideoTitles;
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
};

int main(){
    YoutubeChannel ytChannel("PeluTV","Santiago H");
    ytChannel.PublishedVideoTitles.push_back("Ivan el trolazo");
    ytChannel.GetInfo();

   

}