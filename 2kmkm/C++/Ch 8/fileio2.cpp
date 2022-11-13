#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream inStream;  // 입력 파일 객체 선언 
  ofstream outStream; // 출력 파일 객체 선언

  inStream.open("infile.txt");                       // 입력 파일 열기
  outStream.open("outfile.txt",  ios::app );  // 출력 파일 열기

  string word;

  while ( inStream >> word )    // 입력 파일의 끝에 도달할 때까지 단어(word)를 반복해서 읽고
    outStream << word << " ";   // 이 단어를 출력 파일에 공백으로 구분해서 출력

  inStream.close();   // 입력 파일 닫기
  outStream.close();  // 출력 파일 닫기

  return 0;
}
