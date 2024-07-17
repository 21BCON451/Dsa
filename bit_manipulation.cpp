// 6 bitwise operator& | ^ << >> ~
// xor ko hum odd one detector bolte h 100^101=001
// left shift a=4=100 ab <<2 toh 10000=16  a<<2=a<<k=a*2^k
// right shift a=4=100<<2 001=1 a>>k=a/2^k

// unsigned int a=4;
//  cout<<(~a)<<endl;     iska answer bahut bada aayega

// int a=4;
// cout<<(~a)<<endl;     iska answer -5

// int a=4;
// int b=5;
// int c=a|b;
// int d=a&b;
// int e=a^b;
// int f=a>>2;
// int g=a<<2;

// last-bit set h ya nhi ke liye hum and ka use krenge

// K-th Bit is Set or Not
// last-bit ko unset krne ke liye n=n&(n-1)
// last-bit ko set krne ke liye n=n&(~(n-1))

// jinko bhi hum 2 ki power mein likhte h unki set bit 1 hogi

// power of two
// class Solution
// {
// public:
//   bool isPowerOfTwo(int n)
//   {
//     int count = 0;
//     while (n)
//     {
//       count++;
//       n = n & (n - 1);
//     }
//     if (count == 1)
//       return true;
//     else
//       return false;
//   }
// };
