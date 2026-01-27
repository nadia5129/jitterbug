#include <bn_core.h> // read by precrocessor
#include <bn_backdrop.h> // for backdrop functions
#include <bn_color.h> // for color definitions


int main(){
    bn::core::init();

    bn::backdrop::set_color(bn::color(31,0,31));

    while(true){
        bn::core::update();
    }

}