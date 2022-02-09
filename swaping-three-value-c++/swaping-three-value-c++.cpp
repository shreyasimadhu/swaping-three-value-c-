#include <iostream>
using namespace std;
class class_a;
class class_b;
class class_c;

class class_a{
    int v1;
    public:
    void inputdata(int s)
    {
        v1 = s;
    }
    void displaydata(void)
    {
        cout<<v1<<"\n";
    }
    
    friend void exchange(class_a &,class_b &,class_c &);
};

class class_b{
    int v2;
    public:
    void inputdata(int s)
    {
        v2 = s;
    }
    void displaydata(void)
    {
        cout<<v2<<"\n";
    }
    
    friend void exchange(class_a &,class_b &,class_c &);
};

class class_c{
    int v3;
    public:
    void inputdata(int s)
    {
        v3 = s;
    }
    void displaydata(void)
    {
        cout<<v3<<"\n";
    }
    
    friend void exchange(class_a &,class_b &,class_c &);
};


 void exchange(class_a & x,class_b & y,class_c & z){
    int Space1,Space2,Space3;
    Space1 = x.v1;
    Space2 = y.v2;
    Space3 = z.v3;
    x.v1 = Space2;
    y.v2 = Space3;
    z.v3 = Space1;
 }


int main()
{   
    int d1,d2,d3;
    cout<<"Enter the three value : \n\n\n";
    
    cout<<"First Value = ";
    cin>>d1;
    
    cout<<"Seceond Value = ";
    cin>>d2;
    
    cout<<"Third Value = ";
    cin>>d3;
    
    class_a first_ob;
    class_b second_ob;
    class_c third_ob; 
    
    
    first_ob.inputdata(d1);
    second_ob.inputdata(d2);
    third_ob.inputdata(d3);
    
    
    exchange(first_ob,second_ob,third_ob);
    
    cout<<"After Swaping Value : \n\n";
    
    first_ob.displaydata();
    second_ob.displaydata();
    third_ob.displaydata();

    return 0;
}
