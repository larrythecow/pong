#ifndef _sid_SDL_net_h 
#define _sid_SDL_net_h 

#define DIMBUFFER 1024

void sid_SDL_Init();
void sid_SDLNet_Init();
TCPsocket sid_SDLNet_TCP_Open();
int sid_SDLNet_TCP_Send();
IPaddress * sid_SDLNet_TCP_GetPeerAddress();
void sid_print_ip();
void sid_SDLNet_ResolveHost();

#endif
