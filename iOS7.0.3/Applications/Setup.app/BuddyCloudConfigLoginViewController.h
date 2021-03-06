/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BuddyCloudConfigController, NSError, BuddyCloudConfigurationLoginHeaderView, UITableViewCell, UIBarButtonItem;

@interface BuddyCloudConfigLoginViewController : BuddyTableViewController <UITextFieldDelegate> {

	BuddyCloudConfigController* _configController;
	NSError* _lastError;
	BuddyCloudConfigurationLoginHeaderView* _headerLabel;
	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	UIBarButtonItem* _nextButton;

}

@property (assign,nonatomic) BuddyCloudConfigController * configController;                     //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                               //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigurationLoginHeaderView * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITableViewCell * usernameCell;                                    //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * passwordCell;                                    //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                      //@synthesize nextButton=_nextButton - In the implementation block
-(void)setHeaderLabel:(id)arg1 ;
-(id)usernameCell;
-(id)passwordCell;
-(void)setConfigController:(id)arg1 ;
-(id)configController;
-(void)_setupForCloudConfigurationState;
-(void)retryLogin;
-(void)setUsernameCell:(id)arg1 ;
-(void)setPasswordCell:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setNextButton:(id)arg1 ;
-(id)nextButton;
-(id)headerLabel;
-(void)setLastError:(id)arg1 ;
-(id)lastError;
-(void)_textChanged:(id)arg1 ;
@end

