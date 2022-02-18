//
// Created by jstol on 16.02.2022.
//

#pragma once

#include <iostream>

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

class integer{
public:
    integer() = default;
    integer(int inner_int);

    int get_inner_int() const;

    void set_inner_int(int inner_int);

private:
    int inner_int{0};
};

class point{
public:
    point(double x,double y);

public:

    static void print_point_info(const point& p);

    point *p_m_origin;
    static point m_origin;
    static const point c_m_origin;

private:
    double m_x;
    double m_y;
    static int m_point_count;
    integer i1{1};
};




