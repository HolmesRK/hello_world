#include "StrBlob.h"

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) {

}

StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {

}

// 返回元素个数
StrBlob::size_type StrBlob::size() const {
	return data->size();
}

// 添加元素
void StrBlob::push_back(const std::string& t) {
	data->push_back(t);
}

// 删除元素
void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

// 访问元素
std::string& StrBlob::front() {
	// 如果 vector 为空，check 会抛出一个异常
	check(0, "front on empty StrBlob");
	return data->front();
}

const std::string& StrBlob::front() const {
	check(0, "front on empty StrBlob");
	return data->front();
}

std::string& StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}

const std::string& StrBlob::back() const {
	check(0, "back on empty StrBlob");
	return data->back();
}

// 检查下标越界
void StrBlob::check(size_type i, const std::string& msg) const {
	if (i >= data->size()) {
		throw std::out_of_range(msg);
	}
}