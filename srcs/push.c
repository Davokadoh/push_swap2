//Copy first element of src in tmp.
//Move every element of src one position to the left.
//Move all elements of dst one position to the right.
//Move tmp to dst.
void    push(int *src, int *dst)
{
    int tmp;

    tmp = src[0];
    shift_left(src, 1);
    shift_right(dst, 1);
    dst[0] = tmp;
}