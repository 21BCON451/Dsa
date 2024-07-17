// Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies. More frequent characters are assigned shorter codewords and less frequent characters are assigned longer codewords. All edges along the path to a character contain a code digit. If they are on the left side of the tree, they will be a 0 (zero). If on the right, they'll be a 1 (one). Only the leaves will contain a letter and its frequency count. All other nodes will contain a null instead of a character, and the count of the frequency of all of it and its descendant characters.
// s="1001011"
// Sample Output

// ABACA
// Explanation

// S="1001011"
// Processing the string from left to right.
// S[0]='1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
// We move back to the root.

// S[1]='0' : we move to the left child.
// S[2]='0' : we move to the left child. We encounter a leaf node with value 'B'. We add 'B' to the decoded string.
// We move back to the root.

// S[3] = '1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
// We move back to the root.

// S[4]='0' : we move to the left child.
// S[5]='1' : we move to the right child. We encounter a leaf node with value C'. We add 'C' to the decoded string.
// We move back to the root.

//  S[6] = '1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
// We move back to the root.

// Decoded String = "ABACA"

// void decode_huff(node * root, string s) {
//     string decoded="";
//     node* current=root;
//     for(char bit:s){
// //         if(bit=='0'){
// //             current=current->left;
// //         }
// //         else{
// //             current=current->right;
// //         }
// //         if(!current->left && !current->right){
// //             decoded+=current->data;
// //             current=root;
// //         }
// //     }
// //     cout<<decoded;
// // }

// //optmised code
// void buildMap(node* root, string str, unordered_map<string, char>& huffmanMap) {
//     if (!root) return;

//     // If this is a leaf node, store the character and its code
//     if (!root->left && !root->right) {
//         huffmanMap[str] = root->data;
//     }

//     // Traverse left and right children
//     buildMap(root->left, str + "0", huffmanMap);
//     buildMap(root->right, str + "1", huffmanMap);
// }

// void decode_huff(node* root, string s) {
//     unordered_map<string, char> huffmanMap;
//     buildMap(root, "", huffmanMap);

//     string decoded = "";
//     string currentCode = "";

//     for (char bit : s) {
//         currentCode += bit;

//         // Check if current code is in the huffman map
//         if (huffmanMap.find(currentCode) != huffmanMap.end()) {
//             decoded += huffmanMap[currentCode];
//             currentCode = "";  // Reset current code after finding a match
//         }
//     }

//     cout << decoded;
// }
