int main(char*arg,int argc,char *argv[2]) {
  arg[0] = 0;
  arg[1] = 1;
  arg[2] = 1;
  if (!argc) arg[1000]=1000;
  arg[argc] = 4;

  argv[1] = "5069";
  argv[0] = "5069";
  
  argv[0][0] = '0';
}
