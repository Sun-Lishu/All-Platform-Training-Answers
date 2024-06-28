def runnian(year):
    return (year%4==0 and year%100 !=0) or (year%400==0)
def daymounter(year,month):
    daysinmonth={
        1:31,
        2:29 if runnian(year) else 28,
        3:31,
        4:30,
        5:31,
        6: 30,
        7: 31,
        8: 31,
        9: 30,
        10: 31,
        11: 30,
        12: 31
    }
    return daysinmonth[month]
year, month = map(int, input().split())
#wozhendefulezhegekaifa
print(daymounter(year, month))
