int main() {
    int N,T;
    scanf("%d %d", &N, &T);
    // int T;
    // scanf("%d", &T);
    int b[N];
    for(int i=0; i< N; i++){
         scanf("%d", &b[i]);
    }
     int sum = 0;
     int count = 0;
    
    for(int i =0; i < N; i++){
        
        sum += b[i];
        
         if(sum > T){
             break;
         }
         count++;
        }
      printf("%d ", count);   
    
   
    return 0;
}
// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/book-reading-4/problem