//! 映射：键值对，键唯一有序，支持快速查找
//! map如字典。
//! 常见操作：[], insert, find, erase。pair是键值对，first键，second值。

#include <iostream>
#include <map>  // 必须包含map头文件

using namespace std;

int main() {
    // 创建map，键string，值int（键自动排序）
    map<string, int> scores;

    // 插入（用[]或insert）
    scores["Alice"] = 90;
    scores["Bob"] = 85;
    scores.insert({"Charlie", 95});

    // 访问
    cout << "Alice的分数: " << scores["Alice"] << endl;

    // 大小
    cout << "大小: " << scores.size() << endl;

    // 遍历
    cout << "所有成绩: ";
    for (auto& pair : scores) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // 查找
    auto it = scores.find("Bob");
    if (it != scores.end()) {
        cout << "找到Bob: " << it->second << endl;
    }

    // 删除
    scores.erase("Alice");
    cout << "删除Alice后大小: " << scores.size() << endl;

    return 0;
}