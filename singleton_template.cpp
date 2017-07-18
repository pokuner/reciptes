template<class T>
class Singleton : public NonCopyable
{
public:
    Singleton()
    {
        assert(!_instance);
        _instance = static_cast<T*>(this);
    }

    ~Singleton()
    {
        assert(_instance);
        _instance = NULL;
    }

    static T* GetInstance()
    {
        return _instance;
    }
private:
    static T *_instance;
};

template<class T>
T* Singleton<T>::_instance = NULL;

class Logger : public Singleton<Logger>
{
public:
    Logger(const std::string &name) : _name(name)
    {
    }

    void print()
    {
        std::cout << "my name is " << _name
            << ", and my position is " << this << std::endl;
    }

private:
    std::string _name;
};

int main(int argc, char *argv)
{
    // Need init logger first
    Logger logger("logger 1");

    // then use ...
    Logger::GetInstance()->print();
    Logger::GetInstance()->print();
}