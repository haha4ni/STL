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
	int myints[] = { 75,23,65,42,13 };
	
	// 宣告
	std::set<int> myset(myints, myints + 5);
	// 疊代器宣告
	set<int>::iterator iter;

	// 插入
	myset.insert(value);

	// 查找
	iter = myset.find(value);
	myset.erase(iter);

	// 尋訪
	for (set<int>::iterator it = myset.begin(); it != myset.end(); it++)
		cout << *it << endl;


	/* -------------------- */

	// 宣告
	bool empty = myset.empty(); 

	int num = myset.size();

	myset.clear();

	cout << myset.count(value) << endl;

	return 0;
}
