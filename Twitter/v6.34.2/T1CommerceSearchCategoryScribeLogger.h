/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, NSString;

@interface T1CommerceSearchCategoryScribeLogger : NSObject <TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
-(void)scribeCategoryImpressionSearchCategoryItem:(id)arg1 ;
-(void)scribeCategoryClickForSearchCategoryItem:(id)arg1 ;
-(void)_scribeCategoryImpressionForCommerceCollectionTimeline:(id)arg1 displayText:(id)arg2 ;
-(void)_scribeCategoryImpressionForCustomTimeline:(id)arg1 displayText:(id)arg2 ;
-(void)_scribeCommerceCollectionClickForCustomTimeline:(id)arg1 displayText:(id)arg2 ;
-(void)_scribeCustomTimelineClickForCustomTimeline:(id)arg1 displayText:(id)arg2 ;
-(id)_createScribeItemForDisplayText:(id)arg1 customTimelineID:(id)arg2 type:(char)arg3 ;
-(void)_logScribeEventAction:(id)arg1 element:(id)arg2 scribeItemParams:(id)arg3 ;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

