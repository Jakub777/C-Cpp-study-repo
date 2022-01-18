class Board{
private:
    int size_x;
    int size_y;
    char sym;
    char* brd;
public:
    Board(int, int, char);
    ~Board();
    void say_hello_asd();
    void init_array();
    void print_array();
    void update_symbol(char);
};