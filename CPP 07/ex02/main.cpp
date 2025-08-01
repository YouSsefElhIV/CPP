#include "Array.hpp"

int main()
{
    {
        std::cout << "\033[34mArray of int test\n\033[0m";
        Array<const int> const_int_array(10);
        std::cout << "int array size = " << const_int_array.size() << "\n";
        for (int i = 0; i < 10; i++)
        {
            std::cout << const_int_array[i] << " ";
        }
        std::cout << "\ntesting out of bound, lets give it a negative then more that its size\n";
        try
        {
            std::cout << "lets try to print array[-10]\n";
            std::cout << "const_int_array[-10] = " << const_int_array[-10] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }

        try
        {
            std::cout << "lets try to print array[11]\n";
            std::cout << "const_int_array[11] = " << const_int_array[11] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }
        std::cout << "\n";
    }

    {
        std::cout << "\033[34mArray of int test\n\033[0m";
        Array<int> int_array(10);
        std::cout << "int array size = " << int_array.size() << "\n";
        for (int i = 0; i < 10; i++)
        {
            int_array[i] = i + 1;
        }

        for (int i = 0; i < 10; i++)
        {
            std::cout << int_array[i] << " ";
        }

        std::cout << "\ntesting out of bound, lets give it a negative then more that its size\n";
        try
        {
            std::cout << "lets try to print array[-10]\n";
            std::cout << "int_array[-10] = " << int_array[-10] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }

        try
        {
            std::cout << "lets try to print array[11]\n";
            std::cout << "int_array[11] = " << int_array[11] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }
        std::cout << "\n";
    }

    {
        std::cout << "\033[34mArray of float test\n\033[0m";
        Array<float> float_array(10);
        std::cout << "float array size = " << float_array.size() << "\n";
        for (int i = 0; i < 10; i++)
        {
            float_array[i] = (i + 1) * 0.3f;
        }

        for (int i = 0; i < 10; i++)
        {
            std::cout << float_array[i] << " ";
        }
        std::cout << "\ntesting out of bound, lets give it a negative then more that its size\n";
        try
        {
            std::cout << "lets try to print array[-10]\n";
            std::cout << "float_array[-10] = " << float_array[-10] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }

        try
        {
            std::cout << "lets try to print array[11]\n";
            std::cout << "float_array[11] = " << float_array[11] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }
        std::cout << "\n";
    }

    {
        std::cout << "\033[34mArray of double test\n\033[0m";
        Array<double> double_array(10);
        std::cout << "double array size = " << double_array.size() << "\n";
        for (int i = 0; i < 10; i++)
        {
            double_array[i] = (i + 1) * 1.6;
        }

        for (int i = 0; i < 10; i++)
        {
            std::cout << double_array[i] << " ";
        }
        std::cout << "\ntesting out of bound, lets give it a negative then more that its size\n";
        try
        {
            std::cout << "lets try to print array[-10]\n";
            std::cout << "double_array[-10] = " << double_array[-10] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }

        try
        {
            std::cout << "lets try to print array[11]\n";
            std::cout << "double_array[11] = " << double_array[11] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }
        std::cout << "\n";
    }

    {
        std::cout << "\033[34mArray of char test\n\033[0m";
        Array<char> char_array(26);
        std::cout << "char array size = " << char_array.size() << "\n";
        try
        {
            for (int i = 0; i < 26; i++)
            {
                char_array[i] = i + 65;
            }
        }
        catch(std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }
        for (int i = 0; i < 26; i++)
        {
            std::cout << char_array[i] << " ";
        }
        std::cout << "\ntesting out of bound, lets give it a negative then more that its size\n";
        try
        {
            std::cout << "lets try to print array[-10]\n";
            std::cout << "char_array[-10] = " << char_array[-10] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }

        try
        {
            std::cout << "lets try to print array[27]\n";
            std::cout << "char_array[27] = " << char_array[27] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }

        try
        {
            std::cout << "lets try to print array[11]\n";
            std::cout << "char_array[11] = " << char_array[11] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Exceptione thrown is: " << e.what();
        }
        std::cout << "\n";
    }
}