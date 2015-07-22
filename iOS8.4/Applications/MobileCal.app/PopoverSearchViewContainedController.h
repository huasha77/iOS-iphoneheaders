/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/ListViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <MobileCal/ListTableViewDelegate.h>

@protocol SearchViewPopoverContentDelegate;
@class NSString;

@interface PopoverSearchViewContainedController : ListViewController <UISearchBarDelegate, ListTableViewDelegate> {

	id<SearchViewPopoverContentDelegate> _popoverContentDelegate;

}

@property (retain) id<SearchViewPopoverContentDelegate> popoverContentDelegate;              //@synthesize popoverContentDelegate=_popoverContentDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)noContentStringForListTableView:(id)arg1 ;
-(id<SearchViewPopoverContentDelegate>)popoverContentDelegate;
-(void)setPopoverContentDelegate:(id<SearchViewPopoverContentDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
@end
