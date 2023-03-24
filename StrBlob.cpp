#include "StrBlob.h"

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) {

}

StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {

}

// ����Ԫ�ظ���
StrBlob::size_type StrBlob::size() const {
	return data->size();
}

// ���Ԫ��
void StrBlob::push_back(const std::string& t) {
	data->push_back(t);
}

// ɾ��Ԫ��
void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

// ����Ԫ��
std::string& StrBlob::front() {
	// ��� vector Ϊ�գ�check ���׳�һ���쳣
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

// ����±�Խ��
void StrBlob::check(size_type i, const std::string& msg) const {
	if (i >= data->size()) {
		throw std::out_of_range(msg);
	}
}