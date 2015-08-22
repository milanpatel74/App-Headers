/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol TFNDirectMessageContext;
@class TFNDirectMessageIncrementalUpdatesResponse, TFNDirectMessageModel;

@interface TFNDirectMessageProcessIncrementalUpdatesResponseOperation : NSOperation {

	TFNDirectMessageIncrementalUpdatesResponse* _response;
	TFNDirectMessageModel* _model;
	id<TFNDirectMessageContext> _context;

}

@property (nonatomic,readonly) TFNDirectMessageIncrementalUpdatesResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) TFNDirectMessageModel * model;                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<TFNDirectMessageContext> context;                                //@synthesize context=_context - In the implementation block
-(void)_applyResponse:(id)arg1 toModel:(id)arg2 ;
-(id)initWithIncrementalUpdatesResponse:(id)arg1 model:(id)arg2 context:(id)arg3 ;
-(id)init;
-(id<TFNDirectMessageContext>)context;
-(TFNDirectMessageModel *)model;
-(TFNDirectMessageIncrementalUpdatesResponse *)response;
-(void)main;
@end
