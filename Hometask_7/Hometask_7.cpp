#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    double distance, time, speed, min, sec;
    cout << "Вычисление скорости бега \n";
    cout << "Введите длину дистанции (в метрах): \n";
    cin >> distance;
    cout << "Введите время (мин/сек): \n";
    cin >> time;
    sec = modf(time, &min) * 100;
    time = min * 60 + sec;
    speed = (distance / 1000) / (time / 3600);

    cout << "Дистанция: " << distance << " m \n";
    cout << "Время: " << min<<" мин "
         << sec <<" сек " << " в секундах = "
         << time << "секунд \n";

    cout << "Вы бежали со скоростью - " <<speed  << "км/ч \n";

    return 0;

}

