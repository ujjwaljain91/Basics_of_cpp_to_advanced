#include <iostream>
#include <cstring>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display(){}

};
class cwhvideo : public cwh
{
    float videolength;
    public:
    cwhvideo(string s,float r, float vl) : cwh(s,r){
        videolength =vl;
    }
    void display()
{
    cout<<"this is an amazing video with title"<<title<<endl;
    cout<<"ratings:"<<rating<<"out of 5 stars"<<endl;
    cout<<"length of this video is :"<<videolength<<"minutes"<<endl;
}
};
class cwhtext: public cwh
{
    int words;
    public:
    cwhtext(string s,float r, int wc) : cwh(s,r){
        words =wc;
    }
    void display()
{
    cout<<"this is an amazing text tutorial with title  "<<title<<endl;
    cout<<"ratings:"<<rating<<"out of 5 stars"<<endl;
    cout<<"no of words in this text tutorial is :"<<words<<"words"<<endl;
}
};


int main(){
    string title;
    float rating ,vlen;
    int words;
    // for code with harry
    title= "django tutorial";
    vlen= 4.56;
    rating= 4.89;
    cwhvideo djvideo(title,rating,vlen);

    // for code with harry text
    title= "django tutorial text";
    words=500;
    rating=4.15;
    cwhtext djtext(title, rating,words);

    cwh *tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djtext;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}