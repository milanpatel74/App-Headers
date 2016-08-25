/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/VotableElement.h>

@class NSString, NSMutableArray, NSAttributedString;

@interface Comment : VotableElement {

	NSString* _body;
	NSString* _bodyHTML;
	NSMutableArray* _links;
	unsigned long long _numberOfReplies;
	unsigned long long _commentIndex;
	NSString* _parentName;
	NSString* _parentIdent;
	NSString* _linkIdent;
	NSString* _flairText;
	NSAttributedString* _cachedStyledBody;

}

@property (readonly) NSAttributedString * styledBody; 
@property (nonatomic,retain) NSString * body;                                    //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * bodyHTML;                                //@synthesize bodyHTML=_bodyHTML - In the implementation block
@property (nonatomic,retain) NSMutableArray * links;                             //@synthesize links=_links - In the implementation block
@property (assign) unsigned long long numberOfReplies;                           //@synthesize numberOfReplies=_numberOfReplies - In the implementation block
@property (assign) unsigned long long commentIndex;                              //@synthesize commentIndex=_commentIndex - In the implementation block
@property (nonatomic,retain) NSString * parentName;                              //@synthesize parentName=_parentName - In the implementation block
@property (nonatomic,retain) NSString * parentIdent;                             //@synthesize parentIdent=_parentIdent - In the implementation block
@property (nonatomic,retain) NSString * linkIdent;                               //@synthesize linkIdent=_linkIdent - In the implementation block
@property (nonatomic,retain) NSString * flairText;                               //@synthesize flairText=_flairText - In the implementation block
@property (nonatomic,retain) NSAttributedString * cachedStyledBody;              //@synthesize cachedStyledBody=_cachedStyledBody - In the implementation block
+(id)fetchCommentsForPost:(id)arg1 contextId:(id)arg2 params:(id)arg3 onComplete:(/*^block*/id)arg4 ;
+(id)commentFromDictionary:(id)arg1 ;
-(double)heightForBodyConstrainedToWidth:(double)arg1 ;
-(void)flushCachedStyles;
-(void)setHeightCache:(id)arg1 ;
-(NSAttributedString *)styledBody;
-(id)heightCache;
-(void)preprocessLinksOnly;
-(void)preprocessLinksAndAttributedStyle;
-(void)processLinks;
-(id)parseBodyForDescribedLinks;
-(id)parseBodyForUndescribedLinks;
-(void)deleteComment;
-(void)setCachedStyledBody:(NSAttributedString *)arg1 ;
-(void)setBodyHTML:(NSString *)arg1 ;
-(void)setParentName:(NSString *)arg1 ;
-(NSString *)parentName;
-(void)setParentIdent:(NSString *)arg1 ;
-(void)setLinkIdent:(NSString *)arg1 ;
-(void)setFlairText:(NSString *)arg1 ;
-(NSString *)flairText;
-(NSString *)bodyHTML;
-(unsigned long long)numberOfReplies;
-(void)setNumberOfReplies:(unsigned long long)arg1 ;
-(unsigned long long)commentIndex;
-(void)setCommentIndex:(unsigned long long)arg1 ;
-(NSString *)parentIdent;
-(NSString *)linkIdent;
-(NSAttributedString *)cachedStyledBody;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)body;
-(NSMutableArray *)links;
-(void)setBody:(NSString *)arg1 ;
-(void)setLinks:(NSMutableArray *)arg1 ;
@end
