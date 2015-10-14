/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>
#import <UIKit/UIActivityItemSource.h>

@class NSArray, NSMutableArray, NSAttributedString, NSString, PTHTweetbotBoundingBox, NSURL, NSDate, PTHTweetbotPlace, PTHTweetbotUser, PTHTweetbotCursor;

@interface PTHTweetbotStatus : PTHTweetbotObject <UIActivityItemSource> {

	NSArray* _entities;
	NSMutableArray* _refreshBlocks;
	BOOL _mentionsCurrentUser;
	BOOL _quotesCurrentUser;
	BOOL _favorited;
	BOOL _retweeted;
	BOOL _missing;
	BOOL _refreshing;
	NSAttributedString* _attributedText;
	NSString* _expandedURLText;
	long long _originalTID;
	PTHTweetbotBoundingBox* _boundingBox;
	NSString* _sourceText;
	NSURL* _sourceURL;
	NSDate* _createdAt;
	NSString* _text;
	long long _retweetedStatusTID;
	long long _replyStatusTID;
	long long _replyUserTID;
	unsigned long long _favoriteCount;
	unsigned long long _retweetCount;
	unsigned long long _replyCount;
	unsigned long long _quoteCount;
	NSString* _source;
	PTHTweetbotPlace* _place;
	NSString* _locationName;
	PTHTweetbotUser* _user;
	PTHTweetbotUser* _retweetedByUser;
	PTHTweetbotStatus* _quotedStatus;
	long long _currentUserRetweetTID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * createdAt;                                         //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long retweetedStatusTID;                               //@synthesize retweetedStatusTID=_retweetedStatusTID - In the implementation block
@property (nonatomic,readonly) long long originalTID;                                      //@synthesize originalTID=_originalTID - In the implementation block
@property (nonatomic,readonly) long long replyStatusTID;                                   //@synthesize replyStatusTID=_replyStatusTID - In the implementation block
@property (nonatomic,readonly) long long replyUserTID;                                     //@synthesize replyUserTID=_replyUserTID - In the implementation block
@property (nonatomic,readonly) BOOL mentionsCurrentUser;                                   //@synthesize mentionsCurrentUser=_mentionsCurrentUser - In the implementation block
@property (nonatomic,readonly) BOOL quotesCurrentUser;                                     //@synthesize quotesCurrentUser=_quotesCurrentUser - In the implementation block
@property (assign,getter=isFavorited,nonatomic) BOOL favorited;                            //@synthesize favorited=_favorited - In the implementation block
@property (assign,nonatomic) unsigned long long favoriteCount;                             //@synthesize favoriteCount=_favoriteCount - In the implementation block
@property (assign,getter=isRetweeted,nonatomic) BOOL retweeted;                            //@synthesize retweeted=_retweeted - In the implementation block
@property (assign,nonatomic) unsigned long long retweetCount;                              //@synthesize retweetCount=_retweetCount - In the implementation block
@property (assign,nonatomic) unsigned long long replyCount;                                //@synthesize replyCount=_replyCount - In the implementation block
@property (assign,nonatomic) unsigned long long quoteCount;                                //@synthesize quoteCount=_quoteCount - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedText;                        //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,__weak,readonly) NSString * decodedText; 
@property (nonatomic,readonly) NSString * expandedURLText;                                 //@synthesize expandedURLText=_expandedURLText - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceText;                                 //@synthesize sourceText=_sourceText - In the implementation block
@property (nonatomic,readonly) NSURL * sourceURL;                                          //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) PTHTweetbotBoundingBox * boundingBox;                       //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,readonly) PTHTweetbotPlace * place;                                   //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) NSString * locationName;                                    //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,readonly) BOOL isRetweet; 
@property (nonatomic,readonly) BOOL canRetweet; 
@property (nonatomic,readonly) BOOL canUnretweet; 
@property (nonatomic,readonly) BOOL isReply; 
@property (nonatomic,readonly) BOOL isReplyToCurrentUser; 
@property (nonatomic,readonly) BOOL isFromCurrentUser; 
@property (nonatomic,readonly) PTHTweetbotUser * user;                                     //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) long long userTID; 
@property (nonatomic,readonly) PTHTweetbotUser * retweetedByUser;                          //@synthesize retweetedByUser=_retweetedByUser - In the implementation block
@property (nonatomic,readonly) long long retweetedByUserTID; 
@property (nonatomic,retain) NSArray * entities; 
@property (nonatomic,readonly) BOOL hasMedia; 
@property (nonatomic,__weak,readonly) NSURL * twitterURL; 
@property (nonatomic,__weak,readonly) NSURL * favstarURL; 
@property (nonatomic,__weak,readonly) NSString * emailHTML; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * repliesCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * conversationCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * retweetsCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * favoritesCursor; 
@property (getter=isMissing,nonatomic,readonly) BOOL missing;                              //@synthesize missing=_missing - In the implementation block
@property (nonatomic,readonly) PTHTweetbotStatus * quotedStatus;                           //@synthesize quotedStatus=_quotedStatus - In the implementation block
@property (assign,nonatomic) long long currentUserRetweetTID;                              //@synthesize currentUserRetweetTID=_currentUserRetweetTID - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) BOOL refreshing;                          //@synthesize refreshing=_refreshing - In the implementation block
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
+(id)newWithAccount:(id)arg1 tid:(long long)arg2 ;
+(void)postDraft:(id)arg1 progress:(/*^block*/id)arg2 result:(/*^block*/id)arg3 ;
+(void)lookupIfNeeded:(id)arg1 result:(/*^block*/id)arg2 ;
+(void)lookup:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)newDetailViewController;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(NSString *)decodedText;
-(unsigned long long)favoriteCount;
-(PTHTweetbotStatus *)quotedStatus;
-(BOOL)isMissing;
-(id)attributedText:(BOOL)arg1 ;
-(PTHTweetbotCursor *)favoritesCursor;
-(void)refreshIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)hasString:(id)arg1 ;
-(BOOL)mentionsCurrentUser;
-(PTHTweetbotCursor *)conversationCursor;
-(long long)replyUserTID;
-(long long)replyStatusTID;
-(void)destroy:(/*^block*/id)arg1 ;
-(NSString *)expandedURLText;
-(BOOL)isFromCurrentUser;
-(PTHTweetbotCursor *)retweetsCursor;
-(BOOL)isFavorited;
-(void)setFavorited:(BOOL)arg1 ;
-(BOOL)isRetweet;
-(NSURL *)favstarURL;
-(BOOL)canRetweet;
-(void)retweet:(/*^block*/id)arg1 ;
-(BOOL)canUnretweet;
-(void)unretweet:(/*^block*/id)arg1 ;
-(void)favorite:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)retweetedByUser;
-(BOOL)isRetweeted;
-(long long)retweetedByUserTID;
-(NSString *)emailHTML;
-(void)unfavorite:(/*^block*/id)arg1 ;
-(long long)originalTID;
-(long long)retweetedStatusTID;
-(PTHTweetbotCursor *)repliesCursor;
-(void)updateFromDictionary:(id)arg1 ;
-(long long)userTID;
-(void)_refresh:(id)arg1 error:(id)arg2 ;
-(void)setFavoriteCount:(unsigned long long)arg1 ;
-(BOOL)isReplyToCurrentUser;
-(BOOL)_updateFromDictionary:(id)arg1 ;
-(void)_updateCountsFromDictionary:(id)arg1 ;
-(void)_loadSourceInfo;
-(void)_activityDidUpdate;
-(void)setCurrentUserRetweetTID:(long long)arg1 ;
-(void)setReplyCount:(unsigned long long)arg1 ;
-(void)setQuoteCount:(unsigned long long)arg1 ;
-(BOOL)quotesCurrentUser;
-(void)setRetweeted:(BOOL)arg1 ;
-(unsigned long long)replyCount;
-(unsigned long long)quoteCount;
-(long long)currentUserRetweetTID;
-(void)setEntities:(NSArray *)arg1 ;
-(void)refresh:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)user;
-(BOOL)hasMedia;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)source;
-(PTHTweetbotBoundingBox *)boundingBox;
-(BOOL)isRefreshing;
-(BOOL)isReply;
-(NSString *)sourceText;
-(void)setPlace:(PTHTweetbotPlace *)arg1 ;
-(PTHTweetbotPlace *)place;
-(NSURL *)sourceURL;
-(NSString *)locationName;
-(void)setRefreshing:(BOOL)arg1 ;
-(NSArray *)entities;
-(NSDate *)createdAt;
-(unsigned long long)retweetCount;
-(void)setRetweetCount:(unsigned long long)arg1 ;
-(NSURL *)twitterURL;
-(void)setAccount:(id)arg1 ;
@end

