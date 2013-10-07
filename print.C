void print(string sel="prova"){
  if(sel=="prova") return;
  gROOT->Reset();
  gStyle->SetCanvasColor(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetOptStat(0);
  gStyle->SetPalette(1,0);

  FILE *fd;
  char buf[200];
  char *res;
  char x1,x2,x3,x4,x5,x6,x7,x8,x8bis,x8tris,x8qua;
  char x9,x10,x11,x12,x13,x14,x15,x16;
  char x17,x18,x19,x20,x21,x22,x23,x24,x26,x28,x29;
  float x25,x27,x30;
  int i=1;

  
  cout<<"}"<<endl;
  cout<<"//"<<sel<<endl;
  cout<<"if(sel==\""<<sel<<"\") {"<<endl;
  cout<<"	Double_t x_erlow[n] = {";
  i=0;
  sel=sel+".txt";
  fd=fopen(sel.c_str(), "r");
  if( fd==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }
  while(1) {
    res=fgets(buf, 300, fd);
    if(res==NULL) break;
    fscanf(fd, "%c%c%c%c%c%c%c%c",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8);
    fscanf(fd, "%c",&x8bis);
    fscanf(fd, "%c%c%c%c%c%c%c%c",&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);
    fscanf(fd, "%c%c%c%c%c%c%c%c",&x17,&x18,&x19,&x20,&x21,&x22,&x23,&x24);
    fscanf(fd, "%f%c%f%c%c%f",&x25,&x26,&x27,&x28,&x29,&x30);
    if(i<20)cout<<x27*-1<<",";
    else {
      cout<<x27*-1<<"};"<<endl;
      break;
    }
    i=i+1;
  }
  
  cout<<"	Double_t x_erhig[n] = {";
  i=1;
  fd=fopen(sel.c_str(), "r");
  if( fd==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }
  while(1) {
    res=fgets(buf, 300, fd);
    //cout<<res<<endl;
    if(res==NULL) break;
    fscanf(fd, "%c%c%c%c%c%c%c%c",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8);
    fscanf(fd, "%c",&x8bis);
    fscanf(fd, "%c%c%c%c%c%c%c%c",&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);
    fscanf(fd, "%c%c%c%c%c%c%c%c",&x17,&x18,&x19,&x20,&x21,&x22,&x23,&x24);
    fscanf(fd, "%f%c%f%c%c%f",&x25,&x26,&x27,&x28,&x29,&x30);
    if(i<19)cout<<x30<<",";
    else {
      cout<<x30<<"};"<<endl;
      break;
    }
    i=i+1;
  }

  cout<<"}"<<endl;

}
