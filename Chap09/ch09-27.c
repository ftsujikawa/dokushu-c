extern void print_global();
extern int global;
int global = 48;
int main(void) {
  print_global();
  print_global();
}