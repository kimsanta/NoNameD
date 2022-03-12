#pragma once
class CResource
{
private:
	wstring m_strKey; // ���ҽ��� ��Ī�ϴ� �̸�
	wstring m_strRelativePath;	//���ҽ� �����

public:
	CResource();
	virtual ~CResource();

	void SetKey(const wstring& strKey);
	void SetRelativePath(const wstring& strPath);

	const wstring& GetKey();
	const wstring& GetRelativePath();
};

