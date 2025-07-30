#include "Serializer.hpp"

int main()
{
    Data *data_ptr = new Data;
    Data *des_ptr = NULL;
    uintptr_t   uint_ptr = 0;

    data_ptr->value = 42;
    std::cout << "\t\tBefore:\n";
    std::cout << "  data_ptr = " << data_ptr << "\n";
    std::cout << "  des_ptr = " << des_ptr << "\n";
    std::cout << "  unitptr = " << uint_ptr << "\n";
    std::cout << "  data_ptr.value = " << data_ptr->value << "\n";
    if (des_ptr == NULL)
        std::cout << "  des_ptr.value = NULL\n";
    else
        std::cout << "  des_ptr.value = " << des_ptr->value << "\n";

    uint_ptr = Serializer::serialize(data_ptr);

    std::cout << "\t\tAfter\n";
    std::cout << "  data_ptr = " << data_ptr << "\n";
    std::cout << "  des_ptr = " << des_ptr << "\n";
    std::cout << "  unitptr = " << uint_ptr << "\n";
    std::cout << "  data_ptr.value = " << data_ptr->value << "\n";
    if (des_ptr == NULL)
        std::cout << "  des_ptr.value = NULL\n";
    else
        std::cout << "  des_ptr.value = " << des_ptr->value << "\n";

    std::cout << "\t\tReturning to Before:\n";
    des_ptr = Serializer::deserialize(uint_ptr);
    std::cout << "  data_ptr = " << data_ptr << "\n";
    std::cout << "  des_ptr = " << des_ptr << "\n";
    std::cout << "  unitptr = " << uint_ptr << "\n";
    std::cout << "  data_ptr.value = " << data_ptr->value << "\n";
    if (des_ptr == NULL)
        std::cout << "  des_ptr.value = NULL\n";
    else
        std::cout << "  des_ptr.value = " << des_ptr->value << "\n";
    des_ptr->value = 1337;

    std::cout << "\t\tThe new Data is usable:\n";
    des_ptr = Serializer::deserialize(uint_ptr);
    std::cout << "  data_ptr = " << data_ptr << "\n";
    std::cout << "  des_ptr = " << des_ptr << "\n";
    std::cout << "  unitptr = " << uint_ptr << "\n";
    std::cout << "  data_ptr.value = " << data_ptr->value << "\n";
    if (des_ptr == NULL)
        std::cout << "  des_ptr.value = NULL\n";
    else
        std::cout << "  des_ptr.value = " << des_ptr->value << "\n";
    delete data_ptr;
}
