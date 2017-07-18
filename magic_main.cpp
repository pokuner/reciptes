class AutoMainBase
{
public:
    AutoMainBase()
    {
       /*在这里做一些程序必要的初始化*/
        std::cout << "construct auto main base" << std::endl;
    }
    ~AutoMainBase()
    {
        /*在这里做释放*/
        std::cout << "destruct auto main base" << std::endl;
    }
};

#define main os_main(int argc, char *argv);\
class AutoMain : public AutoMainBase\
{\
public:\
    int run(int argc, char *argv)\
    {\
        return os_main(argc, argv);\
    }\
};\
int main(int argc, char *argv)\
{\
    AutoMain m;\
    return m.run(argc, argv);\
}\
int os_main

int main(int argc, char *argv)
{
    std::cout << "my main" << std::endl;
    return 0;
}
