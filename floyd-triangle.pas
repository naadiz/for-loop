Var 
  n, m, i, j : longint;

Begin
  m := 1;
  read(n);

  For i := 1 To n Do
    Begin
      For j := 1 To i Do
        Begin
          write(m);
          write(' ');
          inc(m);
        End;
      writeln('');
    End;
End.