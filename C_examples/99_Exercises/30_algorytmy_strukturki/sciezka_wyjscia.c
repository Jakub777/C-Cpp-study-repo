#include <stdio.h>
#include <stdlib.h>
#define SQUARE_SIDE 22
#define SQUARE_LAST_INDEX (SQUARE_SIDE - 1)

char  my_tab[SQUARE_SIDE][SQUARE_SIDE] = {0};
char* g_stash[8] = {0};
char  g_position[2] = {0};
char symbol = ' ';
int steps_counter = 0;
typedef struct _route_t {
    char* cell_ptr;
    int step_id;
} route_t;
route_t route[100] = {0};

// set to 1 for debug, set to 0 for fast mode

char debug = 0;
void init_matrix(void);
void draw_matrix(void);
void make_array_of_ones_nearby(char* requested_position);
char look_for_end(char* requested_position);
void show_position(char* requested_position);
void print_story(void);

int main(int argc, char const *argv[])
{
    init_matrix();
    draw_matrix();
    printf("press enter to start");
    getchar();
    // look_for_end((char*)&my_tab[15][15]);
    if (0 == look_for_end((char*)my_tab)) {
        printf("Main: No success\n");
    }
    printf("Main: Out of recursion\n");
    printf("Main: step counter: %d\n", steps_counter);
    print_story();
    return 0;
}
void print_story(void){
    printf("PS step counter: %d\n", steps_counter);
    for (int _step_id = 0; _step_id <= 41; _step_id++)
    {

        char* current_step_adress = route[_step_id].cell_ptr;
        char* reference_adress = (char*)my_tab;
        int crr_step_offset = current_step_adress - reference_adress;
        int x_index = 0;
        int y_index = 0;
        x_index += crr_step_offset % SQUARE_SIDE;
        y_index += crr_step_offset / SQUARE_SIDE;
        printf("%2d_[%2d][%2d]  ", route[_step_id].step_id, y_index, x_index);
        if (0 == ((_step_id + 1) % 5)) printf("\n");

    }  
}
char look_for_end(char* requested_position){
    static int success = 0;
    static int local_step = 0;
    local_step = steps_counter;
    if (1 == success) 
        return success;
    // Save step in history
    route[steps_counter].cell_ptr = requested_position;
    route[steps_counter].step_id = steps_counter;
    // Draw Current Step 
    system("cls");
    *requested_position = symbol;
    draw_matrix();
    show_position(requested_position);
    // Check if I reached the end
    char* reference_adress = (char*)my_tab;
    int adress_difference = requested_position - reference_adress;
    if (SQUARE_SIDE * SQUARE_SIDE - 1 == adress_difference) {
        printf("SUCCESS, IT'S END HERE\n");
        printf("Step counter: %d\n", steps_counter);
        success = 1;
    }
    // If I didnt reach the end, start looking for '1' nearby
    make_array_of_ones_nearby(requested_position);
    // Write data of '1' nearby to local table
    char* possible_routes[8]; for (int i = 0; i < 8; i++) {possible_routes[i] = g_stash[i]; }
    // Analyse data in table
    for (int i = 0; i < 8; i++){
        // Breaks loop if recursion finds success with 'break'
        if (1 == success) break;
        // Null = skip current interation with 'continue'
        if (possible_routes[i] == NULL) {
            if (1 == debug) {
                printf("Rekurencja: (i: %d) null, szukam dalej.\n", i);
                getchar();
            }
            continue;
        }
        // '1' = recursion
        if (*(possible_routes[i]) == '1') {
            if (1 == debug) {
                printf("Rekurencja: (i: %d) jest jeden wchodze!!\n", i);
                getchar();
            }
            steps_counter++;
            printf("step counter: %d\n", steps_counter);
            look_for_end(possible_routes[i]);
        }
        // '0'
        else {
            if (1 == debug) {
                printf("Rekurencja: (i: %d) nie ma jedynki, szukam dalej.\n", i);
                getchar();
            }
        }
        steps_counter = local_step;
    }
    return success;
}
void show_position(char* requested_position){
    char* reference_adress = (char*)my_tab;
    int adress_difference = requested_position - (reference_adress);
    adress_difference;
    // czesc calkowita to wiersz
    g_position[0]  = adress_difference / SQUARE_SIDE;
    // reszta z dzielenia to kolumna
    g_position[1]  = adress_difference % SQUARE_SIDE;
    printf("Jestem na pozycji [%d][%d]\n", g_position[0], g_position[1]);
}
void make_array_of_ones_nearby(char* requested_position) {
    char* reference_adress = (char*)my_tab;
    int adress_difference = requested_position - reference_adress;
    char is_first_row =  0;
    char is_last_row =   0;
    char is_left_col =   0;
    char is_right_col =  0;
    printf("Skan: warunki specjalne: ");
    if (SQUARE_SIDE - 1 >= adress_difference)                    {printf("first row  "), is_first_row = 1;}
    if (SQUARE_SIDE * (SQUARE_SIDE - 1) - 1 < adress_difference) {printf("last row  "),  is_last_row = 1;}
    if (0 == (adress_difference % SQUARE_SIDE))                  {printf("left col  "),  is_left_col = 1;}
    if (0 == ((adress_difference + 1) % SQUARE_SIDE))            {printf("right col  "), is_right_col = 1;}
    printf("\n");
    char* temp[8] = 
           {(requested_position + 1), 
            (requested_position + SQUARE_SIDE + 1), (requested_position + SQUARE_SIDE), (requested_position + SQUARE_SIDE - 1),
            (requested_position - 1),
            (requested_position - SQUARE_SIDE - 1), (requested_position - SQUARE_SIDE), (requested_position - SQUARE_SIDE + 1)};
    if (1 == is_first_row) {temp[5] = NULL; temp[6] = NULL; temp[7] = NULL;}
    if (1 == is_last_row)  {temp[1] = NULL; temp[2] = NULL; temp[3] = NULL;}
    if (1 == is_left_col)  {temp[3] = NULL; temp[4] = NULL; temp[5] = NULL;}
    if (1 == is_right_col) {temp[7] = NULL; temp[0] = NULL; temp[1] = NULL;}
    for (int i = 0; i < 8; i++) {
        g_stash[i] = temp[i];
    } 
    if (1 == debug) {
        printf("Skan: ");
        for (int i = 0; i < 8; i++) {
            if (temp[i] == NULL) printf("%d->N\t", i);
            else                 printf("%d->%c\t", i, *temp[i]);
        } printf("\n");
        printf("Skan: array made with success\n");
    }
}
void init_matrix(void) {
    char lower = 48;
    for (int y_index = 0; y_index < SQUARE_SIDE; y_index++)
    {
        for (int x_index = 0; x_index < SQUARE_SIDE; x_index++)
        {
            my_tab[y_index][x_index] = ( rand() % 2) + lower ;
        }
    }
    my_tab[SQUARE_LAST_INDEX][SQUARE_LAST_INDEX] = '1';
}
void draw_matrix(void) {
    for (int y_index = 0; y_index < SQUARE_SIDE; y_index++)
    {
        for (int x_index = 0; x_index < SQUARE_SIDE; x_index++)
        {
            printf("%c ", my_tab[y_index][x_index]);
        }
        printf("\n");
    }
    
}
