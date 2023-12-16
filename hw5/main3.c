int main() {
   for(int y = 9; y < 90; y++){
       printf("%d*%d=%d\t", y / 9, y % 9 + 1, (y / 9) * (y % 9 + 1));
       if(!((y - 17) % 9)){
           printf("\n");
       }
   }
    return 0;
}
