#include <iostream>
#include <string>

int main(int argc, char * argv[]) {
	if (2 == argc || 3 == argc) {
		int http_port = std::atoi(argv[0]);
		int listen_port = std::atoi(argv[1]);

		if (3 == argc) {
			std::string ws_address(argv[2]);
		}
	}
}