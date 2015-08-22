/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSURLSession, CRNetStatDispatch;

@interface CRNSURLSessionProxy : NSProxy {

	NSURLSession* _session;
	CRNetStatDispatch* _dispatch;

}

@property (nonatomic,retain,readonly) NSURLSession * session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain,readonly) CRNetStatDispatch * dispatch;              //@synthesize dispatch=_dispatch - In the implementation block
+(BOOL)isInstrumented;
+(void)instrumentNSURLSessionWithDispatch:(id)arg1 ;
+(void)uninstrumentNSURLSession;
-(id)initWithSession:(id)arg1 andDispatch:(id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSURLSession *)session;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(CRNetStatDispatch *)dispatch;
@end
