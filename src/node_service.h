//
// Created by kongxun.yb on 2018/3/18.
//

#ifndef MOMICHAIN_NODE_SERVICE_H
#define MOMICHAIN_NODE_SERVICE_H

#include <vector>

#include "mongoose.h"
#include "block_service.h"

class NodeService
{
private:
	std::vector<mg_connection> _connection_pool;
	BlockService *_block_service;

public:
	NodeService(BlockService *block_service) : _block_service(block_service){}

	void load(int ws_port);

	void connect_node(std::string &ws_address);

};

#endif //MOMICHAIN_NODE_SERVICE_H
