#include<iostream>

class SSDB
{
    private:
	int size;
	SSDB(int a);
    public:
//	int size;
	int static func(int a);
};

SSDB::SSDB(int a)
{
    size = a;
}

int SSDB::func(int a)
{
    SSDB * ssdb = new SSDB(a);
    std::cout << a << ssdb->size << std::endl;     
}

int main()
{
    SSDB::func(5);
    return 0;
}
