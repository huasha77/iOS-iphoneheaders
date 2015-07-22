/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface WDDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)dateRangeWithTimePeriod:(int)arg1 anchorDate:(id)arg2 ;
-(id)initWithTimePeriod:(int)arg1 anchorDate:(id)arg2 ;
-(id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(int)arg2 ;
-(id)_getEndDateFromStartDate:(id)arg1 timePeriod:(int)arg2 ;
-(char)dateInRange:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
