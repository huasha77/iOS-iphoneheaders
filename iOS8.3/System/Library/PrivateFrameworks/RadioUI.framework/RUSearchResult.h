/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSMetricsConfiguration, SSMetricsPageEvent, NSArray, NSString;

@interface RUSearchResult : NSObject {

	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;
	NSArray* _resultCategories;
	NSString* _searchTerm;

}

@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;                      //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,copy) NSArray * resultCategories;                                   //@synthesize resultCategories=_resultCategories - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                                        //@synthesize searchTerm=_searchTerm - In the implementation block
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setResultCategories:(NSArray *)arg1 ;
-(NSArray *)resultCategories;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)setMetricsConfiguration:(SSMetricsConfiguration *)arg1 ;
-(SSMetricsConfiguration *)metricsConfiguration;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
@end
