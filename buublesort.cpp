// individual elements ka comparison

// void bubbleSort(int arr[], int n)
// {
//   // Your code here
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//       }
//     }
//   }

// optimization
// for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

// optimization
// for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

// optimization if array is sorted
//      for(int i=0; i<n-1; i++){
//      bool flag=true;
//          for(int j=0; j<n-1-i; j++){
//              if(arr[j]>arr[j+1]){
//                  flag=false;
//                  swap(arr[j],arr[j+1]);
//              }
//          }
//  if(flag==true){
//      break;
//  }