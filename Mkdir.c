#include <sys/types.h>
#include <sys/stat.h>

int mkdir_maison(const char *pathname, mode_t mode){
    mkdir(pathname, mode);
}