// ThreeEntries.cpp
// Created By: Kurt Campbell
// Created On: 1 December 2020
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int num[200] = {1974, 1773, 1841, 1932, 1951, 1852, 2000, 1988, 1998, 1670, 969, 2008, 1713, 2007, 1916, 1286, 1652, 1821, 
        1730, 2002, 1761, 1656, 814, 1999, 2010, 1936, 1794, 1905, 1250, 1920, 1986, 1709, 1914, 1681, 1820, 1982, 1961, 1931, 1331, 
        1923, 1972, 1631, 1643, 1719, 1926, 1994, 1952, 1981, 1847, 1774, 1296, 1946, 873, 2005, 173, 2006, 1960, 1872, 1894, 1695, 
        1769, 1800, 1734, 1675, 1860, 1383, 1947, 1768, 1827, 1877, 1721, 1738, 384, 1996, 1958, 1909, 1639, 1831, 1212, 1627, 1699, 
        1661, 1653, 1748, 1919, 1983, 1223, 1690, 1948, 1218, 1971, 1969, 1753, 1957, 1977, 1943, 1978, 1778, 1937, 1868, 1641, 1979, 
        1854, 1959, 1739, 2004, 1964, 760, 1890, 1701, 1940, 1840, 1817, 1966, 1799, 1941, 1934, 1929, 1962, 1691, 1927, 1764, 1945, 
        795, 1993, 1804, 1693, 1970, 1728, 1818, 1545, 1992, 1965, 1786, 2009, 1980, 1698, 1647, 1935, 1880, 1921, 1904, 1953, 1871, 
        1671, 1826, 1989, 1950, 1791, 1990, 1949, 1301, 1975, 1968, 1895, 1208, 1424, 1985, 1665, 1685, 1942, 1669, 64, 1832, 1995, 
        1987, 1955, 352, 1984, 1925, 1891, 1933, 1679, 2001, 1930, 1991, 1227, 1973, 1723, 1683, 132, 1718, 1944, 1908, 1900, 1657, 
        1954, 92, 1997, 1938, 1976, 1747, 1226, 1782, 1963, 1746, 1540, 1759, 1939, 1743
    };
    srand(2);
    int i;
    int j;
    int k;
    int sum;
    int count; 
    int product = 0;
    i = 0;
    j = i + 1;
    k = i + 2;
    sum = 0;
    bool done = false;

    while (!(done)) {
        cout << num[i] << endl;
        cout << num[j] << endl;
        cout << num[k] << endl;

        sum += (num[i] + num[j] + num[k]);
        cout << "Current sum: "<< sum << endl;
        if (sum > 2020 || sum < 2020) {
            sum = 0;
            i = rand() % 200;
            j = rand() % 200;
            k = rand() % 200;
        } else if (sum == 2020){
            product = num[i] * num[j] * num[k];
            cout << "Product: " << product << endl;
            done = true;
        }
    }
    return 0;
}