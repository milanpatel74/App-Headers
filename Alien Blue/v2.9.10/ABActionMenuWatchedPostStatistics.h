/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString;

@interface ABActionMenuWatchedPostStatistics : NSObject {

	long long _lastPresentedReplyCount;
	long long _lastPresentedScore;
	NSString* _postTitle;
	long long _commentCountDelta;
	long long _scoreDelta;
	double _lastPresentedTimestamp;
	NSString* _authenticatedUserAtLastPresentation;
	NSString* _votableElementIdent;
	NSString* _preferenceKeyPrefixForDefaults;

}

@property (readonly) BOOL shouldRestrictNetworkUpdateBasedOnRateLimiting; 
@property (readonly) NSAttributedString * attributedStringBasedOnLatestStats; 
@property (assign) long long lastPresentedReplyCount;                                      //@synthesize lastPresentedReplyCount=_lastPresentedReplyCount - In the implementation block
@property (assign) long long lastPresentedScore;                                           //@synthesize lastPresentedScore=_lastPresentedScore - In the implementation block
@property (copy) NSString * postTitle;                                                     //@synthesize postTitle=_postTitle - In the implementation block
@property (assign) long long commentCountDelta;                                            //@synthesize commentCountDelta=_commentCountDelta - In the implementation block
@property (assign) long long scoreDelta;                                                   //@synthesize scoreDelta=_scoreDelta - In the implementation block
@property (assign) double lastPresentedTimestamp;                                          //@synthesize lastPresentedTimestamp=_lastPresentedTimestamp - In the implementation block
@property (copy) NSString * authenticatedUserAtLastPresentation;                           //@synthesize authenticatedUserAtLastPresentation=_authenticatedUserAtLastPresentation - In the implementation block
@property (copy) NSString * votableElementIdent;                                           //@synthesize votableElementIdent=_votableElementIdent - In the implementation block
@property (copy) NSString * preferenceKeyPrefixForDefaults;                                //@synthesize preferenceKeyPrefixForDefaults=_preferenceKeyPrefixForDefaults - In the implementation block
+(id)lastSubmittedPostStats;
+(id)watchedPostOneStats;
+(id)watchedPostTwoStats;
-(NSString *)votableElementIdent;
-(NSString *)postTitle;
-(BOOL)shouldRestrictNetworkUpdateBasedOnRateLimiting;
-(NSAttributedString *)attributedStringBasedOnLatestStats;
-(void)updateBasedOnReceivedPost:(id)arg1 ;
-(NSString *)authenticatedUserAtLastPresentation;
-(void)setAuthenticatedUserAtLastPresentation:(NSString *)arg1 ;
-(id)initWithPreferenceKeyPrefix:(id)arg1 ;
-(void)updateWithReplyCount:(long long)arg1 score:(unsigned long long)arg2 votableElementIdent:(id)arg3 postTitle:(id)arg4 ;
-(long long)lastPresentedScore;
-(long long)scoreDelta;
-(void)setPreferenceKeyPrefixForDefaults:(NSString *)arg1 ;
-(NSString *)preferenceKeyPrefixForDefaults;
-(void)setLastPresentedScore:(long long)arg1 ;
-(void)setLastPresentedReplyCount:(long long)arg1 ;
-(void)setCommentCountDelta:(long long)arg1 ;
-(void)setScoreDelta:(long long)arg1 ;
-(long long)lastPresentedReplyCount;
-(void)setLastPresentedTimestamp:(double)arg1 ;
-(void)setVotableElementIdent:(NSString *)arg1 ;
-(void)setPostTitle:(NSString *)arg1 ;
-(long long)commentCountDelta;
-(double)lastPresentedTimestamp;
@end
