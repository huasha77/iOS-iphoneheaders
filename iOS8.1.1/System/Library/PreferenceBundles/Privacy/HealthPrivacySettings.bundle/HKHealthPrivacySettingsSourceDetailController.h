/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/Privacy/HealthPrivacySettings.bundle/HealthPrivacySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class HKHealthStore, HKSourceAuthorizationController, HKDataCategoryController;

@interface HKHealthPrivacySettingsSourceDetailController : PSListController {

	HKHealthStore* _healthStore;
	HKSourceAuthorizationController* _sourceAuthorizationController;
	HKDataCategoryController* _dataCategoryController;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSourceAuthorizationController * sourceAuthorizationController;              //@synthesize sourceAuthorizationController=_sourceAuthorizationController - In the implementation block
@property (nonatomic,retain) HKDataCategoryController * dataCategoryController;                            //@synthesize dataCategoryController=_dataCategoryController - In the implementation block
-(void)_addSpecifiersInSection:(long long)arg1 toArray:(id)arg2 ;
-(void)_setTypeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_isTypeEnabledWithSpecifier:(id)arg1 ;
-(id)_titleForGroupInSection:(long long)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(HKDataCategoryController *)dataCategoryController;
-(void)setDataCategoryController:(HKDataCategoryController *)arg1 ;
-(HKSourceAuthorizationController *)sourceAuthorizationController;
-(void)setSourceAuthorizationController:(HKSourceAuthorizationController *)arg1 ;
-(id)specifiers;
@end
