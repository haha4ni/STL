/*
	set<value>
	資料結構為紅黑樹
	搜尋&插入(O(logn))
	set中的元素都是排序好的
	set中的元素都是唯一的，沒有重複的

	參考https://www.itread01.com/content/1549965989.html
 */


#include <iostream>
#include <set>

using namespace std;

int SetTest()
{
	int value = 0;

	// �ŧi
	int myints[] = { 75,23,65,42,13 };
	std::set<int> myset(myints, myints + 5);
	// �ŧi���N��
	set<int>::iterator iter;

	// ���J
	myset.insert(value);

	
	// �R��
	iter = myset.find(value);//���Ȫ�^�Ӥ������N���A�S�Ȫ�^set.end()
	myset.erase(iter);


	// �M�X
	for (set<int>::iterator it = myset.begin(); it != myset.end(); it++)
		cout << *it << endl;




	/* -------------------- */

	//�P�_�O�_����
	bool empty = myset.empty(); //1 ���� set ����

	int num = myset.size();

	myset.clear();//�M��

	cout << myset.count(value) << endl;//������=1

	return 0;
}