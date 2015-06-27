/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPrediction : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonDoubleMap;              //@synthesize bonDoubleMap=_bonDoubleMap - In the implementation block
+(id)bonPredict;
+(id)bonPredictWithArray:(id)arg1 ;
-(float)lookupForPredicted:(float)arg1 andBatteryLevel:(float)arg2 ;
-(id)initWithJsonResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonDoubleMap;
-(void)setBonDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end
