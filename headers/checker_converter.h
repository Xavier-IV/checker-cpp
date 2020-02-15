//
// Created by LENOVO on 13/2/2020.
//

#ifndef CHECKER_CHECKER_CONVERTER_H
#define CHECKER_CHECKER_CONVERTER_H

#endif //CHECKER_CHECKER_CONVERTER_H

namespace checker_converter {

    char convert(int pieces) {
        switch (pieces) {
            case 0 :
                return (' ');
            case 1 :
                return ('a');
            case 2 :
                return ('b');
            case 3 :
                return ('#');
            case 4 :
                return ('A');
            case 5 :
                return ('B');
            default :
                return ('!');
        }
    }

}