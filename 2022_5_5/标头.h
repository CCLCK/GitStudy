#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;





template <class K,class V>
struct STR
{
	const K& operator()(const pair<const K,V>& kv)
	{
		return kv.first;
	}
};

