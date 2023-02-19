#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float Rating;

public:
    CWH(string s, float r)
    {
        title = s;
        Rating = r;
    }
    virtual void display() {cout<<"Bogus code"<<endl;}
};

class CWHVideo : public CWH
{
    float Videolength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        Videolength = vL;
    }
    void display()
    {
        cout << "1. This is an amazing video with title " << title << endl
             << "Ratings: " << Rating << " out of 5 stars" << endl
             << "Length of this video is: " << Videolength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "2. This is an amazing text tutorial with title " << title << endl
             << "Ratings of this text tutorial: " << Rating << " out of 5 stars" << endl
             << "No of words is this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial";
    vlen = 12.34;
    rating = 4.5;
    CWHVideo djvid(title, rating, vlen);
    // djvid.display();

    title = "Django tutorial text";
    words = 233;
    rating = 4.5;
    CWHText djtext(title, rating, words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvid;
    tuts[1] = &djtext;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

// Rules for virtual functions
// 1. They cannot be static
// 2. They are accessed by object pointers 
// 3. Virtual functions can be a friend of another class 
// 4. A virtual function in base class might not be used.
// 5. A virtual function defined in the base class, there is no necessity of redefining it in the derived class