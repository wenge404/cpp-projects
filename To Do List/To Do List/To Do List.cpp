#include <iostream>
#include <vector>

using namespace std;

vector<string> tasks; // Stores tasks

// Function to display tasks (Replaces underscores with spaces)
void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\nYour To-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        string displayTask = tasks[i];
        for (char& ch : displayTask) {
            if (ch == '_') ch = ' '; // Convert underscores to spaces
        }
        cout << i + 1 << ". " << displayTask << endl;
    }
}

// Function to add a task (User enters underscores instead of spaces)
void addTask() {
    string task;
    cout << "Enter a new task (use underscores instead of spaces): ";
    cin >> task; // Reads as one word
    tasks.push_back(task);
    cout << "Task added successfully!\n";
}

// Function to delete a task
void deleteTask() {
    if (tasks.empty()) {
        cout << "No tasks to delete.\n";
        return;
    }

    int index;
    viewTasks();
    cout << "Enter task number to delete: ";
    cin >> index;

    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number!\n";
        return;
    }

    tasks.erase(tasks.begin() + index - 1);
    cout << "Task deleted successfully!\n";
}

// Main menu
void menu() {
    int choice;
    do {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. View Tasks\n";
        cout << "2. Add Task\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            viewTasks();
            break;
        case 2:
            addTask();
            break;
        case 3:
            deleteTask();
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
