//
// Created by kongxun.yb on 2018/3/18.
//

#ifndef MOMICHAIN_BLOCK_H
#define MOMICHAIN_BLOCK_H

#include <cstdint>
#include <string>
#include <sys/time.h>

class Block
{
private:
	uint64_t _index;
	std::string _hash;
	std::string _pre_hash;
	int _timestamp;
	std::string _content;//其实是梅克尔树根节点，这里简化处理

public:
	Block(uint64_t _index, std::string& _hash, std::string& _pre_hash, std::string& _content)
			: _index(_index), _pre_hash(_pre_hash), _content(_content)
	{
		struct timeval tv;
		gettimeofday(&tv, nullptr);
		_timestamp = tv.tv_usec;
	}

	uint64_t get_index() const;

	void set_index(uint64_t _index);

	const std::string &get_hash() const;

	void set_hash(const std::string &_hash);

	const std::string &get_pre_hash() const;

	void set_pre_hash(const std::string &_pre_hash);

	int get_timestamp() const;

	void set_timestamp(int _timestamp);

	const std::string &get_content() const;

	void set_content(const std::string &_content);
};
#endif //MOMICHAIN_BLOCK_H