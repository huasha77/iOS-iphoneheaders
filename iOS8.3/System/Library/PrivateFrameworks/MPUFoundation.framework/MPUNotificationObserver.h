/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:20:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPUNotificationObserver : NSObject {

	id _notificationObservationToken;

}

@property (nonatomic,retain) id notificationObservationToken;              //@synthesize notificationObservationToken=_notificationObservationToken - In the implementation block
+(id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)notificationObservationToken;
-(void)setNotificationObservationToken:(id)arg1 ;
@end
