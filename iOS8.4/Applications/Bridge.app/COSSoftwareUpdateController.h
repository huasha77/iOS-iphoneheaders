/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Bridge/DevicePINControllerDelegate.h>
#import <Bridge/SUBManagerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Bridge/NRDevicePropertyObserver.h>

@protocol OS_dispatch_source;
@class SUBManager, SUBDownload, SUBDescriptor, PSSpecifier, PSSoftwareUpdateTitleCell, NSDateComponentsFormatter, NSObject, NRDevice, NSString;

@interface COSSoftwareUpdateController : PSListController <DevicePINControllerDelegate, SUBManagerDelegate, UITableViewDelegate, NRDevicePropertyObserver> {

	char _isExpectingScanResult;
	char _hasReceivedValidFirstScanResult;
	char _didEnterDevicePasscode;
	char _inSetupFlow;
	char _hasUpdatedSuccessfully;
	SUBManager* _subManager;
	SUBDownload* _download;
	SUBDescriptor* _update;
	PSSpecifier* _titleGroup;
	PSSoftwareUpdateTitleCell* _titleCell;
	PSSpecifier* _installButtonGroup;
	PSSpecifier* _installButtonSpecifier;
	SEL _termsAcceptanceAction;
	NSDateComponentsFormatter* _durationFormatter;
	int _subState;
	NSObject*<OS_dispatch_source> _hidingProgressBarSource;
	/*^block*/id _devicePasscodeCompletion;
	NRDevice* _pairedDevice;

}

@property (nonatomic,retain) SUBManager * subManager;                                            //@synthesize subManager=_subManager - In the implementation block
@property (nonatomic,retain) SUBDownload * download;                                             //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) SUBDescriptor * update;                                             //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) PSSpecifier * titleGroup;                                           //@synthesize titleGroup=_titleGroup - In the implementation block
@property (nonatomic,retain) PSSoftwareUpdateTitleCell * titleCell;                              //@synthesize titleCell=_titleCell - In the implementation block
@property (nonatomic,retain) PSSpecifier * installButtonGroup;                                   //@synthesize installButtonGroup=_installButtonGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * installButtonSpecifier;                               //@synthesize installButtonSpecifier=_installButtonSpecifier - In the implementation block
@property (assign,nonatomic) SEL termsAcceptanceAction;                                          //@synthesize termsAcceptanceAction=_termsAcceptanceAction - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * durationFormatter;                      //@synthesize durationFormatter=_durationFormatter - In the implementation block
@property (assign,nonatomic) int subState;                                                       //@synthesize subState=_subState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> hidingProgressBarSource;              //@synthesize hidingProgressBarSource=_hidingProgressBarSource - In the implementation block
@property (assign,nonatomic) char isExpectingScanResult;                                         //@synthesize isExpectingScanResult=_isExpectingScanResult - In the implementation block
@property (assign,nonatomic) char hasReceivedValidFirstScanResult;                               //@synthesize hasReceivedValidFirstScanResult=_hasReceivedValidFirstScanResult - In the implementation block
@property (assign,nonatomic) char didEnterDevicePasscode;                                        //@synthesize didEnterDevicePasscode=_didEnterDevicePasscode - In the implementation block
@property (nonatomic,copy) id devicePasscodeCompletion;                                          //@synthesize devicePasscodeCompletion=_devicePasscodeCompletion - In the implementation block
@property (assign,getter=isInSetupFlow,nonatomic) char inSetupFlow;                              //@synthesize inSetupFlow=_inSetupFlow - In the implementation block
@property (nonatomic,retain) NRDevice * pairedDevice;                                            //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (assign,nonatomic) char hasUpdatedSuccessfully;                                        //@synthesize hasUpdatedSuccessfully=_hasUpdatedSuccessfully - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishedActivating;
-(char)isInSetupFlow;
-(void)presentWithController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)enteredCompatibilityState:(id)arg1 ;
-(void)startActivatingIfNeeded;
-(void)startCallingIntoSUB;
-(void)queryManagerState;
-(void)scanForUpdatesInBackgound:(char)arg1 ;
-(void)handleManagerState:(int)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)handleManagerStateError:(id)arg1 ;
-(char)shouldShowTableViewForState:(int)arg1 ;
-(void)cancelHidingProgressBarAfterDelay;
-(PSSoftwareUpdateTitleCell *)titleCell;
-(void)hideProgressBarAfterDelay;
-(void)downloadAndInstall:(id)arg1 ;
-(void)install:(id)arg1 ;
-(void)resetInstallButtonEnabledStateAndReloadSpecifier:(char)arg1 ;
-(id)specifiersForState:(int)arg1 ;
-(void)updateTableViewWithTask:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)hidingProgressBarSource;
-(void)setHidingProgressBarSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)displayInstallButtonSpinner:(char)arg1 reloadSpecifier:(char)arg2 ;
-(void)downloadTermsAccepted;
-(void)presentTermsIfNecessaryWithAcceptanceAction:(SEL)arg1 ;
-(void)_termsDisagree;
-(void)_termsAgree;
-(void)presentPasscodePromptIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)presentPasscodePromptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentAlertForDuetDenialCondition:(unsigned long long)arg1 ;
-(void)_reallyInstall;
-(void)cancelUpdateInSetupPressed;
-(void)_manager:(id)arg1 scanRequestDidLocateUpdate:(id)arg2 error:(id)arg3 ;
-(void)handleScanError:(id)arg1 ;
-(void)_manager:(id)arg1 didChangeProgressOnDownload:(id)arg2 ;
-(void)_manager:(id)arg1 didFailDownload:(id)arg2 withError:(id)arg3 ;
-(void)handleDownloadError:(id)arg1 ;
-(void)_manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(char)arg3 waitingForAdmissionControl:(char)arg4 ;
-(void)_manager:(id)arg1 willProceedWithInstallation:(id)arg2 ;
-(void)_manager:(id)arg1 installationOfUpdate:(id)arg2 canProceed:(char)arg3 ;
-(void)_manager:(id)arg1 didFailInstallation:(id)arg2 withError:(id)arg3 ;
-(void)handleInstallationError:(id)arg1 ;
-(void)_manager:(id)arg1 didFinishInstallation:(id)arg2 ;
-(void)detailedReleaseNotesDonePressed:(id)arg1 ;
-(SUBManager *)subManager;
-(void)setSubManager:(SUBManager *)arg1 ;
-(void)setDownload:(SUBDownload *)arg1 ;
-(PSSpecifier *)titleGroup;
-(void)setTitleGroup:(PSSpecifier *)arg1 ;
-(void)setTitleCell:(PSSoftwareUpdateTitleCell *)arg1 ;
-(PSSpecifier *)installButtonGroup;
-(void)setInstallButtonGroup:(PSSpecifier *)arg1 ;
-(PSSpecifier *)installButtonSpecifier;
-(void)setInstallButtonSpecifier:(PSSpecifier *)arg1 ;
-(SEL)termsAcceptanceAction;
-(void)setTermsAcceptanceAction:(SEL)arg1 ;
-(NSDateComponentsFormatter *)durationFormatter;
-(void)setDurationFormatter:(NSDateComponentsFormatter *)arg1 ;
-(int)subState;
-(void)setSubState:(int)arg1 ;
-(char)isExpectingScanResult;
-(void)setIsExpectingScanResult:(char)arg1 ;
-(char)hasReceivedValidFirstScanResult;
-(void)setHasReceivedValidFirstScanResult:(char)arg1 ;
-(char)didEnterDevicePasscode;
-(void)setDidEnterDevicePasscode:(char)arg1 ;
-(id)devicePasscodeCompletion;
-(void)setDevicePasscodeCompletion:(id)arg1 ;
-(void)setInSetupFlow:(char)arg1 ;
-(char)hasUpdatedSuccessfully;
-(void)setHasUpdatedSuccessfully:(char)arg1 ;
-(SUBDownload *)download;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(SUBDescriptor *)update;
-(void)willEnterForeground;
-(NRDevice *)pairedDevice;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(void)setUpdate:(SUBDescriptor *)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(void)transitionToState:(int)arg1 ;
-(id)specifiers;
-(Class)tableViewClass;
-(id)controllerForSpecifier:(id)arg1 ;
-(char)shouldReloadSpecifiersOnResume;
-(void)devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)manager:(id)arg1 scanRequestDidLocateUpdate:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didFailDownload:(id)arg2 withError:(id)arg3 ;
-(void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(char)arg3 waitingForAdmissionControl:(char)arg4 ;
-(void)manager:(id)arg1 didChangeProgressOnDownload:(id)arg2 ;
-(void)manager:(id)arg1 didFailInstallation:(id)arg2 withError:(id)arg3 ;
-(void)manager:(id)arg1 didFinishInstallation:(id)arg2 ;
-(void)manager:(id)arg1 installationOfUpdate:(id)arg2 canProceed:(char)arg3 ;
-(void)manager:(id)arg1 willProceedWithInstallation:(id)arg2 ;
@end
