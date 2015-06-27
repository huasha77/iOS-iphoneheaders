/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CaliTIPHandler : NSObject
+(void)initialize;
+(void)processMessage:(id)arg1 inCalendar:(id)arg2 ;
+(char)logiTIPDetail;
+(void)setLogiTIPDetail:(char)arg1 ;
+(void)processMessages:(id)arg1 inCalendar:(id)arg2 ;
+(char)diffsAreImportant:(id)arg1 ;
+(id)debugStringForEvent:(id)arg1 ;
+(char)isAddressMe:(id)arg1 forAccount:(id)arg2 ;
+(char)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2 ;
+(id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2 ;
+(id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3 ;
+(char)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3 ;
+(id)myAddressInAccount:(id)arg1 forEvent:(id)arg2 ;
@end
