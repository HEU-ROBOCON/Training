//! 队列：先进先出FIFO，如任务队列
//! 队列用于BFS或打印机队列。
//! 常见操作：push, pop, front, empty, size。注意没有top，用front/back。

#include <iostream>
#include <queue>  // 必须包含queue头文件

using namespace std;

int main() {
    // 创建queue，存储int
    queue<int> tasks;

    // 入队（push）
    tasks.push(1);
    tasks.push(2);
    tasks.push(3);

    // 查看队首（front）
    cout << "队首: " << tasks.front() << endl;

    // 出队（pop）
    tasks.pop();
    cout << "出队后队首: " << tasks.front() << endl;

    // 大小
    cout << "大小: " << tasks.size() << endl;

    // 清空队列
    while (!tasks.empty()) {
        cout << "出队: " << tasks.front() << endl;
        tasks.pop();
    }
    cout << "现在空? " << (tasks.empty() ? "Yes" : "No") << endl;

    return 0;
}