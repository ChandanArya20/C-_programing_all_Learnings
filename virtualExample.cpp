#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    // virtual void display(){cout<<"RAM"<<endl;}
    // virtual void display(){};
    virtual void display()=0;
};

class CWHvideo : public CWH
{
    float videoLen;

public:
    CWHvideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLen = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating : " << rating << " out of 5 star" << endl;
        cout << "Length of this video is : " << videoLen << " minutes" << endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wC) : CWH(s, r)
    {
        words = wC;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial: " << rating << " out of 5 star" << endl;
        cout << "No. of words in this text tutorial is : " << words << endl;
    }
};

int main()
{
    string title;
    float rating, videoLn;
    int words;

    // for code with harry video
    title = "Django video";
    videoLn = 4.50;
    rating = 4.5;
    CWHvideo django(title, rating, videoLn);
    // django.display();

    // for code with harry text tutorial
    title = "Django tutorial text";
    words = 457;
    rating = 4.5;
    CWHtext djtext(title, rating, words);
    // djtext.display();

    CWH *ptr[2];
    ptr[0] = &django;
    ptr[1] = &djtext;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}