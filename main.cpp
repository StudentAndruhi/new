#include "main.h"


int main()
{


    float house_number = 1;
    setlocale(LC_ALL, "");
    std::ifstream file("test.txt");
    string line;
    const char* temp;
    char *str1;
    int k = 0;
    float  parametrs[14];
    if (file.is_open())
  {
    while ( file.good() )
    {
    getline (file,line);
    temp = line.c_str();
    str1 = (char*)temp;
    //printf("%s\n", str1);
    char* pch = strtok (str1," ");
    while (pch != NULL)
    {
    parametrs[k]=atof(pch);
    //std::cout << (pch)  << "\n";
      pch = strtok (NULL, " ");
      k++;
    }
    }
    file.close();
  }
  else cout << "Unable to open file";
    Map *Image;
    Image = new Map(parametrs[0], parametrs[1]);
    House *House1;
    House1 = new House();
    Image->assosiate(parametrs[2], parametrs[3], parametrs[4], parametrs[5]);
    pos1.setLatitude(parametrs[6]);
    pos1.setLongtitude(parametrs[7]);
    pos2.setLatitude(parametrs[8]);
    pos2.setLongtitude(parametrs[9]);
    pos3.setLatitude(parametrs[10]);
    pos3.setLongtitude(parametrs[11]);
    pos4.setLatitude(parametrs[12]);
    pos4.setLongtitude(parametrs[13]);
    Position pos[4] = {pos1,pos2,pos3,pos4};
    Position pos1;
    Position pos2;
    Position pos3;
    Position pos4;

    float K1 = (parametrs[4]-parametrs[2])/parametrs[1];
    float K2 = (parametrs[5]-parametrs[3])/parametrs[0];
    for (int i=0; i<4; i++){
    House1->add_Corner(pos[i]);
    }
    float Hhight = (pos1.getLatitude()-pos2.getLatitude())/K1*1;
    float Hwidth = (pos2.getLongtitude()-pos1.getLongtitude())/K2*1;
    House1->setHight(Hhight);
    House1->setWidth(Hwidth);
    float dist1 = (pos3.getLatitude()-Image->return_coord(1))/K1;
    float dist2 = (pos3.getLongtitude()-Image->return_coord(2))/K2;
    //House1->Draw(Image,);
    printf("%f%f", K1, K2);
    House1->Draw(Image, dist1, dist2);
    Image->save("Image.pnm");
    free(Image);
    free(House1);
    char c;
    scanf("%c", &c);
    return 0;
}
