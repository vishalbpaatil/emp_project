#include<iostream>
using namespace std;

class base
{
    public:
     int i=0;

   void fun()
    {
        cout<<"base Fun"<<endl;
    }

   void gun()
    {
        cout<<"base Gun"<<endl;
    }


   void sun()
    {
        cout<<"base Sun"<<endl;
    }

   void mun()
    {
        cout<<"base Mun"<<endl;
    }
};

class Derived:public base
{
  public:
    int z;

    void fun()
    {
        cout<<"derived fun"<<endl;
    }
    void sun()
    {
        cout<<"derived Sun"<<endl;
    }

   virtual  void mun()
    {
        cout<<"derived mun"<<endl;
    }

    void run()
    {
        cout<<"derived Sun"<<endl;
    }
};

int main()
{

  base *bp=NULL;
  Derived dobj;

  cout<<"size of base"<<sizeof(base)<<endl;
  cout<<"size of Derived"<<sizeof(Derived)<<endl;

   bp=(&dobj);
   bp->fun();
   bp->gun();
   bp->sun();


   return 0;

}
