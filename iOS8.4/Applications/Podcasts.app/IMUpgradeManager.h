/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMUpgradeManagerDelegateNSObject;
@class NSOperationQueue, UIApplication, NSDictionary, NSMutableArray;

@interface IMUpgradeManager : NSObject {

	NSOperationQueue* _queue;
	UIApplication* _application;
	NSDictionary* _launchOptions;
	NSMutableArray* _urls;
	char _isObservingCount;
	id<IMUpgradeManagerDelegate><NSObject> _appDelegate;

}
-(void)stopObservingOperationCount;
-(void)startObservingOperationCount;
-(void)_finishOnMainThread;
-(id)initWithApplicationDelegate:(id)arg1 application:(id)arg2 launchOptions:(id)arg3 ;
-(void)startUpgradeTasks;
-(void)cancelUpgradeTasks;
-(void)addPostUpgradeOpenUrl:(id)arg1 ;
-(void)dealloc;
-(char)addTask:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
