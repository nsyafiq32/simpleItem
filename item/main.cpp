#include <iostream>
#include <string>


int main()
{
    int stat, stat_hebat = 0, stat_lemah = 0, stat_sblm = 0;
    std::string item, item_hebat, item_lemah;
    std::string item_sblm;
    bool item1 = true;
    char lagi = 'y';

    while(lagi == 'y'){
       std::cout << "Input Item   : "; std::cin >> item;
       std::cout << "Input Stat   : "; std::cin >> stat;
       std::cout << std::endl;
       std::cout << "Item Anda  : " << item <<std::endl;
       std::cout << "Stat   : " << stat <<std::endl;
       std::cout << std::endl;
        if(item1 == true){
            item_sblm = "nothing";
            item_hebat = item;
            item_lemah = item;
            stat_hebat = stat;
            stat_lemah = stat;
        }else{
            if(stat >= stat_hebat){
                item_hebat = item;
                stat_hebat = stat;
            }else{
                if(stat <= stat_lemah){
                    item_lemah = item;
                    stat_lemah = stat;
                }
            }
        }

       std::cout << "Item Sebelum       : " << item_sblm << std::endl;
       std::cout << "Item Terkuat       : " << item_hebat << std::endl;
       std::cout << "Item Terlemah      : " << item_lemah << std::endl;
        item_sblm = item;
        stat_sblm = stat;
        item1 = false;
       std::cout << "Input Item Lagi? (y/n)"; std::cin >> lagi;
       std::cout << std::endl;
    }


    return 0;
}
