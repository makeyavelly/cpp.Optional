#ifndef OPTIONAL_H
#define OPTIONAL_H

template <class T>
class Optional
{
    bool _null;
    T _value;

public:
    Optional(const T &value) :
        _null(false),
        _value(value)
    {}

    T &value()
    {
        return _value;
    }

    T& operator *()
    {
        return _value;
    }

    T *operator ->()
    {
        return &_value;
    }

    operator bool() const
    {
        return !_null;
    }

    bool operator ==(const Optional<T> &op) const
    {
        return ((_null == op._null) && (_value == op._value)) ||
                (_null && op._null);
    }

    bool operator !=(const Optional<T> &op) const
    {
        return !operator==(op);
    }

    static const Optional null()
    {
        return Optional<T>();
    }

private:
    Optional() :
        _null(true)
    {}
};

#endif // OPTIONAL_H
