/* 
 * File:   main.c
 * Author: sid
 *
 * Created on September 4, 2012, 11:40 PM
 */

#include </usr/include/stdio.h>
#include </usr/include/stdlib.h>
#include </usr/include/SDL/SDL_net.h>
#include </home/sid/lib/sid_SDL_net.h>

#define DIMBUFFER 1024

/*
 * 
 */

void sid_SDL_Init() {
    if (SDL_Init(0) == -1)
    {
        fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        exit(-1);
    }
    fprintf(stdout, "SDL_Init:\t\tOK\n");
}

void sid_SDLNet_Init() {
    if (SDLNet_Init() == -1)
    {
        fprintf(stderr, "SDLNet_Init: %s\n", SDLNet_GetError());
        exit(-2);
    }
    fprintf(stdout, "SDLNet_Init:\t\tOK\n");
}

void sid_SDLNet_ResolveHost(IPaddress *address, const char *host, Uint16 port) {
    if (SDLNet_ResolveHost(address, host, port) < 0)
    {
        fprintf(stderr, "SDLNet_ResolveHost: %s\n", SDLNet_GetError());
        exit(-3);
    }
    fprintf(stdout, "SDLNet_ResolveHost:\tOK\n");
}

TCPsocket sid_SDLNet_TCP_Open(IPaddress *ip) {
    TCPsocket socket;
    if (!(socket = SDLNet_TCP_Open(ip)))
    {
        fprintf(stderr, "SDLNET_TCP_Open: %s\n", SDLNet_GetError());
        exit(-3);
    }
    fprintf(stdout, "SDLNET_TCP_Open:\tOK\t");
    sid_print_ip(*ip);
    fprintf(stdout, "\n");
    return socket;
}

int sid_SDLNet_TCP_Send(TCPsocket socket, const void *buffer, int len) {

    if ((SDLNet_TCP_Send(socket, buffer, len)) < len)
    {
        fprintf(stderr, "SDLNet_TCP_Send:%s\n", SDLNet_GetError());
        exit(-5);
    }
    //    fprintf(stdout, "\t\tSDLNet_TCP_Send:\t\t%s\n", (char *)buffer);
    return len;
}

IPaddress * sid_SDLNet_TCP_GetPeerAddress(TCPsocket socket) {
    IPaddress *ip;
    if ((ip = SDLNet_TCP_GetPeerAddress(socket)) == NULL)
    {
        fprintf(stderr, "SDLNet_TCP_GetPeerAddress %s\n", SDLNet_GetError());
    }
    return ip;
}

void sid_print_ip(IPaddress ip) {
    Uint32 number32 = SDLNet_Read32(&ip.host);
    Uint16 number16 = SDLNet_Read16(&ip.port);

    printf("%d.%d.%d.%d:",
            (number32 & 0xFF000000) >> 24, (number32 & 0x00FF0000) >> 16,
            (number32 & 0x0000FF00) >> 8, (number32 & 0x000000FF));

    printf("%d\n", (number16 & 0xffff));
}
