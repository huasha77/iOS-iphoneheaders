/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/KeychainSyncTextEntryController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIButton, UIAlertView, NSString, PSKeychainSyncManager;

@interface KeychainSyncSMSVerificationController : KeychainSyncTextEntryController <UIAlertViewDelegate> {

	UIButton* _footerButton;
	UIAlertView* _supportVerificationAlert;
	NSString* _phoneNumber;
	NSString* _dialingPrefix;
	NSString* _countryCode;
	unsigned _verificationCodeLength;
	PSKeychainSyncManager* _keychainSyncManager;

}

@property (nonatomic,retain) NSString * phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                                 //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                   //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) unsigned verificationCodeLength;                          //@synthesize verificationCodeLength=_verificationCodeLength - In the implementation block
@property (assign,nonatomic) PSKeychainSyncManager * keychainSyncManager;              //@synthesize keychainSyncManager=_keychainSyncManager - In the implementation block
-(void)setPhoneNumber:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)phoneNumber;
-(void)setCountryCode:(id)arg1 ;
-(id)countryCode;
-(void)setDialingPrefix:(id)arg1 ;
-(id)dialingPrefix;
-(id)specifiers;
-(void)setKeychainSyncManager:(id)arg1 ;
-(void)setVerificationCodeLength:(unsigned)arg1 ;
-(unsigned)verificationCodeLength;
-(void)showSupportVerification;
-(id)keychainSyncManager;
-(unsigned)numberOfPasscodeFields;
@end

