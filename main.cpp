#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> tasks;

    // Add tasks to the queue
    tasks.push("Check emails");
    tasks.push("Attend meeting");
    tasks.push("Write report");
    tasks.push("Submit assignment");

    cout << "Processing tasks in order:\n";
    while (!tasks.empty()) {
        cout << "- " << tasks.front() << endl;
        tasks.pop();
    }

    return 0;
}
