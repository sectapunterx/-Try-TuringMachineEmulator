#include <iostream>
#include <cmath>

using namespace std;

int main() {
// Read in the values of X and Y from the user
    int x, y;
    cout << "Enter the value of X: ";
    cin >> x;
    cout << "Enter the value of Y: ";
    cin >> y;
    // Initialize the tape head and tape
    int tape_head = 0;
    int tape[300] = {0};

// Initialize the state and step variables
    int state = 0;
    int step = 0;

// Run the Turing machine
    while (state != -1) {
        // Print the current state and tape contents
        cout << "Step " << step << ": state " << state << ", tape = [";
        for (int i = 0; i < 100; i++) {
            cout << tape[i];
            if (i < 99) {
                cout << ", ";
            }
        }
        cout << "]" << endl;

        // Perform the appropriate action based on the current state
        switch (state) {
            case 0:
                // Initialize N to 1
                tape[tape_head] = 1;
                state = 1;
                break;
            case 1:
                // Check if N is greater than 10
                if (tape[tape_head] > 10) {
                    state = -1;
                } else {
                    // Move the tape head to the right and transition to state 2
                    tape_head++;
                    state = 2;
                }
                break;
            case 2:
                // Multiply N by X and store the result in the tape
                tape[tape_head] = tape[tape_head - 1] * x;
                // Move the tape head to the right and transition to state 3
                tape_head++;
                state = 3;
                break;
            case 3:
                // Add Y to the result and store the final result on the tape
                tape[tape_head] = tape[tape_head - 1] + y;
                // Move the tape head to the left and transition to state 4
                tape_head--;
                state = 4;
                break;
            case 4:
                // Print the result
                cout << "Result for N = " << tape[tape_head - 1] << ": " << tape[tape_head]+y << endl;
                // Increment N and transition back to state 1
                tape[tape_head - 1]++;
                state = 1;
                break;
        }

        // Increment the step counter
        step++;
    }

    return 0;
}
