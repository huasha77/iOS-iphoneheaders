/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SVSSiriViewControllerHosting <NSObject>
@required
-(void)setStatusBarHidden:(char)arg1;
-(void)setStatusViewHidden:(char)arg1;
-(void)setCarDisplaySnippetVisible:(char)arg1;
-(void)setStatusViewUserInteractionEnabled:(char)arg1;
-(void)setBugReportingAvailable:(char)arg1;
-(void)setHelpButtonEmphasized:(char)arg1;
-(void)pulseHelpButton;
-(void)serviceRequestsDismissal;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1;
-(void)serviceStartRequestWithOptions:(id)arg1;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(char)arg1;
-(void)setStatusViewDisabled:(char)arg1;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(int)arg1;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(int)arg1;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(char)arg2 replyHandler:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(char)arg3;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;

@end
