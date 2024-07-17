// [ 1, 1, 2, 2, 3, 4, 4, 5 ] 3 ^ 5 = 011 ^ 101 = 110 = 6
// 1st step = saare no. ka xor lelo
// 2nd step==mask=a&(~(n-1))  ---isse last bit set ho jaati aur baaki bit unse isse 2 aayega
// 3rd step = array pe iterate krna aur mask ke saath and krte rehna aur phir dono ka alg alg xor lelo toh 3 aur 5 return ho jaayega