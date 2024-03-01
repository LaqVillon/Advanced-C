/* 
 * Challenge - Bit fields
 * 
 * 
 * 
 */

#include <stdio.h>
#include <stdbool.h>  // c99, defines bool, true, false

// Line styles
const int solid = 0;
const int dotted = 1;
const int dashed = 2;

// Primary colors
const int blue = 4;
const int green = 2;
const int red = 1;

//Mixed colors
const int black = 0;
const int yellow = red | green;
const int magenta = red | blue;
const int cyan = green | blue;
const int white = red | green | blue;
const char *colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"}; // positions = [0, 1, 2, 3 ... , 7]


struct Box_properties
{
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4;  // ' :' means padding
    bool show_border : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int : 2;  // ' :' means padding
};


void show_settings (const struct Box_properties *ptr)
{
    printf("Box is %s.\n", ptr->opaque == true ? "opaque": "transparent");
    printf("The fill color is %s.\n", colors[ptr->fill_color]);
    printf("Border is %s.\n", ptr->show_border == true ? "shown": "not shown");
    printf("The border color is %s.\n", colors[ptr->border_color]);
    printf("The border style is ");
    switch (ptr->border_style)
    {
    case solid:
        {
            printf("solid.\n");
            break;
        }
    case dotted:
        {
            printf("dotted.\n");
            break;
        }
    case dashed:
        {
            printf("dashed.\n");
            break;
        }
    default:
        {
            printf("unknown type.\n");
            break;
        }
    }
}

int main()
{
    struct Box_properties box = {true, yellow, true, green, dashed};  // Same order than variables in struct
    printf("Sizeof box is: %lu\n", sizeof(box));
    printf("Original box setting: \n");
    show_settings(&box);
    
    // changing some values
    box.opaque = false;
    box.fill_color = white;
    box.border_color = magenta;
    box.border_style = solid;
    printf("\nModified box setting: \n");
    show_settings(&box);
    
    printf("\n");
    return 0;
}
