#include<bits/stdc++.h>
using namespace std;

int main()
{
    enum class Doki {Sayanto , Anirek , Dudo , Ruby};
    Doki a ;
    a = Doki::Sayanto;

    switch(a)
    {
        case Doki::Sayanto: cout<<"It's Sayanto Here!!";break;

        case Doki::Anirek: cout<<"It's Anirek Here!!";break;

        case Doki::Dudo: cout<<"It's Dudo Here!!";break;

        case Doki::Ruby: cout<<"It's Ruby Here!!";break;
    }
}
