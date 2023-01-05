#include <iostream>
#include "tp11.h"

using namespace std;

int main()
{
    playlistlagu Q;
    infotype lagu;
    address plagu;
    createplaylist_1301210330(Q);

    cout<<"IF4504 + 130121033(0) = 4"<<endl;
    for(int i = 1; i<=4; i++){
        cout<<"Input ke :"<< i << endl;
        cout<<"Input artis :";
        cin>> lagu.artis;
        cout<<"Input lagu :";
        cin>> lagu.judul;
        plagu = new element;
        createelement_1301210330(lagu, plagu);
        enqueue_1301210330(Q, plagu);
    }
    cout<<"sebelum dihapus"<<endl;
    show_1301210330(Q);
    cout<<endl;
    cout<<"sesudah dihapus"<<endl;
    dequeue_1301210330(Q, plagu);
    show_1301210330(Q);
    return 0;
}
