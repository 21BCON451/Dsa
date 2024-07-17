// Sample Input 0

// 3
// 2147483647
// 1
// 0
// Sample Output 0

// 2147483648
// 4294967294
// 4294967295
// Bitwise NOT Operation:

// The bitwise NOT operation (~) inverts all bits of the number.
// For a 32-bit unsigned integer, the maximum value is

// (2^32)-1=4294967295. This value has all bits set to 1.
// Flipping Bits:

// Given a number n, flipping its bits is equivalent to computing ~n & 0xFFFFFFFF. The mask 0xFFFFFFFF ensures that only the lower 32 bits are considered, resulting in a valid 32-bit unsigned integer.
// Bitwise XOR Operation:

// The XOR (exclusive OR) operation ^ compares each bit of two numbers. It returns 1 if the bits are different, and 0 if they are the same.
// Flipping Bits:

// ALL_BITS_SET is a constant with all bits set to 1 for a 32-bit number. In hexadecimal, this is represented as 0xFFFFFFFF.
// When you XOR a number with 0xFFFFFFFF, it effectively flips all the bits of the number. This is because:
// If a bit in n is 0 and the corresponding bit in ALL_BITS_SET is 1, the XOR result is 1.
// If a bit in n is 1 and the corresponding bit in ALL_BITS_SET is 1, the XOR result is 0.
// Suppose n = 5 (binary 0101).
// ALL_BITS_SET in a 4-bit system would be 1111
//   n            : 0101
//   ALL_BITS_SET : 1111
//   Result       : 1010
// For a 32-bit integer:

// n = 2147483647 (binary 01111111111111111111111111111111).
// ALL_BITS_SET = 4294967295 (binary 11111111111111111111111111111111).
// Using the XOR operation:
//   n            : 01111111111111111111111111111111
//   ALL_BITS_SET : 11111111111111111111111111111111
//   Result       : 10000000000000000000000000000000
// #include <iostream>
// using namespace std;

// long flippingBits(long n) {
//     // Define a mask for 32-bit unsigned integers with all bits set to 1
//     const unsigned int ALL_BITS_SET = 0xFFFFFFFF;
//     // Flip the bits using XOR operation
//     return n ^ ALL_BITS_SET;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long n;
//         cin >> n;
//         cout << flippingBits(n) << endl;
//     }

//     return 0;
// }
