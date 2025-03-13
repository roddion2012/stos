#include<iostream>
#include<cstring>

using namespace std;

struct element
{
    int dane;
    element *poprzedni;
};




element * push(int liczba, element *wierzcholek)
{
    element *w;
    w=new element;

    w->dane=liczba;
    w->poprzedni=wierzcholek;

}
element * pop(int *liczba, element *wierzcholek)
{

    if(wierzcholek==nullptr) return 0;

    element *w;

    *liczba = wierzcholek->dane;
    w=wierzcholek->poprzedni;

    delete wierzcholek;
    return w;

}


int main()
{
    element *stos=nullptr;
    int liczba;

    for(int i=1;i<10;i++)
        stos=push(i,stos);

    stos=pop(&liczba,stos);
    cout<<"ze stosu: "<<liczba<<endl;


    while(stos!=nullptr)
    {
        cout<<stos->dane<<endl;
        stos=stos->poprzedni;
    }


}
