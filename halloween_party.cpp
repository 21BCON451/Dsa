// Halloween party
// Alex is attending a Halloween party with his girlfriend, Silvia. At the party, Silvia spots the corner of an infinite chocolate bar (two dimensional, infinitely long in width and length).

// If the chocolate can be served only as 1 x 1 sized pieces and Alex can cut the chocolate bar exactly K  times, what is the maximum number of chocolate pieces Alex can cut and give Silvia?
// Sample Input #00

// 4
// 5
// 6
// 7
// 8
// Sample Output #00

// 6
// 9
// 12
// 16
// long halloweenParty(int k) {
// int half = k / 2;
//     int remaining = k - half;
//     return static_cast<long>(half) * remaining;
// }

// int half = k / 2;:

// Splits
// 𝐾
// K into half.
// int remaining = k - half;:

// Calculates the remaining cuts.
// return half * remaining;

// For

// k=5:

// Cuts in each dimension:

// half=2 (cuts in one dimension).

// k−half=3 (cuts in the other dimension).

// 2*3 =6 final ans
// Number of pieces:

// (half+1)=3 pieces in the first dimension.

// (k−half+1)=4 pieces in the second dimension.
// Total pieces:

// 3×4=12 pieces.