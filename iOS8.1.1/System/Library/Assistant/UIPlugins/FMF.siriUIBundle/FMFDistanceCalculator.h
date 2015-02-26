/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLocale;

@interface FMFDistanceCalculator : NSObject {

	NSLocale* locale;

}

@property (nonatomic,readonly) int measurementSystem; 
@property (nonatomic,retain) NSLocale * locale; 
+(id)sharedInstance;
+(id)bundle;
-(id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(int)measurementSystem;
-(id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2 ;
-(double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 ;
@end
