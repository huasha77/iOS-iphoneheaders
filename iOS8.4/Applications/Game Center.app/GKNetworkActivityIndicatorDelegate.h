/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/GKDaemonProxyNetworkActivityIndicatorDelegate.h>

@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate> {

	int _networkIndicatorCount;

}

@property (assign,nonatomic) int networkIndicatorCount;              //@synthesize networkIndicatorCount=_networkIndicatorCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)networkIndicatorCount;
-(void)setNetworkIndicatorCount:(int)arg1 ;
-(void)beginNetworkActivity;
-(void)endNetworkActivity;
-(void)resetNetworkActivity;
@end
