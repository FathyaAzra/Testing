program No_1; {dengan menggunakan operasi kondisi, buatlah sebuah program untuk mengurutkan 3 buah angka ascending}
uses crt;
var a,b,c:integer;

begin
clrscr;
        write('Masukkan bilangan pertama : ');
        readln(a);
        write('Masukkan bilangan kedua : ');
        readln(b);
        write('Masukkan bilangan ketiga : ');
        readln(c);

        if (a>=b) and (b>=c) then begin
                writeln(c);writeln(b);writeln(a) end
        else if (a>=c) and (c>=b) then begin
                writeln(b);writeln(c);writeln(a) end

        else if (b>=a) and (a>=c) then begin
                writeln(c);writeln(a);writeln(b) end
        else if (b>=c) and (c>=a) then begin
                writeln(a);writeln(c);writeln(b) end

        else if (c>=a) and (a>=b) then begin
                writeln(b);writeln(a);writeln(c) end
        else if (c>=b) and (b>=a) then begin
                writeln(a);writeln(b);writeln(c) end
        else writeln('Angka tidak valid');
        readln;
end.




        readln;
        end.
