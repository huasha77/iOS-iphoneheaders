/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject {

	NSArray* _interestedTransitoryKeys;
	/*^block*/id _transitoryDataHandler;
	HKHealthService* _service;
	NSLock* _propertyLock;
	unsigned _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _characteristicsHandler;

}

@property (nonatomic,readonly) HKHealthService * service;              //@synthesize service=_service - In the implementation block
@property (retain) NSArray * interestedTransitoryKeys; 
@property (copy) id transitoryDataHandler; 
@property (nonatomic,retain) NSLock * propertyLock;                    //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,nonatomic) unsigned sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id sessionHandler;                          //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,copy) id characteristicsHandler;                  //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
-(id)sessionHandler;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(void)setSessionHandler:(id)arg1 ;
-(id)transitoryDataHandler;
-(NSArray *)interestedTransitoryKeys;
-(id)characteristicsHandler;
-(void)setInterestedTransitoryKeys:(NSArray *)arg1 ;
-(void)setTransitoryDataHandler:(id)arg1 ;
-(NSLock *)propertyLock;
-(void)setPropertyLock:(NSLock *)arg1 ;
-(void)setCharacteristicsHandler:(id)arg1 ;
-(unsigned)sessionIdentifier;
-(HKHealthService *)service;
-(id)initWithService:(id)arg1 ;
@end
