// angle brackets for built-in library
#include <bn_core.h> // read by precrocessor
#include <bn_backdrop.h> // for backdrop functions
#include <bn_color.h> // for color definitions
#include <bn_sprite_ptr.h> // for sprite_ptr
#include <bn_random.h> // for random functions
#include <bn_vector.h> // for vector
#include <bn_keypad.h>  // for keypad input

// "" for specific to project
#include "bn_sprite_items_bug.h" 


int main(){
    bn::core::init();

    bn::random rng = bn::random();

    bn::backdrop::set_color(bn::color(31,0,31));

    bn::vector<bn::sprite_ptr, 50> bugs ={};

    //bn::sprite_ptr ladybug = bn::sprite_items::bug.create_sprite();

    while(true){

        for(bn::sprite_ptr& ladybug : bugs){
            bn::fixed new_x = ladybug.x() + rng.get_fixed(-1, 1);
            bn::fixed new_y = ladybug.y() + rng.get_fixed(-1, 1);

            //set call mutate sprite position
            ladybug.set_x(new_x);
            ladybug.set_y(new_y);

         }


        if(bn::keypad::a_pressed()){
            bugs.push_back(bn::sprite_items::bug.create_sprite());
        }

        rng.update(); //random generator updating every frame 
        bn::core::update();
    }

}