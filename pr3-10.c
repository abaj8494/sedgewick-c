// function reverses links in a list

link reverse(link x)
{
    link t, y = x, r = NULL;
    while (y != NULL)
    { t = y->next; y->next = r; r = y; y = t; }
}
