/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFVariableLayoutConstraint : NSObject {

	char _cachedInterpolatedValueIsValid;
	float _cachedInterpolatedValue;
	float _medianValue;
	/*^block*/id _interpolationFormula;

}

@property (assign,nonatomic) float medianValue;                    //@synthesize medianValue=_medianValue - In the implementation block
@property (assign,nonatomic) id interpolationFormula;              //@synthesize interpolationFormula=_interpolationFormula - In the implementation block
+(id)medianContentSizeCategory;
+(int)_medianContentSizeIndex;
-(void)setMedianValue:(float)arg1 ;
-(void)setInterpolationFormula:(id)arg1 ;
-(void)_didReceiveContentSizeCategoryNameDidChageNotification:(id)arg1 ;
-(float)medianValue;
-(id)interpolationFormula;
-(id)initWithMedianConstraintValue:(float)arg1 interpolationFormula:(/*^block*/id)arg2 ;
-(float)interpolatedValue;
-(void)dealloc;
@end
