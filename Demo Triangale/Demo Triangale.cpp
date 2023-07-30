#include <iostream>
void Get_Triangle( int val)
{
          std::cout << "Get Triangle val is : "<< val << std:: endl;
    for (int total = 1;total <= val; total++)
    {
       std::cout<< " ";
        for (int count = 1;count <= total; count++)
        {
            std::cout << "* ";
        }


        std:: cout << std::endl;
    }
}

void Get_Triangle_two(int val)
{
    std::cout << "Get Triangle Tow val is : " << val << std::endl;
    for (int total = val;total >= 1; total--)
    {
        std::cout << " ";
        for (int count = total;count > 0; count--)
        {
            std::cout << "* ";
        }


        std::cout << std::endl;
    }
}

void Get_Triangle_Three(int val)
{
    std::cout << "Get Triangle a Three val is : " << val << std::endl;
    for (int total = 1;total <= val; total++)
    {
     
      
        for (int k = val - total; k > 0; k--)
             std::cout << " ";
          for (int count = 1;count <=total; count++)
          {
            std::cout << "*";
          }


        std::cout << std::endl;
    }
}
void Get_Triangle_Four(int val)
{
    std::cout << "Get Triangle a Four val is : " << val << std::endl;
    for (int total = val;total >= 1; total--)
    {
        for(int k = val - total ; k > 0 ; k--)
         std::cout << " ";
        for (int count = total ;count > 0; count--)
        {
            std::cout << "*";
        }


        std::cout << std::endl;
    }
}
void Get_Triangle_Five(int val)
{
    std::cout << "Get Triangle a Five val is : " << val << std::endl;
    for (int total =val;total >=1; total--)
    {
       
        for (int k = val - total; k > 0; k--)
            std::cout << " ";
        for (int count = total;count > 0; count--)
        {
            std::cout << "* ";
        }


        std::cout << std::endl;
    }
}

void Get_Triangle_six(int val)
{
    std::cout << "Get Triangle Six val is : " << val << std::endl;
    for (int total = 1;total <= val; total++)
    {


        for (int k = val - total; k > 0; k--)
            std::cout << " ";
        for (int count = 1;count <= total; count++)
        {
            std::cout << "* ";
        }


        std::cout << std::endl;
    }
}
void Get_Triangle_seven(int val)
{
    std::cout << "Get Triangle a Seven val is : " << val << std::endl;
    for (int total = val;total >= 1; total--)
    {
        for (int k = val - total; k > 0; k--)
            std::cout << " ";
        for (int count = total;count > 0; count--)
        {
            std::cout << "* ";
        }


        std::cout << std::endl;
    }
}




void Get_Triangle_Eight(int val)
{
    std::cout << "Get Triangle a Eight val is : " << val << std::endl;
    for (int total = 0;total <val; total++)
    {

        for (int count = 0;count < (val*2); count++)
        {
          if((total + count) <= val -1 )
            std::cout << "*";
          else
          {
              std::cout << " ";
          }
          if ((total + val )<=count)
              std::cout << "*";
          else
          {
              std::cout << " ";
          }

        }


        std::cout << std::endl;
    }
}
void Get_Triangle_Nine(int val)
{
    std::cout << "Get Triangle a Nine val is : " << val << std::endl;

    for (int Total = 0; Total < val; Total++)
    {
        for (int count = 0; count < (val * 2); count++)
        {
            if (Total >= count)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
            if (Total >= (2 * val - 1) - count)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;

    }


}

void Hollow_Diamond_Pattern(int val)
{
    std::cout << "Get Triangle a Hollow_Diamond_Pattern val is : " << val << std::endl;

    for (int Total = 0; Total < val; Total++)
    {
        for (int count = 0; count < val * 2; count++)
        {
            if (Total + count <= val - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
            if (Total + val <= count)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;

    }
    for (int Total = 0; Total < val; Total++)
    {
        for (int count = 0; count < (val * 2); count++)
        {
            if (Total >= count)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
            if (Total >= (2 * val - 1) - count)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;

    }

}



int main()
{
    std::cout << "Hello World!\n";
     Get_Triangle(5);
     Get_Triangle_two(5);
     Get_Triangle_Three(5);
    Get_Triangle_Four(5);
    Get_Triangle_Five(5);
    Get_Triangle_six(5); 
    Get_Triangle_Eight(5);
     Get_Triangle_Nine(5);
   Hollow_Diamond_Pattern(5);
    std::cout<< std::endl;
   


    std:: getchar();
}

