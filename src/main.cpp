#include <bn_core.h> // read by precrocessor
#include <bn_backdrop.h> // for backdrop functions
#include <bn_color.h> // for color definitions
#include <bn_sprite_ptr.h> // for sprite_ptr
// angle brackets for built-in library

#include "bn_sprite_items_bug.h" // "" for specific to project


int main(){
    bn::core::init();

    bn::backdrop::set_color(bn::color(31,0,31));

    bn::sprite_ptr ladybug = bn::sprite_items::bug.create_sprite();

    while(true){
        bn::core::update();
    }

}