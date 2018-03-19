//
// Created by kongxun.yb on 2018/3/19.
//

#include "block_service.h"

void BlockService::add_block(Block block) {
	_blocks.push_back(block);
}

const std::string BlockService::calculate_hash(Block &block) {
	std::string dst_str;
	std::string src_str = block.get_index() + block.get_timestamp() + block.get_content();
	sha256(src_str, dst_str);
	return dst_str;
}

bool BlockService::check_block(Block &block) {
	uint64_t index = block.get_index();
	uint64_t next_index = _blocks.size()+1;
	if (index < next_index) {
		return false;
	}

	Block tail_block = get_tail_block();
	if (block.get_index() == _blocks.size()+1) {
		if (block.get_pre_hash() == tail_block.get_hash()) {

		}
	}
	return false;
}

const Block &BlockService::get_tail_block() {
	return *_blocks.end();
}
