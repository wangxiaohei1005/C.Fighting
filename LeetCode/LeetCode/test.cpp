#include <string>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*class Solution {
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		unordered_set<string>wordDict(wordList.begin(), wordList.end());
		if (wordDict.find(endWord) == wordDict.end())
		{
			return 0;
		}//表示在新建的队列中未找到符合元素
		unordered_set<string> beginSet{ beginWord };
		unordered_set<string> endSet{ endWord };
		int step = 1;
		for (; !beginSet.empty();)
		{
			unordered_set<string> tempSet;
			++step;
			for (auto s : beginSet) {
				wordDict.erase(s);
			}
			for (auto s : beginSet) {
				for (int i = 0; i < s.size(); ++i){
					string str = s;
					for (char c = 'a'; c <= 'z'; ++c){
						str[i] = c;
						if (wordDict.find(str) == wordDict.end()){
							continue;
						}
						if (endSet.find(str) != endSet.end()){
							return step;
						}
						tempSet.insert(str);
					}
				}
			}
			if (tempSet.size() < endSet.size()){
				beginSet = tempSet;
			}
			else {
				beginSet = endSet;
				endSet = tempSet;
			}
		}
		return 0;
	}

};*/

String(const String& str)