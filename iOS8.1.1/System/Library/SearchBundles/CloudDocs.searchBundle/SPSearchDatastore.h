/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SearchBundles/CloudDocs.searchBundle/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPSearchDatastore <NSObject>
@optional
-(void)preheat;
-(void)shutDown;
-(void)sendFeedback:(id)arg1;
-(BOOL)coolDown;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2;
-(BOOL)wantsEveryResultInItsOwnSection;
-(BOOL)wantsExtendedTimeForDomain:(unsigned)arg1;
-(id)categoryForDomain:(unsigned)arg1;
-(id)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3;
-(id)imageDataForIdentifier:(id)arg1 domain:(unsigned)arg2 size:(CGSize)arg3;

@required
-(id)searchDomains;
-(id)displayIdentifierForDomain:(unsigned)arg1;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2;

@end

