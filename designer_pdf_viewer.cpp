// When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

// There is a list of 26 character heights aligned by index to their letters. For example, 'a' is at index 0  and 'z' is at index 25 . There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in  assuming all letters are  wide.

// Sample Input 0

// 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
// abc
// Sample Output 0

// 9
// Explanation 0

// We are highlighting the word abc:

// Letter heights are a=1,b=3  and c=1 . The tallest letter, b, is 3mm high. The selection area for this word is .3*3=9mm

// int designerPdfViewer(vector<int> h, string word) {
// int maxHeight=0;
//     for(char c:word){
//         int height=h[c-'a'];
//         if(height>maxHeight){
//             maxHeight=height;
//         }
//     }
//     return maxHeight*word.length();
// }