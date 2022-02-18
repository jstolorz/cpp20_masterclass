//
// Created by jstol on 16.02.2022.
//

#pragma once


class section30 {
public:
    section30(double m_x, double m_y);
    ~section30();

public:
    static int count;
    static inline int in_count{2};
    static inline const double PI{ 3.141592653589793238462643};

private:
    double m_x;
    double m_y;
};




