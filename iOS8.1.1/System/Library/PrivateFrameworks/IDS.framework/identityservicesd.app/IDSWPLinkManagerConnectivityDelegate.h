/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IDSWPLinkManagerConnectivityDelegate <NSObject>
@required
-(void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(BOOL)arg3;
-(void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2;
-(BOOL)manager:(id)arg1 cbuuidDidDiscover:(id)arg2;

@end
