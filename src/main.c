#include <stdio.h>
#include <stdlib.h>
#include "controller/controller.h"
#include "view/view.h"



int main() {
    int choice = choice_menu(); // from view
    run(choice); // from controller
    return 0;
}