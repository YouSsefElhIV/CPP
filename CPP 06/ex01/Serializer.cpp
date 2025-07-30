#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::~Serializer()
{

}

Serializer::Serializer(const Serializer& copy)
{
    (void)copy;
}

Serializer &Serializer::operator=(const Serializer& copy)
{
    (void)copy;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t   raw;

    raw = reinterpret_cast <uintptr_t> (ptr);
    return (raw);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    Data *data_ptr;

    data_ptr = reinterpret_cast <Data*> (raw);
    return (data_ptr);
}
