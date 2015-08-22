/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimelinePlistSerialization.h>
#import <Twitter/TFNTwitterScribableItem.h>
#import <Twitter/TFNTwitterPromotableTrend.h>

@class NSString, NSArray, NSDictionary;

@interface TFNTwitterTrendPlus : NSObject <TFNTwitterTimelinePlistSerialization, TFNTwitterScribableItem, TFNTwitterPromotableTrend> {

	BOOL _isPromoted;
	NSString* _title;
	NSString* _trendDescription;
	unsigned long long _index;
	NSString* _rank;
	NSArray* _mediaStatuses;
	NSString* _metaDescription;
	NSString* _targetQuery;
	NSArray* _targetPinnedTweetIDs;
	unsigned long long _magnitude;
	NSString* _contextMode;
	NSString* _promotedID;
	NSString* _advertiserName;
	NSString* _disclosureType;
	NSArray* _mediaStatusIDs;

}

@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * trendDescription;                    //@synthesize trendDescription=_trendDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                       //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSString * rank;                                //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSArray * mediaStatuses;                        //@synthesize mediaStatuses=_mediaStatuses - In the implementation block
@property (nonatomic,readonly) NSString * metaDescription;                     //@synthesize metaDescription=_metaDescription - In the implementation block
@property (nonatomic,readonly) NSString * targetQuery;                         //@synthesize targetQuery=_targetQuery - In the implementation block
@property (nonatomic,readonly) NSArray * targetPinnedTweetIDs;                 //@synthesize targetPinnedTweetIDs=_targetPinnedTweetIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long magnitude;                   //@synthesize magnitude=_magnitude - In the implementation block
@property (nonatomic,readonly) NSString * contextMode;                         //@synthesize contextMode=_contextMode - In the implementation block
@property (nonatomic,readonly) NSString * promotedID;                          //@synthesize promotedID=_promotedID - In the implementation block
@property (nonatomic,readonly) NSString * advertiserName;                      //@synthesize advertiserName=_advertiserName - In the implementation block
@property (nonatomic,readonly) NSString * disclosureType;                      //@synthesize disclosureType=_disclosureType - In the implementation block
@property (nonatomic,readonly) BOOL isPromoted;                                //@synthesize isPromoted=_isPromoted - In the implementation block
@property (nonatomic,retain) NSArray * mediaStatusIDs;                         //@synthesize mediaStatusIDs=_mediaStatusIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * scribeItemImpressionID; 
@property (nonatomic,readonly) NSDictionary * scribeItem; 
+(id)trendPlusesWithJSONData:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)_magnitudeWithDirection:(id)arg1 magnitude:(unsigned long long)arg2 ;
-(id)trends_mediaStatus;
-(BOOL)isPromoted;
-(NSDictionary *)scribeItem;
-(NSString *)scribeItemImpressionID;
-(BOOL)isEarned;
-(unsigned long long)changeTypeWithTrend:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)advertiserName;
-(NSString *)trendDescription;
-(id)trendDetails;
-(BOOL)isPolitical;
-(NSArray *)mediaStatuses;
-(NSString *)targetQuery;
-(NSArray *)targetPinnedTweetIDs;
-(id)timelinePlistDictionaryValue;
-(id)initWithTimelinePlistDictionary:(id)arg1 ;
-(BOOL)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2 ;
-(id)allStatusIDsInTimelinePlistDictionary;
-(NSString *)contextMode;
-(NSString *)promotedID;
-(NSString *)metaDescription;
-(BOOL)isSimilarToTrend:(id)arg1 ;
-(NSArray *)mediaStatusIDs;
-(NSString *)disclosureType;
-(void)setMediaStatusIDs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(unsigned long long)index;
-(unsigned long long)magnitude;
-(NSString *)rank;
@end
