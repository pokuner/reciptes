#define off_set(s, m) (size_t)&(((s*)0)->m)

int main(int argc, char *argv)
{
    std::cout << off_set(foo, a) << '\n';
    std::cout << off_set(foo, b) << '\n';
    std::cout << off_set(foo, c) << '\n';
}
