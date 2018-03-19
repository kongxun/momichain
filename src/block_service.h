//
// Created by kongxun.yb on 2018/3/19.
//

#ifndef MOMICHAIN_BLOCK_SERVICE_H
#define MOMICHAIN_BLOCK_SERVICE_H

#include <vector>
#include "openssl/sha.h"

#include "block.h"

class BlockService
{
private:
	std::vector<Block> _blocks;

public:
	BlockService() = default;

	void add_block(Block block);

	const std::string calculate_hash(Block &block);

	bool check_block(Block &block);

	const Block& get_tail_block();
};

#endif //MOMICHAIN_BLOCK_SERVICE_H