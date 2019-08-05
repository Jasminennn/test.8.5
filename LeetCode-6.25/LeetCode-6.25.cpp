// LeetCode-6.25.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		if (1 == nums.size() || k == nums.size())
			return;
		if (k > nums.size())
			k -= nums.size();
		/*reverse(nums.begin(),nums.end());
		reverse(nums.begin(),nums.begin()+k);
		reverse(nums.begin() + k, nums.end());*/
		/*cout << k << endl;

		int end = nums.size() - 1;
		int start = 0;
		
		while (start<=end)
		{
			cout << endl;
			swap(nums[start++], nums[end--]); 
		}

		start = 0;
		end = nums.size() - 1;
		int r = k - 1;

		while (start<=r)
		{
			swap(nums[start++], nums[r--]);
		}

		r = k;
		while (r <= end)
		{
			swap(nums[r++], nums[end--]);
		}
*/
		int end = nums.size() - 1;
		while (k > 0)
		{
			auto it = nums.begin();
			it = nums.insert(it, nums[end]);
			//nums.pop_back();
			it = nums.end();
			it = nums.erase(it);
			k--;
		}
	}
};

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	Solution s;
	s.rotate(vec,3);
	for (int val : vec)
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}

#if 0
class Solution {
public:
	string countAndSay(int n) {
		if (n == 1)
			return "1";

		string result;		
		result.push_back('1');

		for (int i = 1; i < n;++i)
		{
			auto it = result.begin();
			it = result.insert(it, '1');
			for (int j = 0;j<result.size();++j)
			{
				if (result[j] == '1' && result[j + 1] == '1')
				{
					it = result.erase(it);
					it = result.insert(it, '2');
					++it;
					
				}
				else
					break;
				
			}

		}
		return result;
	}
};

int main()
{
	Solution s;
	string str = s.countAndSay(4);
	for (char c : str)
	{
		cout << c;
	}
	cout << endl;
	return 0;
}
#endif
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
