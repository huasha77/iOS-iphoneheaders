/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:41:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableDictionary, PSTableCell;

@interface CKSettingsController : PSListController {

	NSMutableDictionary* _enabledByAppID;
	PSTableCell* _serviceSectionCell;

}

@property (nonatomic,retain) NSMutableDictionary * enabledByAppID;              //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (nonatomic,retain) PSTableCell * serviceSectionCell;                  //@synthesize serviceSectionCell=_serviceSectionCell - In the implementation block
+(id)cloudKitNumAppGroups;
-(NSMutableDictionary *)enabledByAppID;
-(void)setEnabledByAppID:(NSMutableDictionary *)arg1 ;
-(PSTableCell *)serviceSectionCell;
-(void)setServiceSectionCell:(PSTableCell *)arg1 ;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(char)_isApplicationHiddenFromSettings:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)specifiers;
@end
