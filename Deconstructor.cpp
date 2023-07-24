#include<iostream>
using namespace std;

class complex
{
  private:

  float real;
  float img;

  public:

  complex(int real_value, int img_value)
  {
    real = real_value;
    img = img_value;
  }

  void set_parameters(int real, int img)
  {
    this->real = real;
    this->img = img;
  }

  void sqdistancefromorigin()
  {
    float dist;

    dist = real*real + img*img;

    cout<<"the distance from origin is "<<dist;

    return;
  }
  
};

// I am a merchant and defining a class to store the among which the user gives to me and the number of days it has been since the user has given me money. 
class New_account
{
    public:

    int amount;
    int days;

    //since a cunstructor has no return type. we dont need to write anything at the start like int, void and stuff.

    New_account(int amount_initial, int days_initial)
    {
        amount = amount_initial;
        days = days_initial;

        cout<<"The constructor is called now";

        // No need to return anything.
    }

    void print_account_details()
    {
        cout<<"The amount is "<<amount;
        cout<<" The number of days is "<<days<<endl;
    }
     
     ~New_account()
     {
        cout<<"Now the use of the object is complete and the object is getting destroyed ";
     }
     
};

class motorbike
{
    public:

    int num_wheels;
    int lights;
};

int main()
{
    // Now I will try to do this while the object is being created itself.

    New_account a(0,0);  
     // The constructor *is being called over here too.
     
     a.print_account_details();

    //This function need to be called everytime the object is created to set the parameters.

     New_account b(100,5);
     b.print_account_details();

     cout<<endl<<"Here all the functions and calculations take place "<<endl;
  
    complex(3,3);
    complex(3,5);

    return 0;
}
