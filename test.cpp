#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#define SERVER_IP "192.168.19.12"    // 指定服务端的IP，记得修改为你的服务端所在的ip
#define SERVER_PORT 16555            // 指定服务端的port
int main(){
	struct sockaddr_in servaddr;
	std::cout << "Test";
}
