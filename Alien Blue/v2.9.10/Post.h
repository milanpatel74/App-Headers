/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/VotableElement.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary, NSAttributedString, MPNativeAd;

@interface Post : VotableElement <NSCoding> {

	BOOL visited_;
	BOOL _stickied;
	BOOL _nsfw;
	BOOL _saved;
	BOOL _hidden;
	BOOL _selfPost;
	BOOL _reported;
	BOOL _promoted;
	long long score_;
	NSString* _title;
	NSString* _selftext;
	NSString* _selftextHtml;
	NSString* _linkFlairText;
	NSString* _url;
	NSString* _domain;
	NSString* _rawThumbnail;
	NSDictionary* _preview;
	NSDictionary* _subredditDetail;
	unsigned long long _gilded;
	long long _numComments;
	unsigned long long _numberOfImagesInCommentThread;
	NSAttributedString* _cachedStyledTitle;
	NSString* _contextCommentIdent;

}

@property (readonly) MPNativeAd * nativeAd; 
@property (readonly) NSString * sponsoredPostThreadName; 
@property (readonly) BOOL sponsoredPostHasCommentThread; 
@property (readonly) BOOL sponsoredPostAllowsOptimalBrowser; 
@property (readonly) BOOL sponsoredPostRequiresConversionTracking; 
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * selftext;                                 //@synthesize selftext=_selftext - In the implementation block
@property (nonatomic,retain) NSString * selftextHtml;                             //@synthesize selftextHtml=_selftextHtml - In the implementation block
@property (nonatomic,retain) NSString * linkFlairText;                            //@synthesize linkFlairText=_linkFlairText - In the implementation block
@property (nonatomic,retain) NSString * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (readonly) NSString * tinyDomain; 
@property (nonatomic,retain) NSString * rawThumbnail;                             //@synthesize rawThumbnail=_rawThumbnail - In the implementation block
@property (readonly) NSString * thumbnail; 
@property (nonatomic,retain) NSDictionary * preview;                              //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) NSDictionary * subredditDetail;                      //@synthesize subredditDetail=_subredditDetail - In the implementation block
@property (readonly) int linkType; 
@property (readonly) BOOL needsNSFWWarning; 
@property (readonly) NSString * linkTypeIconName; 
@property (assign) BOOL stickied;                                                 //@synthesize stickied=_stickied - In the implementation block
@property (assign) BOOL nsfw;                                                     //@synthesize nsfw=_nsfw - In the implementation block
@property (assign) BOOL saved;                                                    //@synthesize saved=_saved - In the implementation block
@property (assign) BOOL hidden;                                                   //@synthesize hidden=_hidden - In the implementation block
@property (assign) BOOL selfPost;                                                 //@synthesize selfPost=_selfPost - In the implementation block
@property (assign,nonatomic) BOOL visited; 
@property (assign) BOOL reported;                                                 //@synthesize reported=_reported - In the implementation block
@property (assign) BOOL promoted;                                                 //@synthesize promoted=_promoted - In the implementation block
@property (readonly) BOOL hasExternalLink; 
@property (assign) unsigned long long gilded;                                     //@synthesize gilded=_gilded - In the implementation block
@property (assign) long long numComments;                                         //@synthesize numComments=_numComments - In the implementation block
@property (assign) unsigned long long numberOfImagesInCommentThread;              //@synthesize numberOfImagesInCommentThread=_numberOfImagesInCommentThread - In the implementation block
@property (readonly) NSString * linkFlairTextForPresentation; 
@property (nonatomic,retain) NSAttributedString * cachedStyledTitle;              //@synthesize cachedStyledTitle=_cachedStyledTitle - In the implementation block
@property (retain) NSString * contextCommentIdent;                                //@synthesize contextCommentIdent=_contextCommentIdent - In the implementation block
+(id)fetchPostsForPath:(id)arg1 params:(id)arg2 shouldPixelTrack:(BOOL)arg3 onComplete:(/*^block*/id)arg4 ;
+(id)fetchPostsForPath:(id)arg1 params:(id)arg2 onComplete:(/*^block*/id)arg3 ;
+(id)fetchAdvertorialPostsForSubredditPath:(id)arg1 onComplete:(/*^block*/id)arg2 ;
+(id)fetchLastSubmittedPostForUser:(id)arg1 onComplete:(/*^block*/id)arg2 ;
+(id)fetchPostInformationWithName:(id)arg1 onComplete:(/*^block*/id)arg2 ;
+(id)postFromDictionary:(id)arg1 ;
+(id)postSkeletonFromRedditUrl:(id)arg1 ;
-(void)drawSubdetailsInRect_iPhone:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)styledTitleWithDetails_iPad;
-(void)drawSubdetailsInRect_iPad:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)trackSponsoredCommentsVisitIfNecessary;
-(void)trackSponsoredLinkVisitIfNecessary;
-(BOOL)sponsoredPostHasCommentThread;
-(BOOL)sponsoredPostAllowsOptimalBrowser;
-(BOOL)sponsoredPostRequiresConversionTracking;
-(MPNativeAd *)nativeAd;
-(void)updateWithNativeAdData:(id)arg1 ;
-(NSString *)sponsoredPostThreadName;
-(void)setNativeAd:(MPNativeAd *)arg1 ;
-(void)flushCachedStyles;
-(double)titleHeightConstrainedToWidth:(double)arg1 ;
-(void)drawCommentCountInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)drawTitleCenteredVerticallyInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)drawSubdetailsInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)linkFlairBackgroundColorForPresentation;
-(id)styledTitle;
-(void)setHeightCache:(id)arg1 ;
-(double)_heightForTitleConstrainedToWidth:(double)arg1 ;
-(id)styledTitleWithDetails;
-(void)preprocessStyles;
-(void)drawTimeAgoInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)heightCache;
-(void)toggleSaved;
-(void)toggleHide;
-(void)report;
-(BOOL)promoted;
-(NSString *)contextCommentIdent;
-(NSString *)linkTypeIconName;
-(BOOL)isInVisitedList;
-(void)markVisited;
-(BOOL)reported;
-(BOOL)selfPost;
-(NSString *)rawThumbnail;
-(NSString *)linkFlairTextForPresentation;
-(void)setSelftext:(NSString *)arg1 ;
-(void)setSelftextHtml:(NSString *)arg1 ;
-(void)setLinkFlairText:(NSString *)arg1 ;
-(NSString *)linkFlairText;
-(void)setRawThumbnail:(NSString *)arg1 ;
-(void)setNumComments:(long long)arg1 ;
-(void)setStickied:(BOOL)arg1 ;
-(void)setNsfw:(BOOL)arg1 ;
-(void)setSelfPost:(BOOL)arg1 ;
-(void)setPromoted:(BOOL)arg1 ;
-(void)setGilded:(unsigned long long)arg1 ;
-(void)setSubredditDetail:(NSDictionary *)arg1 ;
-(void)updateVisitedStatus;
-(void)setContextCommentIdent:(NSString *)arg1 ;
-(BOOL)needsNSFWWarning;
-(BOOL)stickied;
-(NSString *)tinyDomain;
-(BOOL)visited;
-(BOOL)hasExternalLink;
-(NSString *)selftext;
-(NSString *)selftextHtml;
-(NSDictionary *)subredditDetail;
-(BOOL)nsfw;
-(void)setReported:(BOOL)arg1 ;
-(unsigned long long)gilded;
-(long long)numComments;
-(unsigned long long)numberOfImagesInCommentThread;
-(void)setNumberOfImagesInCommentThread:(unsigned long long)arg1 ;
-(NSAttributedString *)cachedStyledTitle;
-(void)setCachedStyledTitle:(NSAttributedString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)title;
-(NSString *)domain;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)thumbnail;
-(void)setScore:(long long)arg1 ;
-(BOOL)hidden;
-(void)setVisited:(BOOL)arg1 ;
-(int)linkType;
-(void)setPreview:(NSDictionary *)arg1 ;
-(long long)score;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)saved;
-(void)setSaved:(BOOL)arg1 ;
-(NSDictionary *)preview;
@end
