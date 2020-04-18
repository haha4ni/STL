/*
	map<key,value>
	資料結構為紅黑樹
	搜尋&插入(O(logn))
	可修改value 不可修改key

	[用心去感覺] 類似 map 的 STL 結構

	map : 紅黑樹 (查询、插入、删除都是O(logn) )
	unordered_map : hash 結構，C++11 標準函式庫。
	unordered_set : hash 結構，但 value 本身即是 key。
	hash_map : hash 結構，非標準函式庫。

	參考http://www.cplusplus.com/reference/map/map/
	參考https://mropengate.blogspot.com/2015/12/cc-map-stl.html
 */


#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	// 宣告
	map<string, int> mymap;
	// 宣告迭代器
	std::map<string, int>::iterator iter;

	// 插入(兩種方式)
	mymap["A00"] = 100;
	mymap.insert(pair<string, int>("B00", 1));

	// 尋找
	 iter = mymap.find("A00");//map.begin(),map.end(),iterator當成是個有first與second的struct*
	if (iter != mymap.end())//沒有會返回end()相同值
		cout << "Find, the value is" << iter->second << endl;
	else
		cout << "Do not Find" << endl;

	// 刪除(兩種方式)
	iter = mymap.find("B00");
	mymap.erase(iter);

	int n = mymap.erase("B00");//如果刪除了會返回1，否則返回0

	// 尋訪
	for (map<string, int>::iterator it = mymap.begin(); it != mymap.end(); ++it)
		cout << it->first << " => " << it->second << '\n';





	return 0;
}