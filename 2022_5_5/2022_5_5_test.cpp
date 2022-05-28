#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include "标头.h"
// struct pt
//{
//	int row;
//	int col;
//};
// typedef struct pt  PT;
//typedef struct pt
//{
//	int x;
//	int y;
//}PT;
//typedef struct pinn
//{
//	PT* space;
//	int top;
//	int size;
//}Pinn;
//
////初始化
//
//void initializeinn(Pinn* ps)
//{
//	ps->space = NULL;
//	ps->space = (PT*)malloc(sizeof(PT));
//	ps->size = 0;
//	ps->top = 1;
//}

template<class K,class V>
class Test
{
public:
	void test()
	{
		STR<K,V> str;
		pair<K,V>p = make_pair("sort", "排序");
		const pair<const K, V>& kv = p;
		const K& key = str(p);
		cout << key << endl;
	}
};

int main()
{
	//Test<string,string>().test();
	/*vector<char>v;
	v.resize(5);
	for (auto e : v)
	{
		cout << e << endl;
	}*/
	//cout << endl;
	char ch = char();
	cout << (int)ch << endl;
	return 0;
}
//
