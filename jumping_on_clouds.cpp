// Jumping on the Clouds

// There is a new mobile game that starts with consecutively numbered clouds. Some of the clouds are thunderheads and others are cumulus. The player can jump on any cumulus cloud having a number that is equal to the number of the current cloud plus  1or2 . The player must avoid the thunderheads. Determine the minimum number of jumps it will take to jump from the starting postion to the last cloud. It is always possible to win the game.
// Sample Input 0

// 7
// 0 0 1 0 0 1 0
// Sample Output 0

// 4
// int jumpingOnClouds(vector<int> c) {
// int jumps = 0;
//     int i = 0;
//     int n = c.size();

//     while (i < n - 1) {

//         if (i + 2 < n && c[i + 2] == 0) {
//             i += 2;
//         } else {
//             i += 1;
//         }
//         jumps++;
//     }

//     return jumps;
// }

// revisited mein c[(i+k)%n]    agr c[i]=1 toh decreases by 2 hoga
//  Sample Input

// STDIN             Function
// -----             --------
// 8 2               n = 8, k = 2
// 0 0 1 0 0 1 1 0   c = [0, 0, 1, 0, 0, 1, 1, 0]
// Sample Output

// 92

// int jumpingOnClouds(std::vector<int> c, int k) {
//     int n = c.size();
//     int energy = 100;
//     int i = 0;

//     do {
//         i = (i + k) % n;
//         energy--; // Cost of the jump
//         if (c[i] == 1) {
//             energy -= 2; // Additional cost for thunderhead
//         }
//     } while (i != 0); // Continue until we get back to the start

//     return energy;
// }

// Explanation
// Initialization:

// energy starts at 100.
// i is the current position in the cloud array, starting at 0.
// While Loop:

// The loop continues until the position returns to the start (i != 0).
// Each iteration, calculate the new position using (i + k) % n to wrap around if necessary.
// Decrease energy by 1 for the jump itself.
// If landing on a thunderhead cloud (c[i] == 1), decrease energy by an additional 2.
// This loop effectively simulates the jumping process and correctly calculates the energy left after completing the cycle.