#include "tp11.h"

void createplaylist_1301210330(playlistlagu &Q){
    head(Q) = nil;
    tail(Q) = nil;
}
void createelement_1301210330(infotype laguBaru, address &plagu){
    next(plagu)=nil;
    info(plagu) = laguBaru;
}


void enqueue_1301210330(playlistlagu &Q, address plagu){
    if(head(Q)==nil&&tail(Q)==nil){
            head(Q)=plagu;
            tail(Q)=plagu;
    }else{
        next(tail(Q))=plagu;
        tail(Q)=plagu;
    }
}
void dequeue_1301210330(playlistlagu &Q, address &plagu){
    if(head(Q)==tail(Q)){
        plagu = head(Q);
        head(Q) = nil;
        tail(Q)=nil;
    }else{
        plagu = head(Q);
        head(Q)=next(head(Q));
        next(plagu)=nil;
    }
}
void show_1301210330(playlistlagu Q){
    address plagu = head(Q);
    cout<<"playlist lagu"<<endl;
    while(plagu != nil){
        cout<<"Artist :"<<info(plagu).artis<<endl;
        cout<<"Lagu :"<<info(plagu).judul<<endl;
        plagu = next(plagu);

    }
}

