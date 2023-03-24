#pragma once
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
/// <summary>
/// 来自于C++ Primer 405页的示例，
/// 创建一个可以共享元素的类
/// </summary>

class StrBlob
{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const;
	bool empty() const { return data->empty(); };
	// 添加和删除元素
	void push_back(const std::string& t);
	void pop_back();
	// 元素访问
	std::string& front();
	const std::string& front() const;
	std::string& back();
	const std::string& back() const;
private:
	std::shared_ptr<std::vector<std::string>> data;
	// 如果 data[i] 不合法，抛出一个异常
	void check(size_type i, const std::string& msg) const;
};

