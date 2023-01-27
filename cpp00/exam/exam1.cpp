/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:36:36 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/27 16:01:37 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;    //using namespace != namespace

int main(void)
{
    int age = 0;    //변수 상수 간에 호출 전에는 초기화가 필요

    cout << "short형 자료형의 바이트 크기 : " + to_string(sizeof(short)) << endl << endl;   // 문자열을 넣는 방법
    cout << "주소:" << &age << endl << endl;    // 주소를 넣기 위한 방법

    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2 + "!!";
    cout << s3 << endl;
    return (0);
}
