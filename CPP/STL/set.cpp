//! 集合：有序、无重复元素，支持快速查找
//! set自动去重和排序（基于红黑树）。
//! 常见操作：insert, find, erase, size。迭代器用it。

#include <iostream>
#include <set>  // 必须包含set头文件

using namespace std;

int main() {
    // 创建set，存储int（自动排序、无重复）
    set<int> uniqueNums;

    // 插入（insert）
    uniqueNums.insert(30);
    uniqueNums.insert(10);
    uniqueNums.insert(20);
    uniqueNums.insert(10);  // 重复，不会添加

    // 大小
    cout << "大小: " << uniqueNums.size() << endl;

    // 遍历（有序）
    cout << "元素: ";
    for (int num : uniqueNums) {
        cout << num << " ";
    }
    cout << endl;

    // 查找（find）
    auto it = uniqueNums.find(20);
    if (it != uniqueNums.end()) {
        cout << "找到: " << *it << endl;
    }

    // 删除（erase）
    uniqueNums.erase(10);
    cout << "删除10后大小: " << uniqueNums.size() << endl;

    return 0;
}