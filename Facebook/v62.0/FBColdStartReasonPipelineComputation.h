/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBColdStartReasonPipelineComputation : FBValueObject <NSCopying> {

	BOOL _shouldLog;
	NSString* _reason;
	NSDictionary* _loggingContext;

}

@property (nonatomic,copy,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * loggingContext;              //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldLog;                                  //@synthesize shouldLog=_shouldLog - In the implementation block
-(id)initWithReason:(id)arg1 loggingContext:(id)arg2 shouldLog:(BOOL)arg3 ;
-(NSDictionary *)loggingContext;
-(NSString *)reason;
-(BOOL)shouldLog;
@end
