hours = int(input("Waktu mulai(jam)     : "))
mins  = int(input("Waktu mulai(menit)   : "))
dura  = int(input("Durasi event (menit) : "))

mins = mins+dura

if mins>59 :
    hours = hours+int(mins/60)
    mins  = mins%60

if hours>23 :
    hours = hours%24

print("\n\nWaktu akhir adalah ", hours, ":", mins)

