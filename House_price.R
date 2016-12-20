setwd("~/Desktop/Academics/ComputerScience/CS368/Project")
dt = read.csv("train.csv", header = TRUE)
install.packages("rcpp")
library(Rcpp)
y = dt$SalePrice
num = data.frame(dt$MSSubClass, dt$LotFrontage, dt$LotArea, dt$OverallQual,
                    dt$OverallCond, dt$YearBuilt, dt$YearRemodAdd, dt$MasVnrArea, dt$BsmtFinSF1,
                    dt$BsmtFinSF2, dt$BsmtUnfSF, dt$TotalBsmtSF, dt$X1stFlrSF, dt$X2ndFlrSF,
                    dt$LowQualFinSF, dt$GrLivArea, dt$BsmtFullBath, dt$BsmtHalfBath, dt$FullBath,
                    dt$HalfBath, dt$BedroomAbvGr, dt$KitchenAbvGr, dt$TotRmsAbvGrd, dt$Fireplaces,
                    dt$GarageYrBlt, dt$GarageCars, dt$GarageArea, dt$WoodDeckSF, dt$OpenPorchSF,
                    dt$EnclosedPorch, dt$X3SsnPorch, dt$ScreenPorch, dt$PoolArea, dt$MiscVal,
                    dt$MoSold, dt$YrSold)
# Delete all the vectors with NA correlations with others.
num.1 = data.frame(dt$MSSubClass, dt$LotArea, dt$OverallQual,
                   dt$OverallCond, dt$YearBuilt, dt$YearRemodAdd, dt$BsmtFinSF1,
                   dt$BsmtFinSF2, dt$BsmtUnfSF, dt$TotalBsmtSF, dt$X1stFlrSF, dt$X2ndFlrSF,
                   dt$LowQualFinSF, dt$GrLivArea, dt$BsmtFullBath, dt$BsmtHalfBath, dt$FullBath,
                   dt$HalfBath, dt$BedroomAbvGr, dt$KitchenAbvGr, dt$TotRmsAbvGrd, dt$Fireplaces,
                   dt$GarageCars, dt$GarageArea, dt$WoodDeckSF, dt$OpenPorchSF,
                   dt$EnclosedPorch, dt$X3SsnPorch, dt$ScreenPorch, dt$PoolArea, dt$MiscVal,
                   dt$MoSold, dt$YrSold)
library('caret')
num.2 = cor(num.1)
hc = findCorrelation(x=num.2, cutoff = 0.6, verbose = FALSE, names = TRUE, exact = FALSE)
hc = sort(hc)
hc
m1 = lm(y ~ MSSubClass + LotFrontage + LotArea +
        OverallCond + YearBuilt + YearRemodAdd + MasVnrArea +
        BsmtFinSF2 + BsmtUnfSF + TotalBsmtSF +
        LowQualFinSF + BsmtFullBath + BsmtHalfBath + FullBath +
        HalfBath + BedroomAbvGr + KitchenAbvGr + Fireplaces +
        GarageYrBlt + GarageArea + WoodDeckSF + OpenPorchSF +
        EnclosedPorch + X3SsnPorch + ScreenPorch + PoolArea + MiscVal +
        MoSold + YrSold, data = dt)
summary(m1)
m2 = lm(y ~ MSSubClass + LotArea +
          OverallCond + YearRemodAdd + MasVnrArea +
          BsmtFinSF2 + BsmtUnfSF + TotalBsmtSF +
          LowQualFinSF + BsmtFullBath + FullBath +
          HalfBath + KitchenAbvGr + Fireplaces +
          GarageArea + WoodDeckSF +
          EnclosedPorch + ScreenPorch, data = dt)
summary(m2)
m3 = lm(y ~ MSSubClass + LotArea +
          OverallCond + YearRemodAdd + MasVnrArea +
          BsmtFinSF2 + TotalBsmtSF +
          LowQualFinSF + BsmtFullBath + FullBath +
          HalfBath + KitchenAbvGr + Fireplaces +
          GarageArea + WoodDeckSF +
          EnclosedPorch + ScreenPorch, data = dt)
summary(m3)
str(influence(m3))
# step(m3)
#plot(dt$MSZoning, y)
#plot(dt$Street, y)
#m4 = lm(y ~ dt$MSZoning + dt$Street + dt$Alley + dt$LotShape + dt$LandContour +
 #                  dt$Utilities + dt$LotConfig + dt$LandSlope + dt$Neighborhood + dt$Condition1 +
  #                 dt$Condition2 + dt$BldgType + dt$HouseStyle + dt$RoofStyle + dt$RoofMatl +
   #                dt$Exterior1st + dt$Exterior2nd + dt$MasVnrType + dt$ExterQual + dt$ExterCond +
    #               dt$Foundation + dt$BsmtQual + dt$BsmtCond + dt$BsmtExposure + dt$BsmtFinType1 +
     #              dt$KitchenQual + dt$Functional + dt$FireplaceQu + dt$GarageType + dt$GarageFinish +
      #             dt$GarageQual + dt$GarageCon + dt$PavedDrive + dt$PoolQC + dt$Fence +
       #            dt$MiscFeature + dt$SaleType + dt$SaleCondition)
dtf = data.frame(dt$MSZoning , dt$Street , dt$Alley , dt$LotShape , dt$LandContour ,
                   dt$Utilities , dt$LotConfig , dt$LandSlope , dt$Neighborhood , dt$Condition1 ,
                   dt$Condition2 , dt$BldgType , dt$HouseStyle , dt$RoofStyle , dt$RoofMatl ,
                   dt$Exterior1st , dt$Exterior2nd , dt$MasVnrType , dt$ExterQual , dt$ExterCond ,
                   dt$Foundation , dt$BsmtQual , dt$BsmtCond , dt$BsmtExposure , dt$BsmtFinType1 ,
                   dt$BsmtFinType2 , dt$Heating , dt$HeatingQC , dt$CentralAir , dt$Electrical ,
                   dt$KitchenQual , dt$Functional , dt$FireplaceQu , dt$GarageType , dt$GarageFinish ,
                   dt$GarageQual , dt$GarageCon , dt$PavedDrive , dt$PoolQC , dt$Fence ,
                   dt$MiscFeature , dt$SaleType , dt$SaleCondition)
y.new = y
pvalueList = c()
for (i in c(1:ncol(dtf))) {
  m = lm(y ~ dtf[,i])
  pvalueList[i] = pf(summary(m)$fstatistic[1], summary(m)$fstatistic[2], summary(m)$fstatistic[3], lower.tail = FALSE)
}
nonsig = which(pvalueList >= 0.05)
dtf = dtf[, -nonsig]

na_ratio = c()
for (i in c(1:ncol(dtf))) {
  na_ratio[i] = sum(is.na(dtf[,i]))/length(dtf[, i])
}
unusable = which(na_ratio >= 0.1)
dtf = dtf[, -unusable]

nact = 0
for (i in c(1:ncol(dtf))) {
  for (j in c(1:nrow(dtf))) {
    if(is.na(dtf[j, i])){
      dtf = dtf[-j, ]
      y.new = y.new[-j]
      nact = nact + 1
    }
  }
}
len = c()
for(i in c(1:ncol(dtf))) {
  len[i] = length(dtf[,i])
}
# dtf <- na.omit(dtf)
m4 = lm(y.new ~ ., data = dtf)
# After I've deleting rows with missing values, there are only 5 obs left in the dataframe, so I'm using the numeric variables as predictors.

testDt = read.csv("test.csv", header = TRUE)
inputVari = data.frame(testDt$MSSubClass, testDt$LotArea,
                       testDt$OverallCond, testDt$YearRemodAdd, testDt$MasVnrArea,
                       testDt$BsmtFinSF2, testDt$TotalBsmtSF,
                       testDt$LowQualFinSF, testDt$BsmtFullBath, testDt$FullBath,
                       testDt$HalfBath, testDt$KitchenAbvGr, testDt$Fireplaces,
                       testDt$GarageArea, testDt$WoodDeckSF,
                       testDt$EnclosedPorch, testDt$ScreenPorch)
inputVari = as.matrix(inputVari)
prediction = rep(0, nrow(testDt))
coeff = as.matrix((summary(m3)$coefficient[,1])[2:18])
prediction = inputVari %*% coeff
output = testDt$Id
output = data.frame(output)
output$prediction = prediction
write.csv(output, file = "prediction.csv")
