/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterStatusSocialContext.h>

@class NSString, NSArray;

@interface TFNTwitterStatusAuthorAndActorSocialContext : NSObject <TFNTwitterStatusSocialContext> {

	BOOL _isFollowingAuthor;
	BOOL _isFollowedByAuthor;
	NSString* _genericSocialContext;
	NSArray* _relatedUserGroups;

}

@property (assign,nonatomic) BOOL isFollowingAuthor;                           //@synthesize isFollowingAuthor=_isFollowingAuthor - In the implementation block
@property (assign,nonatomic) BOOL isFollowedByAuthor;                          //@synthesize isFollowedByAuthor=_isFollowedByAuthor - In the implementation block
@property (nonatomic,copy) NSString * genericSocialContext;                    //@synthesize genericSocialContext=_genericSocialContext - In the implementation block
@property (nonatomic,retain) NSArray * relatedUserGroups;                      //@synthesize relatedUserGroups=_relatedUserGroups - In the implementation block
@property (nonatomic,readonly) BOOL isInReplyToSocialContextType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_socialContextTypeForString:(id)arg1 ;
-(id)primaryUser;
-(id)socialText;
-(id)allUsers;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(BOOL)isFollowingAuthor;
-(BOOL)isFollowedByAuthor;
-(NSArray *)relatedUserGroups;
-(BOOL)socialTextIsActivityCount;
-(id)activityName;
-(id)timelinePlistDictionaryValue;
-(id)initWithTimelinePlistDictionary:(id)arg1 ;
-(id)plistDictionaryValueForTimeline:(BOOL)arg1 ;
-(void)setIsFollowingAuthor:(BOOL)arg1 ;
-(void)setGenericSocialContext:(NSString *)arg1 ;
-(BOOL)updateActivityCountsWithFavoriteCount:(unsigned long long)arg1 retweetCount:(unsigned long long)arg2 ;
-(long long)_primarySocialContextType;
-(NSString *)genericSocialContext;
-(id)_primaryRelatedUserFullName;
-(BOOL)isInReplyToSocialContextType;
-(void)setIsFollowedByAuthor:(BOOL)arg1 ;
-(void)setRelatedUserGroups:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
