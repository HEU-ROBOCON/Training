//! 动态数组：可变长度的数组，支持随机访问
//! vector自动管理内存，比固定数组灵活。
//! 常见操作：push_back, size, [], insert, erase。

#include <iostream>
#include <vector>  // 必须包含vector头文件

using namespace std;

int main() {
    // 创建一个空的vector，存储int类型
    vector<int> nums;

    // 添加元素（push_back在末尾添加）
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // 访问元素（像数组一样用[]）
    cout << "第一个元素: " << nums[0] << endl;
    cout << "大小: " << nums.size() << endl;

    // 遍历vector
    cout << "所有元素: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // 插入元素（insert在指定位置）
    nums.insert(nums.begin() + 1, 15);  // 在索引1处插入15

    // 删除元素（erase删除指定位置）
    nums.erase(nums.begin());  // 删除第一个元素

    // 再次遍历
    cout << "修改后: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}