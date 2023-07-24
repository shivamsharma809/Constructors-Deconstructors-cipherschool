#include<iostream>
using namespace std;

class complex
{
  private:

  float real;
  float img;

  public:

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

    New_account()
    {
        amount = 0;
        days = 0;

        cout<<"The constructor is called now";

        // No need to return anything.
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

    New_account a;  
    
     // The constructor *is being called over here too.
    

    //This function need to be called everytime the object is created to set the parameters.
     
  

    return 0;
}
