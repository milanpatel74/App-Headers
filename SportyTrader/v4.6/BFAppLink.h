/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface BFAppLink : NSObject {

	BOOL _isBackToReferrer;
	NSURL* _sourceURL;
	NSArray* _targets;
	NSURL* _webURL;

}

@property (nonatomic,retain) NSURL * sourceURL;                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSArray * targets;                    //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                     //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) BOOL isBackToReferrer;              //@synthesize isBackToReferrer=_isBackToReferrer - In the implementation block
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 ;
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(BOOL)arg4 ;
-(id)initWithIsBackToReferrer:(BOOL)arg1 ;
-(void)setIsBackToReferrer:(BOOL)arg1 ;
-(BOOL)isBackToReferrer;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setWebURL:(NSURL *)arg1 ;
-(NSArray *)targets;
-(void)setTargets:(NSArray *)arg1 ;
-(NSURL *)webURL;
@end
