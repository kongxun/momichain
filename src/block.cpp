//
// Created by kongxun.yb on 2018/3/18.
//

#include "block.h"

uint64_t Block::get_index() const {
	return _index;
}

void Block::set_index(uint64_t _index) {
	Block::_index = _index;
}

const std::string &Block::get_hash() const {
	return _hash;
}

void Block::set_hash(const std::string &_hash) {
	Block::_hash = _hash;
}

const std::string &Block::get_pre_hash() const {
	return _pre_hash;
}

void Block::set_pre_hash(const std::string &_pre_hash) {
	Block::_pre_hash = _pre_hash;
}

int Block::get_timestamp() const {
	return _timestamp;
}

void Block::set_timestamp(int _timestamp) {
	Block::_timestamp = _timestamp;
}

const std::string &Block::get_content() const {
	return _content;
}

void Block::set_content(const std::string &_content) {
	Block::_content = _content;
}
