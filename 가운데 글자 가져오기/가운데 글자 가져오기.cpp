// 프로그래머스 가운데 글자 가져오기 문제
/*
    글자의 길이를 받아 중간 부분 글자를 표시해주는 문제 개인적으로 문제자체는 되게 쉬워서 사이즈의 중간 부분을 출력해주었음.
    다른 사람이 해결한 방법을 보니 비트연산을 통해 length의 길이가 홀 짝 인지 구분하여 substr함수를 이용하여 자른 부분을 return하게 해주었는데 배울 점이있었다.
    return s.length()&1 ? s.substr(s.length()*0.5,1) : s.substr(s.length()*0.5-1,2);  
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> v(s.begin(), s.end());

    int first_word = v.size() / 2 - 1;
    int second_word = v.size() / 2;

    if (v.size() % 2 == 0)
    {
        answer.push_back(v[first_word]);
        answer.push_back(v[second_word]);
    }
    else
    {
        answer.push_back(v[second_word]);
    }



    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

