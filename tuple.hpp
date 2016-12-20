//
//  tuple.cpp
//
//
//  Created by Yibo Liu on 2016/11/9.
//
//
#include <string>

int to_int(const std::string& s);

class tuple{
private:
    int id;
    int MSSubClass;
    std::string MSZoning;
    int LotFrontage, LotArea;
    std::string Street, Alley, LotShape, LandContour, Utilities, LotConfig, LandSlope, Neighborhood, Condition1, Condition2, BldgType, HouseStyle;
    int OverallQual, OverallCond, YearBuilt, YearRemondAdd;
    std::string RoofStyle, RoofMatl, Exterior1st, Exterior2nd, MasVnrType;
    int MasVnrArea;
    std::string ExterQual, ExterCond, Foundation, BsmtQual, BsmtCond, BsmtExposure, BsmtFinType1;
    int BsmtFinSF1;
    std::string BsmtFinType2;
    int BsmtFinSF2, BsmtUnfSF, TotalBsmtSF;
    std::string Heating, HeatingQC, CentralAir, Electrical;
    int FirstFlrSF, SecondFlrSF, LowQualFinSF, GrLivArea, BsmtFullBath, BsmtHalfBath, FullBath, HalfBath, BedroomAbvGr, KitchenAbvGr;
    std::string KitchenQual;
    int TotRmsAbvGrd;
    std::string Functional;
    int Fireplaces;
    std::string FireplaceQu, GarageType;
    int GarageYrBlt;
    std::string GarageFinish;
    int GarageCars, GarageArea;
    std::string GarageQual, GarageCon, PavedDrive;
    int WoodDeckSF, OpenPorchSF, EnclosedPorch, ThreeSsnPorch, ScreenPorch, PoolArea;
    std::string PoolQC, Fence, MiscFeature;
    int MiscVal, MoSold, YrSold;
    std::string SaleType, SaleCondition;
    int SalePrice;
    
public:
    tuple(int id){
        this->id = id;
    }
    void setFirstEight(std::string MSSubClass, std::string MSZoning, std::string LotFrontage, std::string LotArea,
                       std::string Street, std::string Alley, std::string LotShape, std::string LandContour){
        this->MSSubClass = to_int(MSSubClass);
        this->MSZoning = MSZoning;
        this->LotFrontage = to_int(LotFrontage);
        this->LotArea = to_int(LotArea);
        this->Street = Street;
        this->Alley = Alley;
        this->LotShape = LotShape;
        this->LandContour = LandContour;
    }
    void setSecondEight(std::string Utilities, std::string LotConfig, std::string LandSlope,
                        std::string Neighborhood, std::string Condition1, std::string Condition2,
                        std::string BldgType, std::string HouseStyle){
        this->Utilities = Utilities;
        this->LotConfig = LotConfig;
        this->LandSlope = LandSlope;
        this->Neighborhood = Neighborhood;
        this->Condition1 = Condition1;
        this->Condition2 = Condition2;
        this->BldgType = BldgType;
        this->HouseStyle = HouseStyle;
    }
    void setThirdEight(std::string OverallQual, std::string OverallCond, std::string YearBuilt, std::string YearRemondAdd,
                       std::string RoofStyle, std::string RoofMatl, std::string Exterior1st,
                       std::string Exterior2nd){
        this->OverallQual = to_int(OverallQual);
        this->OverallCond = to_int(OverallCond);
        this->YearBuilt = to_int(YearBuilt);
        this->YearRemondAdd = to_int(YearRemondAdd);
        this->RoofStyle = RoofStyle;
        this->RoofMatl = RoofMatl;
        this->Exterior1st = Exterior1st;
        this->Exterior2nd = Exterior2nd;
    }
    void setForthEight(std::string MasVnrType, std::string MasVnrArea, std::string ExterQual,
                       std::string ExterCond, std::string Foundation, std::string BsmtQual,
                       std::string BsmtCond, std::string BsmtExposure){
        this->MasVnrType = MasVnrType;
        this->MasVnrArea = to_int(MasVnrArea);
        this->ExterQual = ExterQual;
        this->ExterCond = ExterCond;
        this->Foundation = Foundation;
        this->BsmtQual = BsmtQual;
        this->BsmtCond = BsmtCond;
        this->BsmtExposure = BsmtExposure;
    }
    void setFifthEight(std::string BsmtFinType1, std::string BsmtFinSF1, std::string BsmtFinType2,
                       std::string BsmtFinSF2, std::string BsmtUnfSF, std::string TotalBsmtSF, std::string Heating,
                       std::string HeatingQC){
        this->BsmtFinType1 = BsmtFinType1;
        this->BsmtFinSF1 = to_int(BsmtFinSF1);
        this->BsmtFinType2 = BsmtFinType2;
        this->BsmtFinSF2 = to_int(BsmtFinSF2);
        this->BsmtUnfSF = to_int(BsmtUnfSF);
        this->TotalBsmtSF = to_int(TotalBsmtSF);
        this->Heating = Heating;
        this->HeatingQC = HeatingQC;
    }
    void setSixthEight(std::string CentralAir, std::string Electrical, std::string FirstFlrSF, std::string SecondFlrSF,
                       std::string LowQualFinSF, std::string GrLivArea, std::string BsmtFullBath, std::string BsmtHalfBath){
        this->CentralAir = CentralAir;
        this->Electrical = Electrical;
        this->FirstFlrSF = to_int(FirstFlrSF);
        this->SecondFlrSF = to_int(SecondFlrSF);
        this->LowQualFinSF = to_int(LowQualFinSF);
        this->GrLivArea = to_int(GrLivArea);
        this->BsmtFullBath = to_int(BsmtFullBath);
        this->BsmtHalfBath = to_int(BsmtHalfBath);
    }
    void setSeventhEight(std::string FullBath, std::string HalfBath, std::string BedroomAbvGr, std::string KitchenAbvGr,
                         std::string KitchenQual, std::string TotRmsAbvGrd, std::string Functional, std::string Fireplaces){
        this->FullBath = to_int(FullBath);
        this->HalfBath = to_int(HalfBath);
        this->BedroomAbvGr = to_int(BedroomAbvGr);
        this->KitchenAbvGr = to_int(KitchenAbvGr);
        this->KitchenQual = KitchenQual;
        this->TotRmsAbvGrd = to_int(TotRmsAbvGrd);
        this->Functional = Functional;
        this->Fireplaces = to_int(Fireplaces);
    }
    void setEighthEight(std::string FireplaceQu, std::string GarageType, std::string GarageYrBlt,
                        std::string GarageFinish, std::string GarageCars, std::string GarageArea,
                        std::string GarageQual, std::string GarageCon){
        this->FireplaceQu = FireplaceQu;
        this->GarageType = GarageType;
        this->GarageYrBlt = to_int(GarageYrBlt);
        this->GarageFinish = GarageFinish;
        this->GarageCars = to_int(GarageCars);
        this->GarageArea = to_int(GarageArea);
        this->GarageQual = GarageQual;
        this->GarageCon = GarageCon;
    }
    void setNinthEight(std::string PavedDrive, std::string WoodDeckSF, std::string OpenPorchSF, std::string EnclosedPorch,
                       std::string ThreeSsnPorch, std::string ScreenPorch, std::string PoolArea, std::string PoolQC){
        this->PavedDrive = PavedDrive;
        this->WoodDeckSF = to_int(WoodDeckSF);
        this->OpenPorchSF = to_int(OpenPorchSF);
        this->EnclosedPorch = to_int(EnclosedPorch);
        this->ThreeSsnPorch = to_int(ThreeSsnPorch);
        this->ScreenPorch = to_int(ScreenPorch);
        this->PoolArea = to_int(PoolArea);
        this->PoolQC = PoolQC;
    }
    void setTenthEight(std::string Fence, std::string MiscFeature, std::string MiscVal, std::string MoSold,
                       std::string YrSold, std::string SaleType, std::string SaleCondition, std::string SalePrice){
        this->Fence = Fence;
        this->MiscFeature = MiscFeature;
        this->MiscVal = to_int(MiscVal);
        this->MoSold = to_int(MoSold);
        this->YrSold = to_int(YrSold);
        this->SaleType = SaleType;
        this->SaleCondition = SaleCondition;
        this->SalePrice = to_int(SalePrice);
    }
    int getId(){
        return this->id;
    }
    int getMSSubClass(){
        return this->MSSubClass;
    }
    std::string getMSZoning(){
        return this->MSZoning;
    }
    int getLotFrontage(){
        return this->LotFrontage;
    }
    int getLotarea(){
        return this->LotArea;
    }
    std::string getStreet(){
        return this->Street;
    }
    std::string getAlley(){
        return this->Alley;
    }
    std::string getLotShape(){
        return this->LotShape;
    }
    std::string getLandContour(){
        return this->LandContour;
    }
    std::string getUtilities(){
        return this->Utilities;
    }
    std::string getLotConfig(){
        return this->LotConfig;
    }
    std::string getLandSlope(){
        return this->LandSlope;
    }
    std::string getNeighborhood(){
        return this->Neighborhood;
    }
    std::string getCondition1(){
        return this->Condition1;
    }
    std::string getCondition2(){
        return this->Condition2;
    }
    std::string getBldgType(){
        return this->BldgType;
    }
    std::string getHouseStyle(){
        return this->HouseStyle;
    }
    int getOverallQual(){
        return this->OverallQual;
    }
    int getOverallCond(){
        return this->OverallCond;
    }
    int getYearBuilt(){
        return this->YearBuilt;
    }
    int getYearRemondAdd(){
        return this->YearRemondAdd;
    }
    std::string getRoofStyle(){
        return this->RoofStyle;
    }
    std::string getRoofMatl(){
        return this->RoofMatl;
    }
    std::string getExterior1st(){
        return this->Exterior1st;
    }
    std::string getExterior2nd(){
        return this->Exterior2nd;
    }
    std::string getMasVnrType(){
        return this->MasVnrType;
    }
    int getMasVnrArea(){
        return this->MasVnrArea;
    }
    std::string getExterQual(){
        return this->ExterQual;
    }
    std::string getExterCond(){
        return this->ExterCond;
    }
    std::string getFoundation(){
        return this->Foundation;
    }
    std::string getBsmtQual(){
        return this->BsmtQual;
    }
    std::string getBsmtCond(){
        return this->BsmtCond;
    }
    std::string getBsmtExposure(){
        return this->BsmtExposure;
    }
    std::string getBsmtFinType1(){
        return this->BsmtFinType1;
    }
    int getBsmtFinSF1(){
        return this->BsmtFinSF1;
    }
    std::string getBsmtFinType2(){
        return this->BsmtFinType2;
    }
    int getBsmtFinSF2(){
        return this->BsmtFinSF2;
    }
    int getBsmtUnfSF(){
        return this->BsmtUnfSF;
    }
    int getTotalBsmtSF(){
        return this->TotalBsmtSF;
    }
    std::string getHeating(){
        return this->Heating;
    }
    std::string getHeatingQC(){
        return this->HeatingQC;
    }
    std::string getCentralAir(){
        return this->CentralAir;
    }
    std::string getElectrical(){
        return this->Electrical;
    }
    int getFirstFlrSF(){
        return this->FirstFlrSF;
    }
    int getSecondFlrSF(){
        return this->SecondFlrSF;
    }
    int getLowQualFinSF(){
        return this->LowQualFinSF;
    }
    int getGrLivArea(){
        return this->GrLivArea;
    }
    int getBsmtFullBath(){
        return this->BsmtFullBath;
    }
    int getBsmtHalfBath(){
        return this->BsmtHalfBath;
    }
    int getFullBath(){
        return this->FullBath;
    }
    int getHalfBath(){
        return this->HalfBath;
    }
    int getBedroomAbvGr(){
        return this->BedroomAbvGr;
    }
    int getKitchenAbvGr(){
        return this->KitchenAbvGr;
    }
    std::string getKitchenQual(){
        return this->KitchenQual;
    }
    int getTotRmsAbvGrd(){
        return this->TotRmsAbvGrd;
    }
    std::string getFunctional(){
        return this->Functional;
    }
    int getFireplaces(){
        return this->Fireplaces;
    }
    std::string getFireplaceQu(){
        return this->FireplaceQu;
    }
    std::string getGarageType(){
        return this->GarageType;
    }
    int getGarageYrBlt(){
        return this->GarageYrBlt;
    }
    std::string getGarageFinish(){
        return this->GarageFinish;
    }
    int getGarageCars(){
        return this->GarageCars;
    }
    int getGarageArea(){
        return this->GarageArea;
    }
    std::string getGarageQual(){
        return this->GarageQual;
    }
    std::string getGarageCon(){
        return this->GarageCon;
    }
    std::string getPavedDrive(){
        return this->PavedDrive;
    }
    int getWoodDeckSF(){
        return this->WoodDeckSF;
    }
    int getOpenPorchSF(){
        return this->OpenPorchSF;
    }
    int getEnclosedPorch(){
        return this->EnclosedPorch;
    }
    int getThreeSsnPorch(){
        return this->ThreeSsnPorch;
    }
    int getScreenPorch(){
        return this->GarageArea;
    }
    int getPoolArea(){
        return this->PoolArea;
    }
    std::string getPoolQC(){
        return this->PoolQC;
    }
    std::string getFence(){
        return this->Fence;
    }
    std::string getMiscFeature(){
        return this->MiscFeature;
    }
    int getMiscVal(){
        return this->MiscVal;
    }
    int getMoSold(){
        return this->MoSold;
    }
    int getYrsold(){
        return this->YrSold;
    }
    std::string getSaleType(){
        return this->SaleType;
    }
    std::string getSaleCondition(){
        return this->SaleCondition;
    }
    int getSalePrice(){
        return this->SalePrice;
    }
};
