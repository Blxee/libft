
int isalpha(int c)
{
  int islower;
  int isupper;

  islower = c >= 'a' && c <= "z";
  isupper = c >= 'A' && c <= "Z";
  return (islower || isupper);
}
