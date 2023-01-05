#ifndef TP11_H_INCLUDED
#define TP11_H_INCLUDED

#include <iostream>

using namespace std;

#define next(P) (P)->next
#define info(P) (P)->info
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define nil NULL

struct infotype{
    string artis;
    string judul;
};

typedef struct element *address;
struct element{
    infotype info;
    address next;
};

struct playlistlagu{
    address head, tail;
};

void createplaylist_1301210330(playlistlagu &Q);
void createelement_1301210330(infotype laguBaru, address &plagu);
void enqueue_1301210330(playlistlagu &Q, address plagu);
void dequeue_1301210330(playlistlagu &Q, address &plagu);
void show_1301210330(playlistlagu Q);



#endif // TP11_H_INCLUDED
