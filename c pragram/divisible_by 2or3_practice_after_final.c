int main() {
   int N;
   scanf("%d", &N);
   int count2 = 0;
   int count3 = 0;
   int a[N];
   for (int i = 0; i<N; i++){
         scanf("%d", &a[i]);
   }
   for (int i = 0; i<N; i++){
    
   if( a[i] % 2 == 0){
       count2 +=1;
   } 
  else if( a[i] % 3 == 0){
       count3 +=1;
   } 
//   else if( a[i] % 2 == 0 && a[i] % 3 == 0){
//       count2 +=1;
//   }
   
   }
   printf("%d %d", count2, count3);
   
    return 0;
}
// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-2-1