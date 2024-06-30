//Logic

//outer Loop
for(int i = 0; i<n-1 ; i++){
  //inner loop
  for(int j=0; j<n-i-1; j++){
  if (arr[j] > arr [j+1])
    swap(arr[j], arr[j+1]);
}
}
