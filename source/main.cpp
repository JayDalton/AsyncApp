// Including 'hpx/hpx_main.hpp' instead of the usual 'hpx/hpx_init.hpp' enables
// to use the plain C-main below as the direct main HPX entry point.
//#include <hpx/hpx_main.hpp>
//#include <hpx/iostream.hpp>
//
//int main()
//{
//    // Say hello to the world!
//    hpx::cout << "Hello World!\n" << hpx::flush;
//    return 0;
//}

#include <hpx/hpx_init.hpp>
#include <hpx/iostream.hpp>

int hpx_main(int, char**)
{
   // Say hello to the world!
   hpx::cout << "Hello World!\n" << hpx::flush;
   return hpx::finalize();
}

int main(int argc, char* argv[])
{
   return hpx::init(argc, argv);
}

