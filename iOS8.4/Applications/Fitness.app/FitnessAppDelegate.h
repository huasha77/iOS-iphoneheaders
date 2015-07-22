/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, FitnessTabBarController, FitnessModel, FitnessNavigationController, MonthViewController, HKHealthStore, LoadingView, NSString;

@interface FitnessAppDelegate : UIResponder <UIApplicationTestingDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	FitnessTabBarController* _tabBarController;
	FitnessModel* _fitnessModel;
	FitnessNavigationController* _navController;
	MonthViewController* _monthVC;
	HKHealthStore* _healthStore;
	LoadingView* _loadingView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(id)_tabBarControllerForDayView;
-(void)_checkDataAndLoadSplashViewOrNavigationView;
-(void)_loadNavigationView;
-(char)_isOnSplashScreen;
-(char)testOneDayViewDataGathering;
-(char)testWeekViewDataGathering;
-(char)testMonthViewScrolling;
-(char)testMonthViewHorizontalSwiping;
-(char)testDayViewPaging;
-(void)_blockDidComplete:(id)arg1 ;
-(id)_weekStartForDate:(id)arg1 ;
-(id)_goToMonthView;
-(void)_updateForMonthViewSwipeTest;
-(id)_goToDayView;
-(void)_dayPagingScrollSettled:(id)arg1 ;
-(void)_setModelToPreviousDay;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)_incrementForScrollTest;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
@end
