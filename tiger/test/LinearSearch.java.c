// This is automatically generated by the Tiger compiler.
// Do NOT modify!

// structures

char * LinearSearch_gc_map = "";

struct LinearSearch
{
  struct LinearSearch_vtable *vptr;
};

char * LS_gc_map = "10";

struct LS
{
  struct LS_vtable *vptr;
  int*  number;
  int size;
};
// vtables structures
struct LinearSearch_vtable
{
  char *LinearSearch_gc_map;
};

struct LS_vtable
{
  char *LS_gc_map;
  int (*Start)();
  int (*Print)();
  int (*Search)();
  int (*Init)();
};


// methods dec
int LS_Start(struct LS * this, int sz);
int LS_Print(struct LS * this);
int LS_Search(struct LS * this, int num);
int LS_Init(struct LS * this, int sz);


extern void * prev;
// vtables
struct LinearSearch_vtable LinearSearch_vtable_ = 
{
  &LinearSearch_gc_map,
};

struct LS_vtable LS_vtable_ = 
{
  &LS_gc_map,
  LS_Start,
  LS_Print,
  LS_Search,
  LS_Init,
};


// methods
char * LS_Start_arguments_gc_map = "10";
char * LS_Start_locals_gc_map = "00111111";
struct LS_Start_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct LS *	x_1;
  struct LS *	x_2;
  struct LS *	x_3;
  struct LS *	x_4;
  struct LS *	x_5;
  struct LS *	x_6;
};

int LS_Start(struct LS * this, int sz)
{
  struct LS_Start_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = LS_Start_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = LS_Start_locals_gc_map;


  int aux01;
  int aux02;
  frame.x_1 = 0;
  frame.x_2 = 0;
  frame.x_3 = 0;
  frame.x_4 = 0;
  frame.x_5 = 0;
  frame.x_6 = 0;

  aux01 = (frame.x_1=this, frame.x_1->vptr->Init(frame.x_1, sz));
  aux02 = (frame.x_2=this, frame.x_2->vptr->Print(frame.x_2));
  System_out_println (9999);
  System_out_println ((frame.x_3=this, frame.x_3->vptr->Search(frame.x_3, 8)));
  System_out_println ((frame.x_4=this, frame.x_4->vptr->Search(frame.x_4, 12)));
  System_out_println ((frame.x_5=this, frame.x_5->vptr->Search(frame.x_5, 17)));
  System_out_println ((frame.x_6=this, frame.x_6->vptr->Search(frame.x_6, 50)));
  prev  = frame.prev;
  return 55;
}
char * LS_Print_arguments_gc_map = "1";
char * LS_Print_locals_gc_map = "0";
struct LS_Print_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int LS_Print(struct LS * this)
{
  struct LS_Print_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = LS_Print_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = LS_Print_locals_gc_map;


  int j;

  j = 1;
  while (j < this->size)
  {
  System_out_println (this->number[j]);
    j = j + 1;
    }

  prev  = frame.prev;
  return 0;
}
char * LS_Search_arguments_gc_map = "10";
char * LS_Search_locals_gc_map = "000000";
struct LS_Search_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int LS_Search(struct LS * this, int num)
{
  struct LS_Search_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = LS_Search_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = LS_Search_locals_gc_map;


  int j;
  int ls01;
  int ifound;
  int aux01;
  int aux02;
  int nt;

    j = 1;
    ls01 = 0;
    ifound = 0;
    while (j < this->size)
    {
      aux01 = this->number[j];
      aux02 = num + 1;
      if (aux01 < num)
        nt = 0;

      else
        if (!(aux01 < aux02))
          nt = 0;

        else
        {
          ls01 = 1;
          ifound = 1;
          j = this->size;
          }


      j = j + 1;
      }

  prev  = frame.prev;
  return ifound;
}
char * LS_Init_arguments_gc_map = "10";
char * LS_Init_locals_gc_map = "0000";
struct LS_Init_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
};

int LS_Init(struct LS * this, int sz)
{
  struct LS_Init_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = LS_Init_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = LS_Init_locals_gc_map;


  int j;
  int k;
  int aux01;
  int aux02;

      this->size = sz;
      this->number = (int*)Tiger_new_array(sz);
      j = 1;
      k = this->size + 1;
      while (j < this->size)
      {
        aux01 = 2 * j;
        aux02 = k - 3;
        this->number[j] = aux01 + aux02;
        j = j + 1;
        k = k - 1;
        }

  prev  = frame.prev;
  return 0;
}

// main method
char * Tiger_main_locals_gc_map = "1";
struct Tiger_main_gc_frame{
  void 	*prev;
  char 	*arguments_gc_map;
  int 	*arguments_base_address;
  char 	*locals_gc_map;
  struct LS *	x_0;
};

int Tiger_main ()
{
  struct Tiger_main_gc_frame frame;
  frame.prev = prev;
  prev = &frame;
  frame.arguments_gc_map = "";
  frame.arguments_base_address = "";
  frame.locals_gc_map = Tiger_main_locals_gc_map;


  frame.x_0 = 0;

  System_out_println ((frame.x_0=((struct LS*)(Tiger_new (&LS_vtable_, sizeof(struct LS)))), frame.x_0->vptr->Start(frame.x_0, 10)));
}




