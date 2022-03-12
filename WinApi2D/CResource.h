#pragma once
class CResource
{
private:
	wstring m_strKey; // 리소스를 지칭하는 이름
	wstring m_strRelativePath;	//리소스 상대경로

public:
	CResource();
	virtual ~CResource();

	void SetKey(const wstring& strKey);
	void SetRelativePath(const wstring& strPath);

	const wstring& GetKey();
	const wstring& GetRelativePath();
};

