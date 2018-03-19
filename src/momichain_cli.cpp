#include <iostream>
#include <string>

#include "block_service.h"
#include "node_service.h"
#include "http_service.h"

int main(int argc, char * argv[]) {
	std::cout<<argc<<std::endl;
	if (3 == argc || 4 == argc) {
		int http_port = std::atoi(argv[1]);
		int ws_port = std::atoi(argv[2]);
		std::cout<<"http port: "<<http_port<<" ws port: "<<ws_port<<std::endl;

		auto block_service = new BlockService();
		auto node_service = new NodeService(block_service);
		node_service->load(ws_port);

		auto http_service = new HttpService();
		http_service->load(http_port);

		if (4 == argc) {
			std::string ws_address(argv[3]);
			std::cout<<ws_address<<std::endl;
			node_service->connect_node(ws_address);
		}
	}
	std::cout<<"Hello World!"<<std::endl;
}