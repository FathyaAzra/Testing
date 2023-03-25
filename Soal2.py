hours = int(input("Waktu mulai(jam)     : "))
mins  = int(input("Waktu mulai(menit)   : "))
dura  = int(input("Durasi event (menit) : "))

mins = mins+dura

if mins>60 :
    hours = hours+int(mins/60)
    mins  = mins%60

print("\n\nWaktu akhir adalah ", hours, ":", mins)

