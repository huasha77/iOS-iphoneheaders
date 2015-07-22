/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>

@interface PSUsageBundleDetailController : PSEditableListController
+(void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2 ;
+(id)mediaGroups;
-(void)dealloc;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(BOOL)arg2 ;
-(id)sizeForSpecifier:(id)arg1 ;
-(id)size:(id)arg1 ;
@end
