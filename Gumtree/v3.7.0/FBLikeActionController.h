/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/FBRequestConnectionDelegate.h>
#import <Gumtree/NSCoding.h>
#import <Gumtree/NSDiscardableContent.h>

@class FBSession, NSString;

@interface FBLikeActionController : NSObject <FBRequestConnectionDelegate, NSCoding, NSDiscardableContent> {

	unsigned long long _contentAccessCount;
	FBSession* _session;
	unsigned long long _refreshState;
	BOOL _objectIsLiked;
	BOOL _contentDiscarded;
	BOOL _objectIsLikedIsPending;
	BOOL _objectIsLikedOnServer;
	BOOL _objectIsPage;
	NSString* _objectID;
	unsigned long long _objectType;
	NSString* _likeCountStringWithLike;
	NSString* _likeCountStringWithoutLike;
	NSString* _socialSentenceWithLike;
	NSString* _socialSentenceWithoutLike;
	NSString* _unlikeToken;
	NSString* _verifiedObjectID;

}

@property (nonatomic,copy,readonly) NSString * likeCountString; 
@property (nonatomic,copy,readonly) NSString * objectID;                                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned long long objectType;                              //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL objectIsLiked;                                           //@synthesize objectIsLiked=_objectIsLiked - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialSentence; 
@property (assign,getter=isContentDiscarded,nonatomic) BOOL contentDiscarded;              //@synthesize contentDiscarded=_contentDiscarded - In the implementation block
@property (nonatomic,copy) NSString * likeCountStringWithLike;                             //@synthesize likeCountStringWithLike=_likeCountStringWithLike - In the implementation block
@property (nonatomic,copy) NSString * likeCountStringWithoutLike;                          //@synthesize likeCountStringWithoutLike=_likeCountStringWithoutLike - In the implementation block
@property (assign,nonatomic) BOOL objectIsLikedIsPending;                                  //@synthesize objectIsLikedIsPending=_objectIsLikedIsPending - In the implementation block
@property (assign,nonatomic) BOOL objectIsLikedOnServer;                                   //@synthesize objectIsLikedOnServer=_objectIsLikedOnServer - In the implementation block
@property (assign,nonatomic) BOOL objectIsPage;                                            //@synthesize objectIsPage=_objectIsPage - In the implementation block
@property (nonatomic,copy) NSString * socialSentenceWithLike;                              //@synthesize socialSentenceWithLike=_socialSentenceWithLike - In the implementation block
@property (nonatomic,copy) NSString * socialSentenceWithoutLike;                           //@synthesize socialSentenceWithoutLike=_socialSentenceWithoutLike - In the implementation block
@property (nonatomic,copy) NSString * unlikeToken;                                         //@synthesize unlikeToken=_unlikeToken - In the implementation block
@property (nonatomic,copy) NSString * verifiedObjectID;                                    //@synthesize verifiedObjectID=_verifiedObjectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)likeActionControllerForObjectID:(id)arg1 objectType:(unsigned long long)arg2 ;
+(BOOL)isDisabled;
-(void)_serialize;
-(id)initWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 session:(id)arg3 ;
-(void)_refreshWithMode:(unsigned long long)arg1 ;
-(BOOL)objectIsLiked;
-(NSString *)likeCountStringWithLike;
-(NSString *)likeCountStringWithoutLike;
-(NSString *)socialSentenceWithLike;
-(NSString *)socialSentenceWithoutLike;
-(void)_setExecuting:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)_useOGLike;
-(void)_updateWithObjectIsLiked:(unsigned long long)arg1 likeCountStringWithLike:(id)arg2 likeCountStringWithoutLike:(id)arg3 socialSentenceWithLike:(id)arg4 socialSentenceWithoutLike:(id)arg5 unlikeToken:(id)arg6 soundEnabled:(BOOL)arg7 animated:(BOOL)arg8 deferred:(BOOL)arg9 ;
-(NSString *)unlikeToken;
-(BOOL)objectIsLikedIsPending;
-(void)_publishLikeWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)_presentLikeDialogWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)_publishUnlikeWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)setContentDiscarded:(BOOL)arg1 ;
-(NSString *)verifiedObjectID;
-(void)setVerifiedObjectID:(NSString *)arg1 ;
-(void)setObjectIsPage:(BOOL)arg1 ;
-(BOOL)objectIsLikedOnServer;
-(void)setObjectIsLikedIsPending:(BOOL)arg1 ;
-(void)setObjectIsLikedOnServer:(BOOL)arg1 ;
-(void)setUnlikeToken:(NSString *)arg1 ;
-(void)_publishIfNeededWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 ;
-(void)_ensureVerifiedObjectID:(/*^block*/id)arg1 ;
-(void)setObjectIsLiked:(BOOL)arg1 ;
-(void)setLikeCountStringWithLike:(NSString *)arg1 ;
-(void)setLikeCountStringWithoutLike:(NSString *)arg1 ;
-(void)setSocialSentenceWithLike:(NSString *)arg1 ;
-(void)setSocialSentenceWithoutLike:(NSString *)arg1 ;
-(BOOL)objectIsPage;
-(NSString *)likeCountString;
-(NSString *)socialSentence;
-(void)toggleLikeWithSoundEnabled:(BOOL)arg1 analyticsParameters:(id)arg2 ;
-(void)refresh;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(unsigned long long)objectType;
-(NSString *)objectID;
@end

