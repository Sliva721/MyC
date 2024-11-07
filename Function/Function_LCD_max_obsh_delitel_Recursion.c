/* Функция gcd (grand common divisor), наибольший общий делитель для чисел x и y.
*/


/* правильно принято называть функцию
gcd (grand common divisor), но я назвал как в переводчике
*/
// Этот РЕКУРСИВНЫЙ алгоритм по Тимофею Хирьянову (Рекурсия).

int largСommonDivisor(int a, int b) {
    if (0 == b) return a;
    return largСommonDivisor(b, a % b);
}