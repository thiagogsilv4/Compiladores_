/*Sem erros*/
int ackermann(int m, int n)
{
  static int cnt;
  cnt++;
  if (m == 0) return n+1;
  if (n == 0) return ackermann(m-1, 1);
  return ackermann(m-1, ackermann(m, n-1));
}
/*Main adicionado para teste*/
int main(){
	
	return ackermann(2,3);
}
