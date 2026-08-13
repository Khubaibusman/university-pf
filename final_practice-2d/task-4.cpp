#include <iostream>
using namespace std;

int main() {
    int num;
    int digits[5];

    cout << "Enter a 5-digit number: ";
    cin >> num;

    // Extract digits from the number (right to left)
    for (int i = 4; i >= 0; i--) {
        digits[i] = num % 10;
        num /= 10;
    }

    const int rows = 10, cols = 5;
    char graph[rows][cols];

    // Initialize array with spaces
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            graph[i][j] = ' ';

    // Build the bar graph
    for (int col = 0; col < cols; col++) {
        int height = digits[col];
        for (int row = 0; row < height; row++) {
            graph[row][col] = 'x';
        }
    }

    // Print the graph from top to bottom
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j < cols; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
