#pragma once
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
/// <summary>
/// ������C++ Primer 405ҳ��ʾ����
/// ����һ�����Թ���Ԫ�ص���
/// </summary>

class StrBlob
{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const;
	bool empty() const { return data->empty(); };
	// ��Ӻ�ɾ��Ԫ��
	void push_back(const std::string& t);
	void pop_back();
	// Ԫ�ط���
	std::string& front();
	const std::string& front() const;
	std::string& back();
	const std::string& back() const;
private:
	std::shared_ptr<std::vector<std::string>> data;
	// ��� data[i] ���Ϸ����׳�һ���쳣
	void check(size_type i, const std::string& msg) const;
};

