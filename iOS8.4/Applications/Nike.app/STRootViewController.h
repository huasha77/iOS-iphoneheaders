/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/Nike-Structs.h>
#import <UIKit/UIViewController.h>

@interface STRootViewController : UIViewController {

	struct {
		unsigned removedWhenWorkoutBegins : 1;
		unsigned unused : 31;
	}  _flagsBitfield;

}

@property (assign,nonatomic) char removedWhenWorkoutBegins; 
-(void)setRemovedWhenWorkoutBegins:(char)arg1 ;
-(char)removedWhenWorkoutBegins;
-(id)runController;
-(char)showModalWeightWindowWithDelegate:(id)arg1 ;
-(void)showModalLinkingWindowWithDelegate:(id)arg1 ;
-(void)_rootWorkoutDidStart;
-(void)dealloc;
-(id)init;
-(void)viewDidLoad;
-(char)_canReloadView;
@end
