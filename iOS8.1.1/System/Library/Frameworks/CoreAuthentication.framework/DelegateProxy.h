/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreAuthentication.framework/CoreAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAuthentication/LAUIDelegate.h>

@protocol VRUIDelegate;
@interface DelegateProxy : NSObject <LAUIDelegate> {

	id<VRUIDelegate> _vruiDelegate;

}
-(id)initWithVRUIDelegate:(id)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
@end
