#include <iostream>

class ProtoPol{
    protected:  int i_NPoly;
    public:     float virtual fn_GetAngle() =  0;
};

class Tri: public ProtoPol{
    private: float f_Sum;

    public: Tri(){
                i_NPoly= 3;
                f_Sum= (i_NPoly - 2)* 180;
            }
    public: ~Tri(){
                i_NPoly= 0;
            }

    public: float fn_GetAngle(){
                return f_Sum / static_cast<float>(i_NPoly);
            }
};

class Rec: public ProtoPol{
    private: float f_Sum;

    public: Rec(){
                i_NPoly= 4;
                f_Sum= (i_NPoly - 2)* 180;
            }
    public: ~Rec(){
                i_NPoly= 0;
            }

    public: float fn_GetAngle(){
                return f_Sum / static_cast<float>(i_NPoly);
            }
};

int main(){
    Tri o_Tri;
    Rec o_Rec;
    std::cout<< o_Tri.fn_GetAngle();
    std::cout<< " ";
    std::cout<< o_Rec.fn_GetAngle();
    return 0;
}
