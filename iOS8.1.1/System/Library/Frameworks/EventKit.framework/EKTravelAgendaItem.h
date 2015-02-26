/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, CLLocation, NSDate;

@interface EKTravelAgendaItem : NSObject {

	/*^block*/id _adviceBlock;
	double _initialDistanceFromDestination;
	BOOL _haveAdvised;
	NSMutableArray* _trace;
	int _travelMethod;
	CLLocation* _location;
	NSDate* _date;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int travelMethod;                   //@synthesize travelMethod=_travelMethod - In the implementation block
+(BOOL)_clLocation:(id)arg1 isEqualToCLLocation:(id)arg2 ;
-(id)initWithLocation:(id)arg1 date:(id)arg2 travelMethod:(int)arg3 adviceBlock:(/*^block*/id)arg4 ;
-(int)travelMethod;
-(id)initWithLocation:(id)arg1 date:(id)arg2 adviceBlock:(/*^block*/id)arg3 ;
-(void)advise:(id)arg1 ;
-(BOOL)isCloseToPersonAtLocation:(id)arg1 ;
-(BOOL)haveAdvised;
-(BOOL)isEqualToTravelAgendaItem:(id)arg1 ;
-(BOOL)writeTraceToDisk;
-(void)tracePrediction:(id)arg1 date:(id)arg2 delay:(double)arg3 ;
-(void)traceLocation:(id)arg1 date:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(CLLocation *)location;
@end
